[CmdletBinding()]
param(
    [string]$WorkshopRoot = "E:\Steam\steamapps\workshop\content\400750",
    [string]$OutputPath,
    [switch]$SkipLogCopy
)

$ErrorActionPreference = "Stop"

$RepoRoot = Split-Path -Parent $PSScriptRoot
if (-not $OutputPath) {
    $OutputPath = Join-Path $RepoRoot "runtime-audit\runtime-stack-audit.json"
}

$Stack = @(
    [ordered]@{ order = 1; id = "2897299509"; name = "West 81" },
    [ordered]@{ order = 2; id = "3261086933"; name = "Code-X" },
    [ordered]@{ order = 3; id = "3629384797"; name = "SC Modding Platform" },
    [ordered]@{ order = 4; id = "3629381350"; name = "SC Last Victim 40K" },
    [ordered]@{ order = 5; id = "3696721120"; name = "CodeX 40K compatibility overlay" }
)

$Targets = @(
    "resource\script\multiplayer\modes\conquest.lua",
    "resource\script\multiplayer\modes\utility.lua",
    "resource\properties\human.ext",
    "resource\properties\animation\human\human_anm.ext",
    "resource\properties\animation\human\_reg_human_movement.inc",
    "resource\entity\humanskin\human\human.def",
    "resource\entity\humanskin\human\human.mdl",
    "resource\entity\humanskin\human\skin.ply",
    "resource\set\interaction_entity\dummy.inc",
    "resource\set\interaction_entity\SC_Plataform\SC_human\SC_h_skin.inc",
    "resource\set\interaction_entity\SC_h_skin.inc"
)

$PackageCandidates = @(
    "resource\gamelogic.pak",
    "resource\entity.pak",
    "1.pat"
)

function Get-FileRecord {
    param([Parameter(Mandatory = $true)][string]$Path)

    if (-not (Test-Path -LiteralPath $Path -PathType Leaf)) {
        return $null
    }

    $Item = Get-Item -LiteralPath $Path
    $Hash = Get-FileHash -LiteralPath $Path -Algorithm SHA256
    return [ordered]@{
        path = $Item.FullName
        length = $Item.Length
        last_write_utc = $Item.LastWriteTimeUtc.ToString("o")
        sha256 = $Hash.Hash.ToLowerInvariant()
    }
}

function Find-GenericHumanDefinitions {
    param([Parameter(Mandatory = $true)][string]$ModRoot)

    $Roots = @(
        (Join-Path $ModRoot "resource\set\interaction_entity"),
        (Join-Path $ModRoot "resource\properties")
    )

    # Windows PowerShell 5.1 can throw "Argument types do not match" when a
    # generic List[object] is wrapped with @(...). Build a plain object array
    # instead so the audit runs identically in Windows PowerShell and pwsh.
    [object[]]$Matches = @()
    foreach ($Root in $Roots) {
        if (-not (Test-Path -LiteralPath $Root -PathType Container)) {
            continue
        }

        Get-ChildItem -LiteralPath $Root -Recurse -File -ErrorAction SilentlyContinue |
            Where-Object { $_.Extension -in @(".inc", ".ext", ".set", ".def") } |
            ForEach-Object {
                $File = $_
                Select-String -LiteralPath $File.FullName -Pattern '^\s*\{\s*"?(fake_human|human)"?' -CaseSensitive:$false -ErrorAction SilentlyContinue |
                    ForEach-Object {
                        $Matches += [pscustomobject][ordered]@{
                            path = $File.FullName
                            line = $_.LineNumber
                            text = $_.Line.Trim()
                        }
                    }
            }
    }

    return [object[]]$Matches
}

[object[]]$ModRecords = @()
foreach ($Entry in $Stack) {
    $Root = Join-Path $WorkshopRoot $Entry.id
    $Loose = [ordered]@{}
    foreach ($Target in $Targets) {
        $Loose[$Target] = Get-FileRecord -Path (Join-Path $Root $Target)
    }

    $Packages = [ordered]@{}
    foreach ($Package in $PackageCandidates) {
        $Packages[$Package] = Get-FileRecord -Path (Join-Path $Root $Package)
    }

    $Definitions = [object[]](Find-GenericHumanDefinitions -ModRoot $Root)
    $ModRecords += [pscustomobject][ordered]@{
        order = $Entry.order
        id = $Entry.id
        name = $Entry.name
        root = $Root
        exists = Test-Path -LiteralPath $Root -PathType Container
        loose_candidates = $Loose
        package_candidates = $Packages
        generic_human_definitions = $Definitions
    }
}

