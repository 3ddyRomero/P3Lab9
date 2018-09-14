#ifndef CASAS_H
#define CASAS_H

#include "Edificios.h"

#include <iostream>

using namespace std;

class Casas : public Edificios{
    private: 
        int Casa;
    public:
        Casas();
        Casas(int,int,int,int);      

        int getCasa();
        void setCasa(int);

        
};
#endif