#include <iostream>
#include <string>
#include "Jugador.h"
#include "Civilizacion.h"
#include "Aldeanos.h"
#include "Edificios.h"
#include "Casas.h"
#include "Cuarteles.h"
#include "Castillos.h"
#include "Tropa.h"
#include "Soldados.h"
#include "Caballerias.h"
#include "GuerrerosEspeciales.h"
#include <vector>


using namespace std;

int menu();
int submenu();
int menuedificio();
int menutropa();

void llenarvectorCivilizacion(vector<Civilizacion*>&);
void printvectorCivilizacion(vector<Civilizacion*>);

void llenarvectorCrearJugador(vector<Jugador*>&);
void printvectorCrearJugador(vector<Jugador*>);


int main(){
char ejecucion = 'y';
bool turno = false;
int opcion = 0;

vector<Civilizacion*> miVectorCivilizacion;
vector<Jugador*> miVectorJugador;



while(turno == false){
    for(int i=0;i<miVectorJugador.size();i++){
        cout<<"Turno de: "<<miVectorJugador[i]->getNombre()<<endl;
do{
        switch (menu()){
        case 1:{
            llenarvectorCivilizacion(miVectorCivilizacion);
            printvectorCivilizacion(miVectorCivilizacion);

            break;
        }
        case 2:{
            llenarvectorCrearJugador(miVectorJugador);
            printvectorCrearJugador(miVectorJugador);
          
            break;
        }
        case 3:{
                        
            break;
        }
        case 4:{
            do{
                switch (menu()){
                case 1:{
                    

                    break;
                }
                case 2:{
                    
                    break;
                }
                case 3:{
                        
                    break;
                }
                case 4:{
                            

        	        break;
                }
        
                case 5:{
        	                 
                    break;
                }
            } //end switch
        } while (ejecucion != 'n');
                            

        	break;
        }
        
        case 5:{
        	ejecucion = 'n';
            cout<< "La ejecución finalizará." << endl;
            //cout<< "****\\\\Buen dia//****" << endl;            
            break;
        }
        } //end switch
    } while (ejecucion != 'n');


        cout<<"¿Seguir Jugando?"<<endl<<"Pulse:"<<endl
            <<"0--> NO"<<endl
            <<"1--> SI"<<endl;
        cin>>opcion;
    
        if(opcion == 0){
            turno = true;
        }
    }

}




return 0;
}

int menu(){
    int opcion=0;
    cout<<"------------------------------------------------"<<endl;
    cout<<"Bienvenido al Laboratorio 9 de Programación III."<<endl;
    cout << "/****Menu****\\" << endl;
    cout << "1. Crear Civilizacion." << endl;
    cout << "2. Crear Jugador." << endl;
    cout << "3. Guardar Informacion." << endl;
    cout << "4. Ingresar." << endl;
    cout << "5. Salir del Juego." << endl;
    cout << "Ingrese una opcion: ";
    cin >> opcion;
    cout<<"------------------------------------------------"<<endl;
    return opcion;
}

int submenu(){
    int opcion=0;
    cout<<"------------------------------------------------"<<endl;
    cout<<"Submenu Ingresar."<<endl;
    cout << "/****SubMenu****\\" << endl;
    cout << "1. Nuevo Aldeano." << endl;
    cout << "2. Buscar Recursos." << endl;
    cout << "3. Nuevo Edificio." << endl;
    cout << "4. Nueva Tropa." << endl;
    cout << "5. Desterrar Poblacion." << endl;
    cout << "6. Batalla." << endl;
    cout << "7. Finalizar Turno." << endl;
    cout << "8. Volver a menu Principal." << endl;
    cout << "Ingrese una opcion: ";
    cin >> opcion;
    cout<<"------------------------------------------------"<<endl;
    return opcion;
}

int menuedificio(){
    int opcion=0;
    cout<<"------------------------------------------------"<<endl;
    cout<<"Submenu Edificio."<<endl;
    cout << "/****SubMenu****\\" << endl;
    cout << "1. Casa." << endl;
    cout << "2. Cuartel." << endl;
    cout << "3. Castillo." << endl;
    cout << "Ingrese una opcion: ";
    cin >> opcion;
    cout<<"------------------------------------------------"<<endl;
    return opcion;
}

int menutropa(){
    int opcion=0;
    cout<<"------------------------------------------------"<<endl;
    cout<<"Submenu Tropa."<<endl;
    cout << "/****SubMenu****\\" << endl;
    cout << "1. Soldado." << endl;
    cout << "2. Caballeria." << endl;
    cout << "3. Guerrero Especial." << endl;
    cout << "Ingrese una opcion: ";
    cin >> opcion;
    cout<<"------------------------------------------------"<<endl;
    return opcion;
}

void llenarvectorCivilizacion(vector<Civilizacion*>& pVectorCivilizacion){
        Civilizacion* civilizacion;
        //int oro,madera, piedra,alimento;
        string nomb;
                civilizacion = new Civilizacion();
                cout<<"Ingrese el Nombre de la aldea: ";
                cin>>nomb;
                civilizacion->setName(nomb);
                civilizacion->getOro();
                civilizacion->getMadera();
                civilizacion->getPiedra();
                civilizacion->getAlimento();
                civilizacion->getPoblacion();
                civilizacion->getPoblacionMAX();
                civilizacion->getCapacidad();
                civilizacion->getAldeano();

                pVectorCivilizacion.push_back(civilizacion);
        
}
void printvectorCivilizacion(vector<Civilizacion*> pVectorCivilizacion){
        cout<<endl<<"*****Civilizaciones*****"<<endl;
        
        for(int i=0;i<pVectorCivilizacion.size();i++){    
                
                cout<<"Nombre de la Civilización: "<<pVectorCivilizacion[i]->getName()<<endl
                    <<"Oro de la Civilización: "<<pVectorCivilizacion[i]->getOro()<<endl
                    <<"Madera de la Civilización: "<<pVectorCivilizacion[i]->getMadera()<<endl
                    <<"Piedras de la Civilización: "<<pVectorCivilizacion[i]->getPiedra()<<endl
                    <<"Alimento de la Civilización: "<<pVectorCivilizacion[i]->getAlimento()<<endl
                    <<"Población de la Civilización: "<<pVectorCivilizacion[i]->getPoblacion()<<endl
                    <<"Población de la Civilización: "<<pVectorCivilizacion[i]->getPoblacionMAX()<<endl
                    <<"Población Máxima de la Civilización: "<<pVectorCivilizacion[i]->getCapacidad()<<endl
                    <<"Aldeanos de la Civilización: "<<pVectorCivilizacion[i]->getAldeano()<<endl
                    <<"*******************************************************"<<endl;	
        }
}


void llenarvectorCrearJugador(vector<Jugador*>& pVectorJugador){
        Jugador* jugador;
        string nomb;
                jugador = new Jugador();
                cout<<"Ingrese el Nombre del Jugador (Sin Espacios): ";
                cin>>nomb;
                jugador->setNombre(nomb);


                pVectorJugador.push_back(jugador);
        
}
void printvectorCrearJugador(vector<Jugador*> pVectorJugador){
        cout<<endl<<"*****Jugadores*****"<<endl;
        
        for(int i=0;i<pVectorJugador.size();i++){    
                
                cout<< i <<")"<<"Jugador: "<<pVectorJugador[i]->getNombre()<<endl
                    <<"_____________________________________/*"<<endl;	
        }
}