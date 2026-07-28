param(
    [string]$WorkshopRoot = "E:\Steam\steamapps\workshop\content\400750",
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

$scRoot = Join-Path $WorkshopRoot "3629384797"
$lvRoot = Join-Path $WorkshopRoot "3629381350"
$packages = @(
    @{
        Name = "sc-platform-gamelogic"
        Path = (Join-Path $scRoot "resource\gamelogic.pak")
        Pattern = '(?i)(^|[\\/])properties[\\/]vehicle_ext[\\/]'
    },
    @{
        Name = "last-victim-gamelogic"
        Path = (Join-Path $lvRoot "resource\gamelogic.pak")
        Pattern = '(?i)(^|[\\/])properties[\\/]vehicle_ext[\\/]'
    },
    @{
        Name = "last-victim-smgcw"
        Path = (Join-Path $lvRoot "resource\entity.pak")
        Pattern = '(?i)smgcw'
    }
)

foreach ($package in $packages) {
    if (-not (Test-Path $package.Path)) {
        throw "Required package not found: $($package.Path)"
    }
}

$outputPath = [System.IO.Path]::GetFullPath((Join-Path (Get-Location) $Output))
$outputDir = Split-Path -Parent $outputPath
New-Item -ItemType Directory -Force -Path $outputDir | Out-Null

$tempRoot = Join-Path ([System.IO.Path]::GetTempPath()) ("cx40k-vehicle-properties-" + [guid]::NewGuid().ToString("N"))
New-Item -ItemType Directory -Force -Path $tempRoot | Out-Null

try {
    $manifestPackages = @()

    foreach ($package in $packages) {
        Write-Host "Indexing $($package.Name)..."
        $listing = & $sevenZip l -slt $package.Path 2>&1
        if ($LASTEXITCODE -ne 0) {
            throw "7-Zip failed while listing $($package.Path) with exit code $LASTEXITCODE`n$($listing -join [Environment]::NewLine)"
        }

        $entries = @(
            $listing |
                ForEach-Object {
                    $line = [string]$_
                    if ($line -match '^Path = (.+)$') { $Matches[1] }
                } |
                Where-Object { $_ -and ($_ -match $package.Pattern) } |
                Sort-Object -Unique
        )

        if ($entries.Count -eq 0) {
            throw "No archive entries matched $($package.Pattern) in $($package.Path)."
        }

        $destination = Join-Path $tempRoot $package.Name
        New-Item -ItemType Directory -Force -Path $destination | Out-Null
        $listFile = Join-Path $tempRoot ("$($package.Name)-entries.txt")
        $entries | Set-Content -Encoding utf8NoBOM $listFile

        Write-Host "Extracting $($entries.Count) entries from $($package.Name)..."
        $extractOutput = & $sevenZip x $package.Path "-o$destination" -y -scsUTF-8 "@$listFile" 2>&1
        if ($LASTEXITCODE -ne 0) {
            throw "7-Zip failed while extracting $($package.Path) with exit code $LASTEXITCODE`n$($extractOutput -join [Environment]::NewLine)"
        }

        $extractedFiles = @(Get-ChildItem -Path $destination -Recurse -File)
        if ($extractedFiles.Count -eq 0) {
            throw "The archive listing matched $($entries.Count) entries, but no files were extracted from $($package.Path)."
        }

        $item = Get-Item $package.Path
        $manifestPackages += [ordered]@{
            name = $package.Name
            path = $package.Path
            pattern = $package.Pattern
            length = $item.Length
            sha256 = (Get-FileHash -Algorithm SHA256 $package.Path).Hash.ToLowerInvariant()
            matched_entries = $entries.Count
            extracted_files = $extractedFiles.Count
        }
    }

    $manifest = [ordered]@{
        schema_version = 2
        generated_at_utc = [DateTime]::UtcNow.ToString("o")
        workshop_root = $WorkshopRoot
        packages = $manifestPackages
    }

    $manifest | ConvertTo-Json -Depth 6 | Set-Content -Encoding UTF8 (Join-Path $tempRoot "manifest.json")

    if (Test-Path $outputPath) {
        Remove-Item -Force $outputPath
    }
    Compress-Archive -Path (Join-Path $tempRoot "*") -DestinationPath $outputPath -CompressionLevel Optimal
    Write-Host "Wrote $outputPath"
}
finally {
    if (Test-Path $tempRoot) {
        Remove-Item -Recurse -Force $tempRoot
    }
}
