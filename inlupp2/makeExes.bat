
for /f %%a IN ('dir /b "%cd%\*.c"')  do gcc -o %%~na %%a

pause