#!/bin/bash

#Data
mkdir -p data
mkdir -p data/Admin
mkdir -p data/Contadores
mkdir -p data/Cortes_Caja
mkdir -p data/Facturas_Generales
mkdir -p data/Facturas_Mensuales
mkdir -p data/Facturas_Semanales
mkdir -p data/Tickets_Entrada
mkdir -p data/Tickets_Salida

#Bin
mkdir -p bin

if g++ src/iniciarArchivosCont.cpp -Iinclude -std=c++17 -o bin/esenciales; then
    echo ""
    echo "Archivos de C++ compilados correctamente."
    echo ""
else
    echo ""
    echo "Hubo un error en la compilación de los archivos de C++."
    echo ""
    read aux
    exit 1;
fi

if ./bin/esenciales; then
    echo ""
    echo "Archivos de contadores creados correctamente."
    echo ""
else
    echo ""
    echo "Hubo un error en la creación de los archivos contadores."
    echo ""
    read aux
    exit 1;
fi

if rm -f bin/esenciales;  then
    echo ""
    echo "Archivo creador de esenciales borrado correctamente."
    echo ""
else
    echo ""
    echo "Hubo un error al borrar el archivo creado de esenciales."
    echo ""
    read aux
    exit 1;
fi