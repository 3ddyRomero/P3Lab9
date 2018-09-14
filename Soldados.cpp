#include "Soldados.h"
#include <iostream>

using namespace std;

Soldados::Soldados(){

}

Soldados::Soldados(char pSexo, int pCostoAlimento, int pCostoOro, int pDefensa, int pAtaque, int pVida, int pVelocidad, int pSoldado) : Tropa(pSexo, pCostoAlimento, pCostoOro, pDefensa, pAtaque, pVida, pVelocidad){
    Soldado = pSoldado;

    Sexo = pSexo;
    CostoAlimento = pCostoAlimento;
    CostoOro = pCostoOro;
    Defensa = pDefensa;
    Ataque = pAtaque;
    Vida = pVida;
    Velocidad = pVelocidad;
}

int Soldados::getSoldado(){
    return Soldado;
}
void Soldados::setSoldado(int pSoldado){
    Soldado = pSoldado;
}