param(
    [string]$WorkshopRoot = "E:\steam\steamapps\workshop\content\400750",
    [string]$Output = ".audit\sources\vehicle-property-source-slice.zip"
)

$ErrorActionPreference = "Stop"

$commandSevenZip = Get-Command 7z.exe -ErrorAction SilentlyContinue
$sevenZip = @(
    "$env:ProgramFiles\7-Zip\7z.exe",
    "${env:ProgramFiles(x86)}\7-Zip\7z.exe",
    $(if ($commandSevenZip) { $commandSevenZip.Source })
) | Where-Object { $_ -and (Test-Path $_) } | Select-Object -First 1

if (-not $sevenZip) {
    throw "7-Zip was not found. Install 7-Zip, then rerun this command."
}

$mods = @(
    @{ Name = "sc-platform"; Root = (Join-Path $WorkshopRoot "3629384797") },
    @{ Name = "last-victim"; Root = (Join-Path $WorkshopRoot "3629381350") }
)

foreach ($mod in $mods) {
    if (-not (Test-Path $mod.Root)) {
        throw "Required Workshop mod folder not found: $($mod.Root)"
    }
}

$textEntryPattern = '(?i)\.(ext|set|inc|def|pattern|weapon|lua|txt)$'
$pathPattern = '(?i)(properties|vehicle|armor|durability|smgcw|plasma|autocannon|car\.ext)'
$contentPattern = '(?i)(vehicle_medium_autocannon|smgcw_plasma|general_durability|global_damage_mod|%health|%ammo|vehicle_ext|car\.ext|armor\.ext)'

$outputPath = [System.IO.Path]::GetFullPath((Join-Path (Get-Location) $Output))
$outputDir = Split-Path -Parent $outputPath
New-Item -ItemType Directory -Force -Path $outputDir | Out-Null

$tempRoot = Join-Path ([System.IO.Path]::GetTempPath()) ("cx40k-vehicle-properties-" + [guid]::NewGuid().ToString("N"))
$scanRoot = Join-Path $tempRoot "scan"
$filesRoot = Join-Path $tempRoot "files"
New-Item -ItemType Directory -Force -Path $scanRoot | Out-Null
New-Item -ItemType Directory -Force -Path $filesRoot | Out-Null

function Copy-RelevantFamily {
    param(
        [string]$SourceRoot,
        [string]$DestinationLabel
    )

    $textFiles = @(
        Get-ChildItem -Path $SourceRoot -Recurse -File -ErrorAction SilentlyContinue |
            Where-Object { $_.Name -match $textEntryPattern }
    )

    # Do not name this variable $matches. PowerShell variable names are
    # case-insensitive, so that collides with the automatic regex $Matches map.
    $matchedFiles = [System.Collections.Generic.List[System.IO.FileInfo]]::new()
    foreach ($file in $textFiles) {
        $pathMatch = $file.FullName -match $pathPattern
        $contentMatch = $false
        if (-not $pathMatch) {
            $contentMatch = Select-String -Path $file.FullName -Pattern $contentPattern -Quiet -ErrorAction SilentlyContinue
        }
        if ($pathMatch -or $contentMatch) {
            $matchedFiles.Add([System.IO.FileInfo]$file)
        }
    }

    $familyDirectories = @($matchedFiles | ForEach-Object { $_.DirectoryName } | Sort-Object -Unique)
    $copied = 0
    foreach ($directory in $familyDirectories) {
        foreach ($file in Get-ChildItem -Path $directory -File -ErrorAction SilentlyContinue | Where-Object { $_.Name -match $textEntryPattern }) {
            $relative = [System.IO.Path]::GetRelativePath($SourceRoot, $file.FullName)
            $destination = Join-Path (Join-Path $filesRoot $DestinationLabel) $relative
            New-Item -ItemType Directory -Force -Path (Split-Path -Parent $destination) | Out-Null
            Copy-Item -Force $file.FullName $destination
            $copied += 1
        }
    }

    return [ordered]@{
        scanned_text_files = $textFiles.Count
        matched_files = $matchedFiles.Count
        family_directories = $familyDirectories.Count
        copied_files = $copied
    }
}

