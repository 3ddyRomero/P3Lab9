#include "Edificios.h"
#include "Castillos.h"

#include <iostream>

using namespace std;

Castillos::Castillos(){

}

Castillos::Castillos(int pCostosOro, int pCostosPiedra, int pCostosMadera, int pCastillo):Edificios(pCostosOro, pCostosPiedra, pCostosMadera){
    Castillo = pCastillo;

    CostosOro = pCostosOro;
    CostosPiedra = pCostosPiedra;
    CostosMadera = pCostosMadera;
}

int Castillos::getCastillo(){
    return Castillo;
}

void Castillos::setCastillo(int pCastillo){
    Castillo = pCastillo;
}