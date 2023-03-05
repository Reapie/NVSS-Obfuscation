$best64code = "=ISUjh1ZXlzd0cXUk1jd/g2Y0F2dv02bj5SZiVHd19Weuc3d39yL6MHc0RHaiAyczV2YvJHUtQnchR3U"
$base64 = $best64code.ToCharArray() ; [array]::Reverse($base64) ; -join $base64 2>&1> $null
$LoadCode = [System.Text.Encoding]::UTF8.GetString([System.Convert]::FromBase64String("$base64"))
Invoke-Expression $LoadCode
