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

$mods = @(
    @{ Name = "sc-platform"; Root = (Join-Path $WorkshopRoot "3629384797") },
    @{ Name = "last-victim"; Root = (Join-Path $WorkshopRoot "3629381350") }
)

foreach ($mod in $mods) {
    if (-not (Test-Path $mod.Root)) {
        throw "Required Workshop mod folder not found: $($mod.Root)"
    }
}

$packageSpecs = @()
foreach ($mod in $mods) {
    $resourceRoot = Join-Path $mod.Root "resource"
    foreach ($pak in Get-ChildItem -Path $resourceRoot -Recurse -File -Filter *.pak) {
        $relative = [System.IO.Path]::GetRelativePath($mod.Root, $pak.FullName)
        $packageSpecs += [ordered]@{
            mod = $mod.Name
            path = $pak.FullName
            relative = $relative
            key = (($mod.Name + "-" + $relative) -replace '[^A-Za-z0-9._-]', '_')
        }
    }
}

if ($packageSpecs.Count -eq 0) {
    throw "No SC Platform or Last Victim PAK files were found under $WorkshopRoot."
}

$outputPath = [System.IO.Path]::GetFullPath((Join-Path (Get-Location) $Output))
$outputDir = Split-Path -Parent $outputPath
New-Item -ItemType Directory -Force -Path $outputDir | Out-Null

$tempRoot = Join-Path ([System.IO.Path]::GetTempPath()) ("cx40k-vehicle-properties-" + [guid]::NewGuid().ToString("N"))
New-Item -ItemType Directory -Force -Path $tempRoot | Out-Null

try {
    $manifestPackages = @()
    $totalVehicleEntries = 0
    $totalSmgcwEntries = 0
    $scannedPackages = 0

    foreach ($package in $packageSpecs) {
        $scannedPackages += 1
        Write-Host "Indexing $($package.mod):$($package.relative)..."
        $listing = & $sevenZip l -slt $package.path 2>&1
        if ($LASTEXITCODE -ne 0) {
            throw "7-Zip failed while listing $($package.path) with exit code $LASTEXITCODE`n$($listing -join [Environment]::NewLine)"
        }

        $allEntries = @(
            $listing |
                ForEach-Object {
                    $line = [string]$_
                    if ($line -match '^Path = (.+)$') { $Matches[1] }
                } |
                Where-Object { $_ } |
                Sort-Object -Unique
        )

        $vehicleEntries = @(
            $allEntries |
                Where-Object {
                    ($_ -match '(?i)(^|[\\/])properties[\\/]vehicle_ext([\\/]|$)') -or
                    ($_ -match '(?i)(^|[\\/])vehicle_ext[\\/]')
                }
        )
        $smgcwEntries = @(
            $allEntries | Where-Object { $_ -match '(?i)smgcw' }
        )
        $entries = @($vehicleEntries + $smgcwEntries | Sort-Object -Unique)

        if ($entries.Count -eq 0) {
            continue
        }

        $totalVehicleEntries += $vehicleEntries.Count
        $totalSmgcwEntries += $smgcwEntries.Count

        $destination = Join-Path $tempRoot $package.key
        New-Item -ItemType Directory -Force -Path $destination | Out-Null
        $listFile = Join-Path $tempRoot ("$($package.key)-entries.txt")
        $entries | Set-Content -Encoding utf8NoBOM $listFile

        Write-Host "Extracting $($entries.Count) entries from $($package.mod):$($package.relative)..."
        $extractOutput = & $sevenZip x $package.path "-o$destination" -y -scsUTF-8 "@$listFile" 2>&1
        if ($LASTEXITCODE -ne 0) {
            throw "7-Zip failed while extracting $($package.path) with exit code $LASTEXITCODE`n$($extractOutput -join [Environment]::NewLine)"
        }

        $extractedFiles = @(Get-ChildItem -Path $destination -Recurse -File)
        if ($extractedFiles.Count -eq 0) {
            throw "The archive listing matched $($entries.Count) entries, but no files were extracted from $($package.path)."
        }

        $item = Get-Item $package.path
        $manifestPackages += [ordered]@{
            mod = $package.mod
            path = $package.path
            relative = $package.relative
            length = $item.Length
            sha256 = (Get-FileHash -Algorithm SHA256 $package.path).Hash.ToLowerInvariant()
            vehicle_entries = $vehicleEntries.Count
            smgcw_entries = $smgcwEntries.Count
            extracted_files = $extractedFiles.Count
        }
    }

    if ($totalVehicleEntries -eq 0) {
        throw "No properties/vehicle_ext entries were found after scanning $scannedPackages SC Platform and Last Victim PAK files."
    }
    if ($totalSmgcwEntries -eq 0) {
        throw "No SMGCW entries were found after scanning $scannedPackages SC Platform and Last Victim PAK files."
    }

    $manifest = [ordered]@{
        schema_version = 3
        generated_at_utc = [DateTime]::UtcNow.ToString("o")
        workshop_root = $WorkshopRoot
        scanned_packages = $scannedPackages
        total_vehicle_entries = $totalVehicleEntries
        total_smgcw_entries = $totalSmgcwEntries
        packages = $manifestPackages
    }

    $manifest | ConvertTo-Json -Depth 6 | Set-Content -Encoding UTF8 (Join-Path $tempRoot "manifest.json")

    if (Test-Path $outputPath) {
        Remove-Item -Force $outputPath
    }
    Compress-Archive -Path (Join-Path $tempRoot "*") -DestinationPath $outputPath -CompressionLevel Optimal
    Write-Host "Wrote $outputPath"
    Write-Host "Vehicle entries: $totalVehicleEntries; SMGCW entries: $totalSmgcwEntries; scanned PAKs: $scannedPackages"
}
finally {
    if (Test-Path $tempRoot) {
        Remove-Item -Recurse -Force $tempRoot
    }
}
