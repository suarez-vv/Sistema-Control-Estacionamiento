#!/bin/bash

mkdir -p bin

if g++ src/main.cpp -Iinclude -std=c++17 -o bin/estacionamiento; then
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