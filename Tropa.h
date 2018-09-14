#ifndef TROPA_H
#define TROPA_H

#include <iostream>
//#include <string>

using namespace std;

class Tropa{
    protected: 
        char Sexo;
        int CostoAlimento, CostoOro, Defensa, Ataque, Vida, Velocidad;
    public:
        Tropa();
        Tropa(char, int, int, int, int, int, int);

        char getSexo();
        void setSexo(char);

        int getCostoAlimento();
		void setCostoAlimento(int);
        
        int getCostoOro();
		void setCostoOro(int);

        int getDefensa();
		void setDefensa(int);

        int getAtaque();
		void setAtaque(int);

        int getVida();
		void setVida(int);

        int getVelocidad();
		void setVelocidad(int);

        ~Tropa();
};
#endif
