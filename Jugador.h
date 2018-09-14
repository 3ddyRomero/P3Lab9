#ifndef JUGADOR_H
#define JUGADOR_H

#include "Civilizacion.h"

#include <iostream>
#include <string>

using namespace std;

class Jugador{
    private: 
        string Nombre;
        Civilizacion* civ;
    public:
        Jugador();
        Jugador(string);

        string getNombre();
        Civilizacion* getCivilizacion();
		void setNombre(string);
        
        

        ~Jugador();
};
#endif

