#ifndef SOLDADOS_H
#define SOLDADOS_H

#include "Tropa.h"

#include <iostream>

using namespace std;

class Soldados : public Tropa{
    private: 
        int Soldado;
    public:
        Soldados();
        Soldados(char, int, int, int, int,int,int,int);      

        int getSoldado();
        void setSoldado(int);

        
};
#endif