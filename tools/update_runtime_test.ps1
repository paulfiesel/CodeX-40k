param(
    [string]$WorkshopRoot = "E:\Steam\steamapps\workshop\content\400750",
    [string]$Branch = "runtime/campaign-setup-imperium"
)

$ErrorActionPreference = "Stop"
$RepoRoot = Split-Path -Parent $PSScriptRoot
Set-Location $RepoRoot

Write-Host "Updating $Branch in $RepoRoot"
git fetch origin
git reset --hard "origin/$Branch"

Write-Host "Deploying the checkout into the active Workshop overlay folder..."
python tools\prepare_runtime_test_stack.py `
    --workshop-root $WorkshopRoot `
    --deploy-overlay

$Head = git rev-parse --short HEAD
$Target = Join-Path $WorkshopRoot "3696721120"
Write-Host "Ready to test commit $Head in $Target"
