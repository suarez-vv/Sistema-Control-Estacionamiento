/* Archivo que solo se ejecutará una vez, cuando se configure por primera vez el programa,
este, se encarga de crear los archivos contadores de autos, motos, camiones y folios, los
crea con valores iniciales, este archivo solo se deberá ejecutar por la persona encargada de 
instalar el sistema la primera vez */
#include <iostream>
#include <fstream>
#include <string>
#include "paths.h"
using namespace std;

//Prototipos
int contAutosIniciar(int &);
int contMotosIniciar(int &);
int contCamionesIniciar(int &);
int foliosIniciar(int &);

int main(){
    int total = 0, correctos = 0;
    correctos += contAutosIniciar(total);
    correctos += contMotosIniciar(total);
    correctos += contCamionesIniciar(total);
    correctos += foliosIniciar(total);

    cout << "\n\t" << correctos << " de " << total << " archivos creados correctamente.";
    return 0;
}

int contAutosIniciar(int &total){ //Archivo contador de autos
    fstream archivo;
    ++total;

    archivo.open(PATH_CONTADORES + "contAutos.dat", ios::binary|ios::out);
    if(!archivo){
        cout << "\n\t Archivo contador de Autos no se abrio correctamente.";
        return 0;
    }

    int contInicial = 0;
    archivo.seekp(ios::beg);
    archivo.write(reinterpret_cast<char*>(&contInicial), sizeof(int));
    archivo.close();

    return 1;
}

int contMotosIniciar(int &total){ //Archivo contador de motos
    fstream archivo;
    ++total;

    archivo.open(PATH_CONTADORES + "contMotos.dat", ios::binary|ios::out);
    if(!archivo){
        cout << "\n\t Archivo contador de Motos no se abrio correctamente.";
        return 0;
    }

    int contInicial = 0;
    archivo.seekp(ios::beg);
    archivo.write(reinterpret_cast<char*>(&contInicial), sizeof(int));
    archivo.close();

    return 1;
}

int contCamionesIniciar(int &total){ //Archivo contador de camiones
    fstream archivo; 
    ++total;

    archivo.open(PATH_CONTADORES + "contCamiones.dat", ios::binary|ios::out);
    if(!archivo){
        cout << "\n\t Archivo contador de Camiones no se abrio correctamente.";
        return 0;
    }

    int contInicial = 0;
    archivo.seekp(ios::beg);
    archivo.write(reinterpret_cast<char*>(&contInicial), sizeof(int));
    archivo.close();

    return 1;
}

int foliosIniciar(int &total){ //Archivo para guardar los folios que se van dando
    fstream archivo;
    ++total;

    archivo.open(PATH_CONTADORES + "folios.dat", ios::binary|ios::out);
    if(!archivo){
        cout << "\n\t Archivo contador de folios no se abrio correctamente.";
        return 0;
    }

    int folioInicial = 999; /* Este folio jamás se mostrará, solo es una referencia de donde empezar,
    los folios se empezaran a dar a partir del 1000 */
    archivo.seekp(ios::beg);
    archivo.write(reinterpret_cast<char*>(&folioInicial), sizeof(int));
    archivo.close();

    return 1;
}