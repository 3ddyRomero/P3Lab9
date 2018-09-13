#include "Civilizacion.h"

#include <iostream>

using namespace std;

Civilizacion::Civilizacion(){

}

Civilizacion::Civilizacion(int pOro, int pMadera, int pPiedra, int pAlimento){
    Oro = pOro;
    Madera = pMadera;
    Piedra = pPiedra;
    Alimento = pAlimento;
}

int Civilizacion::getOro(){
    return Oro;
}

void Civilizacion::setOro(int pOro){
    Oro = pOro;
}

int Civilizacion::getMadera(){
    return Madera;
}

void Civilizacion::setMadera(int pMadera){
    Madera = pMadera;
}

int Civilizacion::getPiedra(){
    return Piedra;
}

void Civilizacion::setPiedra(int pPiedra){
    Piedra = pPiedra;
}

int Civilizacion::getAlimento(){
    return Alimento;
}

void Civilizacion::setAlimento(int pAlimento){
    Alimento = pAlimento;
}

Civilizacion::~Civilizacion(){
    
}