try {
    $manifestSources = @()
    $totalMatched = 0
    $totalCopied = 0
    $scannedPackages = 0

    foreach ($mod in $mods) {
        Write-Host "Scanning loose files in $($mod.Root)..."
        $looseResult = Copy-RelevantFamily -SourceRoot $mod.Root -DestinationLabel (Join-Path "loose" $mod.Name)
        $totalMatched += $looseResult.matched_files
        $totalCopied += $looseResult.copied_files
        $manifestSources += [ordered]@{
            type = "loose"
            mod = $mod.Name
            root = $mod.Root
            result = $looseResult
        }

        $resourceRoot = Join-Path $mod.Root "resource"
        foreach ($pak in Get-ChildItem -Path $resourceRoot -Recurse -File -Filter *.pak -ErrorAction SilentlyContinue) {
            $scannedPackages += 1
            $relativePak = [System.IO.Path]::GetRelativePath($mod.Root, $pak.FullName)
            $packageKey = (($mod.Name + "-" + $relativePak) -replace '[^A-Za-z0-9._-]', '_')
            Write-Host "Indexing $($mod.Name):$relativePak..."

            $listing = & $sevenZip l -slt $pak.FullName 2>&1
            if ($LASTEXITCODE -ne 0) {
                throw "7-Zip failed while listing $($pak.FullName) with exit code $LASTEXITCODE`n$($listing -join [Environment]::NewLine)"
            }

            $entries = @(
                $listing |
                    ForEach-Object {
                        $line = [string]$_
                        if ($line -match '^Path = (.+)$') { $Matches[1] }
                    } |
                    Where-Object { $_ -and ($_ -match $textEntryPattern) } |
                    Sort-Object -Unique
            )

            if ($entries.Count -eq 0) {
                continue
            }

            $packageExtract = Join-Path $scanRoot $packageKey
            New-Item -ItemType Directory -Force -Path $packageExtract | Out-Null
            $listFile = Join-Path $scanRoot ("$packageKey-entries.txt")
            $entries | Set-Content -Encoding utf8NoBOM $listFile

            Write-Host "Extracting $($entries.Count) text entries from $($mod.Name):$relativePak..."
            $extractOutput = & $sevenZip x $pak.FullName "-o$packageExtract" -y -scsUTF-8 "@$listFile" 2>&1
            if ($LASTEXITCODE -ne 0) {
                throw "7-Zip failed while extracting $($pak.FullName) with exit code $LASTEXITCODE`n$($extractOutput -join [Environment]::NewLine)"
            }

            $packageResult = Copy-RelevantFamily -SourceRoot $packageExtract -DestinationLabel (Join-Path (Join-Path "packages" $mod.Name) $packageKey)
            $totalMatched += $packageResult.matched_files
            $totalCopied += $packageResult.copied_files
            $manifestSources += [ordered]@{
                type = "package"
                mod = $mod.Name
                package = $pak.FullName
                relative = $relativePak
                length = $pak.Length
                sha256 = (Get-FileHash -Algorithm SHA256 $pak.FullName).Hash.ToLowerInvariant()
                listed_text_entries = $entries.Count
                result = $packageResult
            }

            Remove-Item -Recurse -Force $packageExtract
            Remove-Item -Force $listFile
        }
    }

    $copiedFiles = @(Get-ChildItem -Path $filesRoot -Recurse -File -ErrorAction SilentlyContinue)
    if ($totalMatched -eq 0 -or $copiedFiles.Count -eq 0) {
        throw "No relevant vehicle-property sources were found in loose files or packaged text after scanning both Workshop mods."
    }

    $hasVehicleMacro = $false
    $hasSmgcwCaller = $false
    foreach ($file in $copiedFiles) {
        if (-not $hasVehicleMacro) {
            $hasVehicleMacro = Select-String -Path $file.FullName -Pattern 'vehicle_medium_autocannon' -Quiet -ErrorAction SilentlyContinue
        }
        if (-not $hasSmgcwCaller) {
            $hasSmgcwCaller = ($file.FullName -match '(?i)smgcw') -or (Select-String -Path $file.FullName -Pattern 'SMGCW' -Quiet -ErrorAction SilentlyContinue)
        }
    }

    if (-not $hasVehicleMacro) {
        throw "The scan found related files but did not find the required vehicle_medium_autocannon definition or call site."
    }
    if (-not $hasSmgcwCaller) {
        throw "The scan found related files but did not find any SMGCW source."
    }

    $manifest = [ordered]@{
        schema_version = 4
        generated_at_utc = [DateTime]::UtcNow.ToString("o")
        workshop_root = $WorkshopRoot
        scanned_packages = $scannedPackages
        total_matched_files = $totalMatched
        total_copied_files = $copiedFiles.Count
        found_vehicle_medium_autocannon = $hasVehicleMacro
        found_smgcw_source = $hasSmgcwCaller
        sources = $manifestSources
    }
    $manifest | ConvertTo-Json -Depth 8 | Set-Content -Encoding UTF8 (Join-Path $tempRoot "manifest.json")

    if (Test-Path $outputPath) {
        Remove-Item -Force $outputPath
    }
    Compress-Archive -Path $filesRoot, (Join-Path $tempRoot "manifest.json") -DestinationPath $outputPath -CompressionLevel Optimal
    Write-Host "Wrote $outputPath"
    Write-Host "Matched files: $totalMatched; copied family files: $($copiedFiles.Count); scanned PAKs: $scannedPackages"
}
finally {
    if (Test-Path $tempRoot) {
        Remove-Item -Recurse -Force $tempRoot
    }
}
