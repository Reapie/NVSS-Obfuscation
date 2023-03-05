# Powershell Obfuscation

There is an insane amount of tools out there, most of them do basically the same thing.

PowerShell even has some builtin obfuscation option with `-enc` which will decode a base64 String.
But when using this method it is important to encode the text to Unicode Base64, otherwise the decode will fail:

```pwsh
$Text = 'Start-Process "https://www.youtube.com/watch?v=dQw4w9WgXcQ"'
$Bytes = [System.Text.Encoding]::Unicode.GetBytes($Text)
$EncodedText =[Convert]::ToBase64String($Bytes)
$EncodedText
```

The "Invoke-Stealth" (https://github.com/JoelGMSec/Invoke-Stealth) tool is just one of many, and the created file "obfuscated.ps1" was created with the following command:

```bash
pwsh Invoke-Stealth/Invoke-Stealth.ps1 obfuscated.ps1 -technique ReverseB64
```
It does the obfuscation in-place, thus "obfuscated.ps1" as the first argument.

These are just examples for simple encodings but they are still effective as they prevent humans from recognising the purpose of the script quickly.

Even with this harmless sample, my antivirus prevents execution, showing that Base64 is very common in real-world attacks.