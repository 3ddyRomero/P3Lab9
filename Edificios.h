#ifndef EDIFICIOS_H
#define EDIFICIOS_H

#include <iostream>
//#include <string>

using namespace std;

class Edificios{
    protected: 
        int CostosOro, CostosPiedra, CostosMadera;
    public:
        Edificios();
        Edificios(int, int, int);

        int getCostosOro();
		void setCostosOro(int);
        
        int getCostosPiedra();
		void setCostosPiedra(int);

        int getCostosMadera();
		void setCostosMadera(int);

        ~Edificios();
};
#endif
