#include "Civilizacion.h"

#include <iostream>

using namespace std;

Civilizacion::Civilizacion(){

}

Civilizacion::Civilizacion(int pOro, int pMadera, int pPiedra, int pAlimento, int pPoblacion){
    Oro = pOro;
    Madera = pMadera;
    Piedra = pPiedra;
    Alimento = pAlimento;
    Poblacion = pPoblacion;
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

int Civilizacion::getPoblacion(){
    return Poblacion;
}

void Civilizacion::setPoblacion(int pPoblacion){
    Poblacion = pPoblacion;
}

Civilizacion::~Civilizacion(){

}