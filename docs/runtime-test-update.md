# Runtime test update

Run this from the `CodeX 40k` checkout after closing Gates of Hell:

```powershell
powershell -ExecutionPolicy Bypass -File tools\update_runtime_test.ps1
```

The helper fetches and resets the active PR branch, prepares the SC parent metadata, and mirrors the complete checkout into Workshop folder `3696721120` before printing the deployed commit.
