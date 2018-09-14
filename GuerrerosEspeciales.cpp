#include "GuerrerosEspeciales.h"
#include <iostream>

using namespace std;

GuerrerosEspeciales::GuerrerosEspeciales(){

}

GuerrerosEspeciales::GuerrerosEspeciales(char pSexo, int pCostoAlimento, int pCostoOro, int pDefensa, int pAtaque, int pVida, int pVelocidad, int pGuerreroEspecial) : Tropa(pSexo, pCostoAlimento, pCostoOro, pDefensa, pAtaque, pVida, pVelocidad){
    GuerreroEspecial = pGuerreroEspecial;

    Sexo = pSexo;
    CostoAlimento = pCostoAlimento;
    CostoOro = pCostoOro;
    Defensa = pDefensa;
    Ataque = pAtaque;
    Vida = pVida;
    Velocidad = pVelocidad;
}

int GuerrerosEspeciales::getGuerreroEspecial(){
    return GuerreroEspecial;
}
void GuerrerosEspeciales::setGuerrerpEspecial(int pGuerreroEspecial){
    GuerreroEspecial = pGuerreroEspecial;
}