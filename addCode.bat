@echo off

if "%~1"=="" (
  echo Please provide the directory and filename as arguments.
  echo Example: create_file.bat "C:\example_directory" "example_file.txt"
  goto :eof
)

if "%~2"=="" (
  echo Please provide the filename as the second argument.
  echo Example: create_file.bat "%~1" "example_file.txt"
  goto :eof
)


if not exist "%target_directory%" (
  echo Directory not found. Creating directory...
  mkdir "%target_directory%"
)

set "template_file=TEMPLATE.cpp"
set "target_directory=%~1"
set "target_file=%~2.cpp"

cd /d "%target_directory%"
echo Creating file "%target_file%" in directory "%target_directory%"
copy nul "%target_file%" >nul 2>&1

if not exist "%template_file%" (
  echo Template file "%template_file%" not found. Make sure it's in the same directory as the batch script.
  goto :eof
)

@REM echo Copying contents of "%template_file%" to "%target_file%"
copy /y "%template_file%" "%target_file%" >nul 2>&1

echo Done.