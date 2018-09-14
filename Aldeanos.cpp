#include "Aldeanos.h"

#include <iostream>

using namespace std;

Aldeanos::Aldeanos(){
    
}
Aldeanos::Aldeanos(char pSexo, int pcostoAlimentacion){
    Sexo = pSexo;
    costoAlimentacion = pcostoAlimentacion;
}

char Aldeanos::getSexo(){
    return Sexo;
}

void Aldeanos::setSexo(char pSexo){
    Sexo = pSexo;
}

int Aldeanos::getCostoAlimentacion(){
    return costoAlimentacion;
}

void Aldeanos::setCostoAlimentacion(int pcostoAlimentacion){
    costoAlimentacion = pcostoAlimentacion;
}

Aldeanos::~Aldeanos(){

}
