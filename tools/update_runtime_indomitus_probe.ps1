[CmdletBinding()]
param(
    [ValidateSet("Framework", "HumanRig")]
    [string]$Probe = "Framework",
    [string]$WorkshopRoot = "E:\Steam\steamapps\workshop\content\400750"
)

$ErrorActionPreference = "Stop"

$Updater = Join-Path $PSScriptRoot "update_runtime_test.ps1"
$Auditor = Join-Path $PSScriptRoot "audit_runtime_stack.ps1"
$SourceRoot = Join-Path $WorkshopRoot "3683854813"
$TargetRoot = Join-Path $WorkshopRoot "3696721120"
$Utf8NoBom = New-Object System.Text.UTF8Encoding($false)

$ExpectedHashes = @{
    "resource\script\multiplayer\modes\conquest.lua" = "6c80fd57911bc9f75a9df82f4b5f254acb5ac1063fdb53bdaaa2b4624fce0209"
    "resource\script\multiplayer\modes\utility.lua" = "99c4dc6597abf9c1b18fe6c0f239e7af132d45604c0e8883a6aa3a145c077fe8"
    "resource\entity\humanskin\human\human.def" = "c9fdc347a087e47e6bf2068bd4115a15a2212aec2f71c7acbf287ee9420e82c7"
    "resource\entity\humanskin\human\human.mdl" = "cca1b0d1db1f91b67ebfd087e80c92a367339789608323382d73b9681eaabf1f"
    "resource\entity\humanskin\human\skin.ply" = "889f53e57e0b2cc42b51fadf843c095f8b6670414f54bf31e6a0b6bcacc1b205"
    "resource\properties\animation\human\human_anm.ext" = "117e9c39bbd1186a67c5fe307629368dad4466ad4bcd1c23c80b5b3467ba0fba"
    "resource\properties\animation\human\_reg_human_movement.inc" = "4688afaca4ac501b9ba3f2249200b16d9209561efd8d5bcde9efc2ea9b7c6831"
}

function Get-Sha256 {
    param([Parameter(Mandatory = $true)][string]$Path)
    return (Get-FileHash -LiteralPath $Path -Algorithm SHA256).Hash.ToLowerInvariant()
}

function Assert-ProbeSource {
    param([Parameter(Mandatory = $true)][string]$RelativePath)

    $Source = Join-Path $SourceRoot $RelativePath
    if (-not (Test-Path -LiteralPath $Source -PathType Leaf)) {
        throw "Indomitus probe source is missing: $Source"
    }

    $Actual = Get-Sha256 -Path $Source
    $Expected = $ExpectedHashes[$RelativePath]
    if ($Actual -ne $Expected) {
        throw "Indomitus probe source hash mismatch for $RelativePath. Expected $Expected, found $Actual."
    }

    return $Source
}

function Copy-VerifiedFile {
    param([Parameter(Mandatory = $true)][string]$RelativePath)

    $Source = Assert-ProbeSource -RelativePath $RelativePath
    $Target = Join-Path $TargetRoot $RelativePath
    $TargetDirectory = Split-Path -Parent $Target
    New-Item -ItemType Directory -Path $TargetDirectory -Force | Out-Null
    Copy-Item -LiteralPath $Source -Destination $Target -Force

    $SourceHash = Get-Sha256 -Path $Source
    $TargetHash = Get-Sha256 -Path $Target
    if ($SourceHash -ne $TargetHash) {
        throw "Probe deployment hash mismatch for $RelativePath"
    }

    return [ordered]@{
        path = $RelativePath
        source_sha256 = $SourceHash
        deployed_sha256 = $TargetHash
        transformed = $false
    }
}

if (-not (Test-Path -LiteralPath $Updater -PathType Leaf)) {
    throw "Runtime updater not found: $Updater"
}

Write-Host "Resetting and deploying the clean compatibility overlay..."
& powershell -NoProfile -ExecutionPolicy Bypass -File $Updater -WorkshopRoot $WorkshopRoot
if ($LASTEXITCODE -ne 0) {
    throw "Runtime updater failed with exit code $LASTEXITCODE"
}

if (-not (Test-Path -LiteralPath $SourceRoot -PathType Container)) {
    throw "Old Indomitus compatibility patch folder is not installed: $SourceRoot"
}
if (-not (Test-Path -LiteralPath $TargetRoot -PathType Container)) {
    throw "Active compatibility overlay folder is missing: $TargetRoot"
}

[object[]]$Deployed = @()