$WinningLoose = [ordered]@{}
foreach ($Target in $Targets) {
    $Winner = $null
    foreach ($Mod in $ModRecords | Sort-Object order) {
        $Record = $Mod.loose_candidates[$Target]
        if ($null -ne $Record) {
            $Winner = [ordered]@{
                order = $Mod.order
                id = $Mod.id
                name = $Mod.name
                file = $Record
            }
        }
    }
    $WinningLoose[$Target] = $Winner
}

$AuditDirectory = Split-Path -Parent $OutputPath
New-Item -ItemType Directory -Path $AuditDirectory -Force | Out-Null

$CopiedLog = $null
if (-not $SkipLogCopy) {
    $ConfigRoot = Join-Path $env:LOCALAPPDATA "digitalmindsoft\gates of hell"
    if (Test-Path -LiteralPath $ConfigRoot -PathType Container) {
        $LatestLog = Get-ChildItem -LiteralPath $ConfigRoot -File -Filter "game*.log" -ErrorAction SilentlyContinue |
            Sort-Object LastWriteTimeUtc -Descending |
            Select-Object -First 1
        if ($null -ne $LatestLog) {
            $CopiedLogPath = Join-Path $AuditDirectory "latest-game.log"
            Copy-Item -LiteralPath $LatestLog.FullName -Destination $CopiedLogPath -Force
            $CopiedLog = Get-FileRecord -Path $CopiedLogPath
            $CopiedLog.source = $LatestLog.FullName
        }
    }
}

$OverlayRoot = Join-Path $WorkshopRoot "3696721120"
$OverlaySkinPath = Join-Path $OverlayRoot "resource\set\interaction_entity\SC_Plataform\SC_human\SC_h_skin.inc"
$ProbeManifestPath = Join-Path $OverlayRoot ".cx40k-indomitus-probe.json"
$ProbeManifest = $null
if (Test-Path -LiteralPath $ProbeManifestPath -PathType Leaf) {
    try {
        $ProbeManifest = Get-Content -LiteralPath $ProbeManifestPath -Raw | ConvertFrom-Json
    }
    catch {
        $ProbeManifest = [ordered]@{
            parse_error = $_.Exception.Message
            file = Get-FileRecord -Path $ProbeManifestPath
        }
    }
}

$Report = [ordered]@{
    schema_version = 2
    generated_utc = [DateTime]::UtcNow.ToString("o")
    workshop_root = $WorkshopRoot
    active_order = $Stack
    notes = @(
        "Loose-file winners are exact. Packed-file ownership cannot be resolved without unpacking the game archives.",
        "The compatibility overlay intentionally must not contain SC_h_skin.inc for this checkpoint.",
        "An Indomitus probe manifest records any temporary framework or human-rig files applied after the clean overlay deployment.",
        "Upload runtime-audit/latest-game.log and runtime-audit/runtime-stack-audit.json after the next crash."
    )
    overlay_skin_override_present = Test-Path -LiteralPath $OverlaySkinPath -PathType Leaf
    overlay_skin_override_path = $OverlaySkinPath
    indomitus_probe_manifest_path = $ProbeManifestPath
    indomitus_probe = $ProbeManifest
    winning_loose_candidates = $WinningLoose
    mods = [object[]]$ModRecords
    copied_log = $CopiedLog
}

$Report | ConvertTo-Json -Depth 12 | Set-Content -LiteralPath $OutputPath -Encoding UTF8

Write-Host "Runtime stack audit written to: $OutputPath"
Write-Host "Overlay SC_h_skin override present: $($Report.overlay_skin_override_present)"
if ($null -ne $ProbeManifest) {
    Write-Host "Indomitus probe active: $($ProbeManifest.probe)"
}
else {
    Write-Host "Indomitus probe active: False"
}
if ($null -ne $CopiedLog) {
    Write-Host "Latest game log copied to: $($CopiedLog.path)"
}
Write-Host ""
Write-Host "Loose-file winners:"
foreach ($Target in $Targets) {
    $Winner = $WinningLoose[$Target]
    if ($null -eq $Winner) {
        Write-Host "  $Target -> packed or absent"
    }
    else {
        Write-Host "  $Target -> $($Winner.name) [$($Winner.id)]"
    }
}

if ($Report.overlay_skin_override_present) {
    throw "Diagnostic checkpoint is invalid: the deployed overlay still contains SC_h_skin.inc. Close the game and rerun the updater."
}
