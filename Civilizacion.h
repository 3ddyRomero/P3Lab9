#ifndef CIVILIZACION_H
#define CIVILIZACION_H

#include "Tropa.h"
#include "Casas.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Civilizacion{
    private:
        string Name; 
        int Oro ,Madera ,Piedra, Alimento, Poblacion, PoblacionMAX, Capacidad, Aldeano;
        vector<Tropa*>tropa;
        vector<Casas*>casa;
        bool cuartel,castillo;


    public:
        Civilizacion();
        Civilizacion(string,int, int, int, int, int, int, int,int/*, bool, bool*/);

        string getName();
        void setName(string);

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

        int getPoblacionMAX();
        void setPoblacionMAX(int);

        int getCapacidad();
        void setCapacidad(int);

        int getAldeano();
        void setAldeano(int);

        Tropa* getTropa(int);
        void addTropa(Tropa*);
        
        Edificios* getEdificios(int);
        void addCasa(Casas*);

        /*bool getCuartel();
        void setCuartel(bool);

        bool getCastillo();
        void setCastillo(bool);*/



        ~Civilizacion();
};
#endif
