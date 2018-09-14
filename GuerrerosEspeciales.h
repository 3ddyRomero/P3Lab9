#ifndef GUERREROSESPECIALES_H
#define GUERREROSESPECIALES_H

#include "Tropa.h"

#include <iostream>

using namespace std;

class GuerrerosEspeciales : public Tropa{
    private: 
        int GuerreroEspecial;
    public:
        GuerrerosEspeciales();
        GuerrerosEspeciales(char, int, int, int, int,int,int,int);      

        int getGuerreroEspecial();
        void setGuerrerpEspecial(int);

        
};
#endif