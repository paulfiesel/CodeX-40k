param(
    [string]$WorkshopRoot = "E:\Steam\steamapps\workshop\content\400750",
    [string]$Output = ".audit\sources\vehicle-property-source-slice.zip"
)

$ErrorActionPreference = "Stop"

$sevenZipCandidates = @(
    "$env:ProgramFiles\7-Zip\7z.exe",
    "${env:ProgramFiles(x86)}\7-Zip\7z.exe",
    (Get-Command 7z.exe -ErrorAction SilentlyContinue | Select-Object -ExpandProperty Source -ErrorAction SilentlyContinue)
) | Where-Object { $_ -and (Test-Path $_) }

if (-not $sevenZipCandidates) {
    throw "7-Zip was not found. Install 7-Zip, then rerun this command."
}

$sevenZip = $sevenZipCandidates[0]
$scRoot = Join-Path $WorkshopRoot "3629384797"
$lvRoot = Join-Path $WorkshopRoot "3629381350"
$packages = @(
    @{ Name = "sc-platform-gamelogic"; Path = (Join-Path $scRoot "resource\gamelogic.pak"); Filter = "-ir!properties/vehicle_ext/*" },
    @{ Name = "last-victim-gamelogic"; Path = (Join-Path $lvRoot "resource\gamelogic.pak"); Filter = "-ir!properties/vehicle_ext/*" },
    @{ Name = "last-victim-smgcw"; Path = (Join-Path $lvRoot "resource\entity.pak"); Filter = "-ir!*SMGCW*" }
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
    foreach ($package in $packages) {
        $destination = Join-Path $tempRoot $package.Name
        New-Item -ItemType Directory -Force -Path $destination | Out-Null
        & $sevenZip x $package.Path "-o$destination" -y $package.Filter | Out-Host
        if ($LASTEXITCODE -ne 0) {
            throw "7-Zip failed while reading $($package.Path) with exit code $LASTEXITCODE"
        }
    }

    $manifest = [ordered]@{
        schema_version = 1
        generated_at_utc = [DateTime]::UtcNow.ToString("o")
        workshop_root = $WorkshopRoot
        packages = @()
    }

    foreach ($package in $packages) {
        $item = Get-Item $package.Path
        $manifest.packages += [ordered]@{
            name = $package.Name
            path = $package.Path
            filter = $package.Filter
            length = $item.Length
            sha256 = (Get-FileHash -Algorithm SHA256 $package.Path).Hash.ToLowerInvariant()
        }
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
