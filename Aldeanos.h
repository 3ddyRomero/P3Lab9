#ifndef ALDEANOS_H
#define ALDEANOS_H

#include <iostream>
#include <string>

using namespace std;

class Aldeanos{
    private: 
        char Sexo;
        int costoAlimentacion;
    public:
        Aldeanos();
        Aldeanos(char, int);

        char getSexo();
		void setSexo(char);

        int getCostoAlimentacion();
        void setCostoAlimentacion(int); 

        ~Aldeanos();
};
#endif
