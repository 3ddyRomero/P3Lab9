#ifndef CASTILLOS_H
#define CASTILLOS_H

#include "Edificios.h"

#include <iostream>

using namespace std;

class Castillos : public Edificios{
    private: 
        int Castillo;
    public:
        Castillos();
        Castillos(int,int,int,int);      

        int getCastillo();
        void setCastillo(int);

        
};
#endif