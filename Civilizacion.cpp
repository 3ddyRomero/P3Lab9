#include "Civilizacion.h"

#include <iostream>

using namespace std;

Civilizacion::Civilizacion(){

}

Civilizacion::Civilizacion(string pName,int pOro, int pMadera, int pPiedra, int pAlimento, int pPoblacion, int pPoblacionMAX, int pCapacidad, int pAldeano/*, bool pCuartel, bool pCastillo*/){
    Name = pName;
    Oro = pOro;
    Madera = pMadera;
    Piedra = pPiedra;
    Alimento = pAlimento;
    Poblacion = pPoblacion;
    PoblacionMAX = pPoblacionMAX;
    Capacidad = pCapacidad;
    Aldeano = pAldeano;
    /*cuartel = pCuartel;
    castillo = pCastillo;
*/
}

string Civilizacion::getName(){
    return Name;
}

void Civilizacion::setName(string pName){
    Name = pName;
}

int Civilizacion::getOro(){
    //Oro = 0;
    return Oro;
}

void Civilizacion::setOro(int pOro){
    Oro = pOro;
}

int Civilizacion::getMadera(){
    //Madera = 0;
    return Madera;
}

void Civilizacion::setMadera(int pMadera){
    Madera = pMadera;
}

int Civilizacion::getPiedra(){
    //Piedra = 0;
    return Piedra;
}

void Civilizacion::setPiedra(int pPiedra){
    Piedra = pPiedra;
}

int Civilizacion::getAlimento(){
    //Alimento = 80;
    return Alimento;
}

void Civilizacion::setAlimento(int pAlimento){
    Alimento = pAlimento;
}

int Civilizacion::getPoblacion(){
    //Poblacion = 0;
    return Poblacion;
}

void Civilizacion::setPoblacion(int pPoblacion){
    //Poblacion = pPoblacion;
}

int Civilizacion::getPoblacionMAX(){
    //PoblacionMAX = 350;
    return PoblacionMAX;
}

void Civilizacion::setPoblacionMAX(int pPoblacionMAX){
    PoblacionMAX = pPoblacionMAX;
}

int Civilizacion::getCapacidad(){
    //Capacidad = 5;
    return Capacidad;
}

void Civilizacion::setCapacidad(int pCapacidad){
    Capacidad = pCapacidad;
}

int Civilizacion::getAldeano(){
    //Aldeano = 5;
    return Aldeano;
}

void Civilizacion::setAldeano(int pAldeano){
    Aldeano = pAldeano;
}

Tropa* Civilizacion::getTropa(int T){
    return tropa[T];
}
void Civilizacion::addTropa(Tropa* pTropa){
    tropa.push_back(pTropa);
}

Edificios* Civilizacion::getEdificios(int E){
    return casa[E];
}

void Civilizacion::addCasa(Casas* pCasas){
    casa.push_back(pCasas);
}
/*
bool Civilizacion::getCuartel(){
    return cuartel;
}
void Civilizacion::setCuartel(bool pCuartel){
    cuartel = pCuartel;
}

bool Civilizacion::getCastillo(){
    return castillo;
}
void Civilizacion::setCastillo(bool pCastillo){
    castillo = pCastillo;
}
*/
Civilizacion::~Civilizacion(){

}