@echo off

REM Data
mkdir data 2>nul
mkdir data\Admin 2>nul
mkdir data\Contadores 2>nul
mkdir data\Cortes_Caja 2>nul
mkdir data\Facturas_Generales 2>nul
mkdir data\Facturas_Mensuales 2>nul
mkdir data\Facturas_Semanales 2>nul
mkdir data\Tickets_Entrada 2>nul
mkdir data\Tickets_Salida 2>nul

REM Bin
mkdir bin 2>nul

g++ src\iniciarArchivosCont.cpp -Iinclude -std=c++17 -o bin\esenciales.exe

if errorlevel 1 (
    echo.
    echo Hubo un error en la compilacion de los archivos de C++.
    echo.
    pause
    exit /b 1
)

echo.
echo Archivos de C++ compilados correctamente.
echo.

bin\esenciales.exe

if errorlevel 1 (
    echo.
    echo Hubo un error en la creacion de los archivos contadores.
    echo.
    pause
    exit /b 1
)

echo.
echo Archivos de contadores creados correctamente.
echo.

del /f /q bin\esenciales.exe

echo.
echo Archivo creador de esenciales borrado correctamente.
echo.
pause
