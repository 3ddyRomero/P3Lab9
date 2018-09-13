#include "Jugador.h"

Jugador::Jugador(){

}

Jugador::Jugador(string pNombre){
    Nombre = pNombre;
}

string Jugador::getNombre(){
    return Nombre;
}

void Jugador::setNombre(string pNombre){
    Nombre = pNombre;
}

Jugador::~Jugador(){

}