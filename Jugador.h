#ifndef JUGADOR_H
#define JUGADOR_H

#include <iostream>
#include <string>

using namespace std;

class Jugador{
    private: 
    string Nombre;
    public:
        Jugador();
        Jugador(string);

        string getNombre();
		void setNombre(string);
        
        ~Jugador();
};
#endif

