[CmdletBinding()]
param(
    [string]$WorkshopRoot = "E:\Steam\steamapps\workshop\content\400750"
)

$ErrorActionPreference = "Stop"

$Updater = Join-Path $PSScriptRoot "update_runtime_test.ps1"
$Auditor = Join-Path $PSScriptRoot "audit_runtime_stack.ps1"

if (-not (Test-Path -LiteralPath $Updater -PathType Leaf)) {
    throw "Runtime updater not found: $Updater"
}

Write-Host "Updating and deploying the runtime test stack..."
& powershell -NoProfile -ExecutionPolicy Bypass -File $Updater
if ($LASTEXITCODE -ne 0) {
    throw "Runtime updater failed with exit code $LASTEXITCODE"
}

# update_runtime_test.ps1 resets the checkout to the current remote head. Resolve
# the auditor again after that reset so this wrapper always executes the deployed
# branch version rather than a stale in-memory path.
if (-not (Test-Path -LiteralPath $Auditor -PathType Leaf)) {
    throw "Runtime auditor not found after update: $Auditor"
}

Write-Host ""
Write-Host "Auditing active Workshop ownership before the test..."
& powershell -NoProfile -ExecutionPolicy Bypass -File $Auditor -WorkshopRoot $WorkshopRoot -SkipLogCopy
if ($LASTEXITCODE -ne 0) {
    throw "Runtime audit failed with exit code $LASTEXITCODE"
}

Write-Host ""
Write-Host "Runtime diagnostic checkpoint is ready."
Write-Host "After the test or crash, collect the new log with:"
Write-Host "  powershell -ExecutionPolicy Bypass -File tools\audit_runtime_stack.ps1"
Write-Host "Then upload:"
Write-Host "  runtime-audit\latest-game.log"
Write-Host "  runtime-audit\runtime-stack-audit.json"
