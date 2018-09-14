#include "Edificios.h"
#include "Cuarteles.h"

#include <iostream>

using namespace std;

Cuarteles::Cuarteles(){

}

Cuarteles::Cuarteles(int pCostosOro, int pCostosPiedra, int pCostosMadera, int pCuartel):Edificios(pCostosOro, pCostosPiedra, pCostosMadera){
    Cuartel = pCuartel;

    CostosOro = pCostosOro;
    CostosPiedra = pCostosPiedra;
    CostosMadera = pCostosMadera;
}

int Cuarteles::getCuartel(){
    return Cuartel;
}

void Cuarteles::setCuartel(int pCuartel){
    Cuartel = pCuartel;
}