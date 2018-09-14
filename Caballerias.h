#ifndef CABALLERIAS_H
#define CABALLERIAS_H

#include "Tropa.h"

#include <iostream>

using namespace std;

class Caballerias : public Tropa{
    private: 
        int Caballeria;
    public:
        Caballerias();
        Caballerias(char, int, int, int, int,int,int,int);      

        int getCaballeria();
        void setCaballeria(int);

        
};
#endif