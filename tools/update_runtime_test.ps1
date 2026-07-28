param(
    [string]$WorkshopRoot = "E:\Steam\steamapps\workshop\content\400750",
    [string]$Branch = "runtime/campaign-setup-imperium"
)

$ErrorActionPreference = "Stop"
$RepoRoot = Split-Path -Parent $PSScriptRoot
$CanonicalOrigin = "https://github.com/xfizzle-git/CodeX-40k.git"
Set-Location $RepoRoot

$CurrentOrigin = (git remote get-url origin).Trim()
if ($LASTEXITCODE -ne 0) {
    throw "Unable to read the repository origin remote."
}
if ($CurrentOrigin -ne $CanonicalOrigin) {
    Write-Host "Updating origin remote: $CurrentOrigin -> $CanonicalOrigin"
    git remote set-url origin $CanonicalOrigin
    if ($LASTEXITCODE -ne 0) {
        throw "Unable to update the repository origin remote."
    }
}

Write-Host "Updating $Branch in $RepoRoot"
git fetch origin
if ($LASTEXITCODE -ne 0) {
    throw "git fetch origin failed."
}
git reset --hard "origin/$Branch"
if ($LASTEXITCODE -ne 0) {
    throw "git reset to origin/$Branch failed."
}

Write-Host "Deploying the checkout into the active Workshop overlay folder..."
python tools\prepare_runtime_test_stack.py `
    --workshop-root $WorkshopRoot `
    --deploy-overlay
if ($LASTEXITCODE -ne 0) {
    throw "Runtime overlay deployment failed."
}

$Head = git rev-parse --short HEAD
if ($LASTEXITCODE -ne 0) {
    throw "Unable to resolve the deployed commit."
}
$Target = Join-Path $WorkshopRoot "3696721120"
Write-Host "Ready to test commit $Head in $Target"
