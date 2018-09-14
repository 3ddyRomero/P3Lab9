#ifndef CUARTELES_H
#define CUARTELES_H

#include "Edificios.h"

#include <iostream>

using namespace std;

class Cuarteles : public Edificios{
    private: 
        int Cuartel;
    public:
        Cuarteles();
        Cuarteles(int,int,int,int);      

        int getCuartel();
        void setCuartel(int);

        
};
#endif