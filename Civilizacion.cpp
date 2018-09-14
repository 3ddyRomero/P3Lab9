#include "Civilizacion.h"

#include <iostream>

using namespace std;

Civilizacion::Civilizacion(){

}

Civilizacion::Civilizacion(string pName,int pOro, int pMadera, int pPiedra, int pAlimento, int pPoblacion, int pPoblacionMAX, int pCapacidad, int pAldeano){
    Name = pName;
    Oro = pOro;
    Madera = pMadera;
    Piedra = pPiedra;
    Alimento = pAlimento;
    Poblacion = pPoblacion;
    PoblacionMAX = pPoblacionMAX;
    Capacidad = pCapacidad;
    Aldeano = pAldeano;
}

int Civilizacion::getOro(){
    Oro = 0;
    return Oro;
}

void Civilizacion::setOro(int pOro){
    Oro = pOro;
}

int Civilizacion::getMadera(){
    Madera = 0;
    return Madera;
}

void Civilizacion::setMadera(int pMadera){
    Madera = pMadera;
}

int Civilizacion::getPiedra(){
    Piedra = 0;
    return Piedra;
}

void Civilizacion::setPiedra(int pPiedra){
    Piedra = pPiedra;
}

int Civilizacion::getAlimento(){
    Alimento = 100;
    return Alimento;
}

void Civilizacion::setAlimento(int pAlimento){
    Alimento = pAlimento;
}

int Civilizacion::getPoblacion(){
    Poblacion = 0;
    return Poblacion;
}

void Civilizacion::setPoblacion(int pPoblacion){
    Poblacion = pPoblacion;
}

int Civilizacion::getPoblacion(){
    PoblacionMAX = 200;
    return PoblacionMAX;
}

void Civilizacion::setPoblacion(int pPoblacionMAX){
    PoblacionMAX = pPoblacionMAX;
}

int Civilizacion::getCapacidad(){
    Capacidad = 5;
    return Capacidad;
}

void Civilizacion::setCapacidad(int pCapacidad){
    Capacidad = pCapacidad;
}

int Civilizacion::getAldeano(){
    Aldeano = 5;
    return Aldeano;
}

void Civilizacion::setAldeano(int pAldeano){
    Aldeano = pAldeano;
}

Civilizacion::~Civilizacion(){

}