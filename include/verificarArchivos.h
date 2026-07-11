#ifndef VERIFICARARCH_H
#define VERIFICARARCH_H
#include <fstream>
#include "paths.h"
using namespace std;

/* ------------------- VERIFICAR QUE EL CASCARÓN DE ESTACIONAMIENTO ESTE CREADO ---------------- */
bool verificarCascaron(){
    int band;
    fstream val(PATH_ADMIN + "espacios.dat", ios::binary|ios::in);
    if(!val) return false;
    if(!val.read(reinterpret_cast<char*>(&band), sizeof(int))){
        val.close();
        return false;
    }
    val.close();

    if(band == 1) return true;

    return false;
}

void cascaronCreado(){
    fstream val;
    val.open(PATH_ADMIN + "espacios.dat", ios::binary|ios::out);
    int band = 1;
    val.write(reinterpret_cast<char*>(&band), sizeof(int));
    val.close();
}

/*VERIFICACIONES*/
bool verificarFolio(int folio){
    if(folio < 1000) return false;
    
    return true;
}
#endif