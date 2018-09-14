#include "Caballerias.h"
#include <iostream>

using namespace std;

Caballerias::Caballerias(){

}

Caballerias::Caballerias(char pSexo, int pCostoAlimento, int pCostoOro, int pDefensa, int pAtaque, int pVida, int pVelocidad, int pCaballeria) : Tropa(pSexo, pCostoAlimento, pCostoOro, pDefensa, pAtaque, pVida, pVelocidad){
    Caballeria = pCaballeria;

    Sexo = pSexo;
    CostoAlimento = pCostoAlimento;
    CostoOro = pCostoOro;
    Defensa = pDefensa;
    Ataque = pAtaque;
    Vida = pVida;
    Velocidad = pVelocidad;
}

int Caballerias::getCaballeria(){
    return Caballeria;
}
void Caballerias::setCaballeria(int pCaballeria){
    Caballeria = pCaballeria;
}