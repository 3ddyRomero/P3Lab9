#include "Edificios.h"
#include "Casas.h"
#include "Civilizacion.h"

#include <iostream>

using namespace std;

Casas::Casas(){

}

Casas::Casas(int pCostosOro, int pCostosPiedra, int pCostosMadera, int pCasa):Edificios(pCostosOro, pCostosPiedra, pCostosMadera){
    Casa = pCasa;

    CostosOro = pCostosOro;
    CostosPiedra = pCostosPiedra;
    CostosMadera = pCostosMadera;
}

int Casas::getCasa(){
    Civilizacion* aldea;
    Casa = aldea->getAldeano()+5;
    return Casa;
}

void Casas::setCasa(int pCasa){
    Casa = pCasa;
}