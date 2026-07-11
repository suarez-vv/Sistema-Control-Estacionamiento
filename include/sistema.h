#ifndef SISTEMA_H
#define SISTEMA_H

#include <iostream>
#include <cstdlib>
#include <limits>
using namespace std;

    inline void limpiarPantalla(){
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif
    }

    inline void pausa(){
        #ifdef _WIN32
            system("pause");
        #else
            cout << "\n\t Presione ENTER tecla para continuar...\n";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin.get();
        #endif
    }
#endif