if ($Probe -eq "Framework") {
    Write-Host "Applying the source-bound Indomitus conquest framework probe..."

    $ConquestRelative = "resource\script\multiplayer\modes\conquest.lua"
    $UtilityRelative = "resource\script\multiplayer\modes\utility.lua"
    $ConquestSource = Assert-ProbeSource -RelativePath $ConquestRelative
    $UtilitySource = Assert-ProbeSource -RelativePath $UtilityRelative

    $ConquestTarget = Join-Path $TargetRoot $ConquestRelative
    $UtilityTarget = Join-Path $TargetRoot $UtilityRelative
    New-Item -ItemType Directory -Path (Split-Path -Parent $ConquestTarget) -Force | Out-Null

    $ConquestText = [System.IO.File]::ReadAllText($ConquestSource)
    $OldNationMap = 'local nationMap = \{ ig = 1, tg = 2, ork = 3, tyr = 4 \}'
    $Matches = [regex]::Matches($ConquestText, $OldNationMap)
    if ($Matches.Count -ne 1) {
        throw "Expected exactly one legacy Indomitus nationMap, found $($Matches.Count)."
    }

    $CurrentNationMap = 'local nationMap = { rusa = 1, ukr = 2, nato = 3, csa = 4, sov = 5, prc = 6, imp = 7, ork = 8, tyr = 9 }'
    $ConquestText = [regex]::Replace($ConquestText, $OldNationMap, $CurrentNationMap, 1)
    $ConquestMarker = 'print("CX40K_PROBE: Indomitus conquest framework active")'
    $ConquestText = $ConquestMarker + "`r`n" + $ConquestText
    [System.IO.File]::WriteAllText($ConquestTarget, $ConquestText, $Utf8NoBom)

    $UtilityText = [System.IO.File]::ReadAllText($UtilitySource)
    $UtilityMarker = 'print("CX40K_PROBE: Indomitus utility framework active")'
    $UtilityText = $UtilityMarker + "`r`n" + $UtilityText
    [System.IO.File]::WriteAllText($UtilityTarget, $UtilityText, $Utf8NoBom)

    $Deployed += [pscustomobject][ordered]@{
        path = $ConquestRelative
        source_sha256 = Get-Sha256 -Path $ConquestSource
        deployed_sha256 = Get-Sha256 -Path $ConquestTarget
        transformed = $true
        transformation = "Current nine-ID Dynamic Conquest nationMap plus runtime marker"
    }
    $Deployed += [pscustomobject][ordered]@{
        path = $UtilityRelative
        source_sha256 = Get-Sha256 -Path $UtilitySource
        deployed_sha256 = Get-Sha256 -Path $UtilityTarget
        transformed = $true
        transformation = "Runtime marker only"
    }
}
else {
    Write-Host "Applying the source-bound Indomitus SC-aware default human-rig probe..."

    foreach ($RelativePath in @(
        "resource\entity\humanskin\human\human.def",
        "resource\entity\humanskin\human\human.mdl",
        "resource\entity\humanskin\human\skin.ply",
        "resource\properties\animation\human\human_anm.ext",
        "resource\properties\animation\human\_reg_human_movement.inc"
    )) {
        $Deployed += [pscustomobject](Copy-VerifiedFile -RelativePath $RelativePath)
    }
}

$ManifestPath = Join-Path $TargetRoot ".cx40k-indomitus-probe.json"
$Manifest = [ordered]@{
    schema_version = 1
    generated_utc = [DateTime]::UtcNow.ToString("o")
    probe = $Probe
    source_workshop_id = "3683854813"
    source_root = $SourceRoot
    target_workshop_id = "3696721120"
    target_root = $TargetRoot
    deployed = [object[]]$Deployed
}
$Manifest | ConvertTo-Json -Depth 8 | Set-Content -LiteralPath $ManifestPath -Encoding UTF8

Write-Host "Probe manifest written to: $ManifestPath"

if (Test-Path -LiteralPath $Auditor -PathType Leaf) {
    Write-Host ""
    Write-Host "Auditing the active probe before testing..."
    & powershell -NoProfile -ExecutionPolicy Bypass -File $Auditor -WorkshopRoot $WorkshopRoot -SkipLogCopy
    if ($LASTEXITCODE -ne 0) {
        throw "Runtime audit failed with exit code $LASTEXITCODE"
    }
}

$RepoRoot = Split-Path -Parent $PSScriptRoot
Set-Location $RepoRoot
$Head = (git rev-parse --short HEAD).Trim()

Write-Host ""
Write-Host "Indomitus $Probe probe is ready at commit $Head."
Write-Host "Retry the existing infantry-only battle."
Write-Host "After the test or crash, run:"
Write-Host "  powershell -ExecutionPolicy Bypass -File tools\audit_runtime_stack.ps1"
Write-Host "Then upload runtime-audit\latest-game.log and runtime-audit\runtime-stack-audit.json."
