#ifndef CIVILIZACION_H
#define CIVILIZACION_H

#include <iostream>
#include <string>

using namespace std;

class Civilizacion{
    private: 
        int Oro ,Madera ,Piedra, Alimento, Poblacion;
    public:
        Civilizacion();
        Civilizacion(int, int, int, int, int);

        int getOro();
		void setOro(int);

        int getMadera();
		void setMadera(int);

        int getPiedra();
		void setPiedra(int);

        int getAlimento();
		void setAlimento(int);

        int getPoblacion();
		void setPoblacion(int);

        ~Civilizacion();
};
#endif
