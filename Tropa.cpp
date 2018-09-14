#include "Tropa.h"
#include <iostream>

using namespace std;

Tropa::Tropa(){

}

Tropa::Tropa(char pSexo, int pCostoAlimento, int pCostoOro, int pDefensa, int pAtaque, int pVida, int pVelocidad){
    Sexo = pSexo;
    CostoAlimento = pCostoAlimento;
    CostoOro = pCostoOro;
    Defensa = pDefensa;
    Ataque = pAtaque;
    Vida = pVida;
    Velocidad = pVelocidad;
}

char Tropa::getSexo(){
    return Sexo;
}
void Tropa::setSexo(char pSexo){
    Sexo = pSexo;
}

int Tropa::getCostoAlimento(){
    return CostoAlimento;
}
void Tropa::setCostoAlimento(int pCostoAlimento){
    CostoAlimento = pCostoAlimento;
}

int Tropa::getCostoOro(){
    return CostoOro;
}
void Tropa::setCostoOro(int pCostoOro){
    CostoOro = pCostoOro;
}

int Tropa::getDefensa(){
    return Defensa;
}
void Tropa::setDefensa(int pDefensa){
    Defensa = pDefensa;
}

int Tropa::getAtaque(){
    return Ataque;
}
void Tropa::setAtaque(int pAtaque){
    Ataque = pAtaque;
}

int Tropa::getVida(){
    return Vida;
}
void Tropa::setVida(int pVida){
    Vida = pVida;
}

int Tropa::getVelocidad(){
    return Velocidad;
}
void Tropa::setVelocidad(int pVelocidad){
    Velocidad = pVelocidad;
}
