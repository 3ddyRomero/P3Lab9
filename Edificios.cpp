#include "Edificios.h"

#include <iostream>

using namespace std;

Edificios::Edificios(){

}

Edificios::Edificios(int pCostosOro, int pCostosPiedra, int pCostosMadera){
    CostosOro = pCostosOro;
    CostosPiedra = pCostosPiedra;
    CostosMadera = pCostosMadera;
}

int Edificios::getCostosOro(){
    return CostosOro;
}

void Edificios::setCostosOro(int pCostosOro){
    CostosOro = pCostosOro;
}

int Edificios::getCostosPiedra(){
    return CostosPiedra;
}

void Edificios::setCostosPiedra(int pCostosPiedra){
    CostosPiedra = pCostosPiedra;
}

int Edificios::getCostosMadera(){
    return CostosMadera;
}

void Edificios::setCostosMadera(int pCostosMadera){
    CostosMadera = pCostosMadera;
}

Edificios::~Edificios(){

}
