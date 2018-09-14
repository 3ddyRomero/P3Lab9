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
#include <fstream>
#include <sstream> 


using namespace std;


void Fichero(string);
void abrir();
int menu();
int submenu();
int menuedificio();
int menutropa();

void llenarvectorCivilizacion(vector<Civilizacion*>&);
void printvectorCivilizacion(vector<Civilizacion*>);

void llenarvectorCrearJugador(vector<Jugador*>&);
void printvectorCrearJugador(vector<Jugador*>);

void llenarvectorAldeano(vector<Aldeanos*>&);
void sumarvectorAldeano(vector<Civilizacion*>,int);

void printvectorArchivoCiv(vector<Civilizacion*>);
void printvectorArchivoJug(vector<Jugador*>);

void BuscarRecursos(vector<Civilizacion*>&,int,int);

void llenarvectorEdificios(vector<Jugador*>&,int);
void printvectorEdificios(vector<Jugador*>);

void llenarvectorCivilizacionmas5(vector<Civilizacion*>& ,int,int);

void DesterrarvectorCivilizacion(vector<Civilizacion*>&,int);


int main(){
char ejecucion = 'y';
bool turno = false;
int opcion = 0;
int Pos=0,Pelec = 0,cantAld = 1,cantCas = 1;
//fstream entrada;

vector<Civilizacion*> miVectorCivilizacion;
vector<Jugador*> miVectorJugador;
vector<Aldeanos*> miVectorAldeano;
    
    


while(turno == false){/*
    for(int i=0;i<miVectorJugador.size();i++){
        cout<<"Turno de: "<<miVectorJugador[i]->getNombre()<<endl;*/
do{
    //ifstream archivo("LogJuego.txt");
    
        switch (menu()){
        case 1:{
            llenarvectorCivilizacion(miVectorCivilizacion);
            printvectorCivilizacion(miVectorCivilizacion);

            //cout<<"---->En El Fichero<----"<<endl;
            //abrir();

            break;
        }
        case 2:{
            /*
            for(int i = 0; i < miVectorCivilizacion.size(); i++){
                if(miVectorCivilizacion.size() >0 ){*/
                    llenarvectorCrearJugador(miVectorJugador);
                    printvectorCrearJugador(miVectorJugador);
                    /*
                }
            }*/
            
            
            break;
        }
        case 3:{
            printvectorArchivoCiv(miVectorCivilizacion);
            printvectorArchivoJug(miVectorJugador);
                        
            break;
        }
        //Opcion Ingresar en el MENU
        case 4:{
                switch (submenu()){
                case 1:{
                    
                    printvectorCivilizacion(miVectorCivilizacion);
                    
                    llenarvectorAldeano(miVectorAldeano);
                    
                    cout<<"Ingrese la Posicion de la a la cual sumar al Aldeano: "<<endl;
        	        cin>>Pelec;
                    sumarvectorAldeano(miVectorCivilizacion, Pelec);

                    printvectorCivilizacion(miVectorCivilizacion);

                    break;
                }
                case 2:{
                    printvectorCivilizacion(miVectorCivilizacion);
                    cout<<"¿Cuantos Aldeanos Quiere mandar?"<<endl;
                    cin>>cantAld;
                    cout<<"Seleccione una segun los numeros de la lista.";
                    cin>>Pos;
                    BuscarRecursos(miVectorCivilizacion,Pos,cantAld);
                    printvectorCivilizacion(miVectorCivilizacion);


                    break;
                }
                case 3:{
                    switch (menuedificio()){
                        case 1:{
                            printvectorCivilizacion(miVectorCivilizacion);
                            printvectorCrearJugador(miVectorJugador);
                            cout<<"Ingrese la Posicion: "<<endl;
        	                cin>>Pos;
                            cout<<"Cuantas casas?"<<endl;
                            cin>>cantCas;
                            llenarvectorEdificios(miVectorJugador, Pos);
                            llenarvectorCivilizacionmas5(miVectorCivilizacion,Pos, cantCas);
                            printvectorEdificios(miVectorJugador);

                            break;
                        }
                        case 2:{
                    
                            break;
                        }
                        case 3:{
                        
                            break;
                        }
                    }//end switch                  
                    break;
                }
                case 4:{
                    switch (menutropa()){
                        case 1:{
                            
                            break;
                        }
                        case 2:{
                    
                            break;
                        }
                        case 3:{
                        
                            break;
                        }
                    }//end switch
        	        break;
                }
                case 5:{
                    printvectorCivilizacion(miVectorCivilizacion);
                    cout<<"Ingrese la Posicion de la Civilizacion a desterrar: "<<endl;
        	        cin>>Pos;
                    DesterrarvectorCivilizacion(miVectorCivilizacion,Pos);

                    printvectorCivilizacion(miVectorCivilizacion);
        	                 
                    break;
                }
                case 6:{
        	                 
                    break;
                }
                case 7:{
                    ejecucion = 'n';
        	                 
                    break;
                }
                case 8:{
                     //Aqui Vuelve Al Menu Principal
        	                
                    break;
                }
            } //end switch
        

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
    //}

}




return 0;
}

void Fichero(string linea){

    string file = "LogJuego.txt";
    ofstream ficheroSalida(file.c_str(), ios::app);
    if(ficheroSalida.is_open()){
    ficheroSalida << linea;
    ficheroSalida << "\n";
	ficheroSalida.close();
	}
} 
void abrir(){
    fstream ficheroEntrada;
    string nombre = "LogJuego.txt";
    string frase;
 
    ficheroEntrada.open ( nombre.c_str() , ios::in);
    if (ficheroEntrada.is_open()) {

        while (! ficheroEntrada.eof() ) {
            getline (ficheroEntrada,frase);
            //cout << "Leido: " << frase << endl;
        }

        ficheroEntrada.close();
    }
    else cout << "Fichero inexistente o faltan permisos para abrirlo" << endl;
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
        int oro=0,madera=0, piedra=0,alimento=250,poblacion=0,poblacionMax=350,capacidad=5, aldeano=0;
        string nomb;
                civilizacion = new Civilizacion();
                cout<<"Ingrese el Nombre de la aldea: ";
                cin>>nomb;
                civilizacion->setName(nomb);
                civilizacion->setOro(oro);
                civilizacion->setMadera(madera);
                civilizacion->setPiedra(piedra);
                civilizacion->setAlimento(alimento);
                civilizacion->setPoblacion(poblacion);
                civilizacion->setPoblacionMAX(poblacionMax);
                civilizacion->setCapacidad(capacidad);
                civilizacion->setAldeano(aldeano);

                pVectorCivilizacion.push_back(civilizacion);
        
}
void printvectorCivilizacion(vector<Civilizacion*> pVectorCivilizacion){
        cout<<endl<<"*****Civilizaciones*****"<<endl;
        
        for(int i=0;i<pVectorCivilizacion.size();i++){    
                if (pVectorCivilizacion[i] != NULL){
                cout<<i<<")"<<" Nombre de la Civilización: "<<pVectorCivilizacion[i]->getName()<<endl
                    <<"   Oro de la Civilización: "<<pVectorCivilizacion[i]->getOro()<<endl
                    <<"   Madera de la Civilización: "<<pVectorCivilizacion[i]->getMadera()<<endl
                    <<"   Piedras de la Civilización: "<<pVectorCivilizacion[i]->getPiedra()<<endl
                    <<"   Alimento de la Civilización: "<<pVectorCivilizacion[i]->getAlimento()<<endl
                    <<"   Población de la Civilización: "<<pVectorCivilizacion[i]->getAldeano()<<endl
                    <<"   Población Máxima de la Civilización: "<<pVectorCivilizacion[i]->getPoblacionMAX()<<endl
                    <<"   Capacidad de la Civilización: "<<pVectorCivilizacion[i]->getCapacidad()<<endl
                    <<"   Aldeanos de la Civilización: "<<pVectorCivilizacion[i]->getAldeano()<<endl
                    <<"*******************************************************"<<endl;	
                }
        }
}
void llenarvectorEdificios( vector<Jugador*>& pVectorJugador, int pos){
        Civilizacion* civilizacion;
        Jugador* jugador;
        jugador = new Jugador();
        
        //int oro=0,madera=0, piedra=0,alimento=150,poblacion=0,poblacionMax=350,capacidad=5, aldeano=0;
        //string nomb;
            
           for(int i=0;i<pVectorJugador.size();i++){    
                if(pVectorJugador[pos] == pVectorJugador[i]){
                
                for(int i = 0; i < pVectorJugador.size(); i++){
                    Casas* casa = new Casas();

                    if(pVectorJugador[pos] == pVectorJugador[i]){
                    pVectorJugador[i]->getCivilizacion()->addCasa(casa);
                    }
                }
                //pVectorJugador[i]->getCivilizacion()->addCasa();
                pVectorJugador.push_back(jugador);
                }
            }
        
}
void llenarvectorCivilizacionmas5(vector<Civilizacion*>& pVectorCivilizacion,int pos,int cantCasas){
        Civilizacion* civilizacion;
        //int cont = cantCasas*50;
        int madera = cantCasas*50;
        int capacidad = cantCasas*5;
        
        //string nomb;
            for(int i = 0; i < pVectorCivilizacion.size();i++){
  //          cout<<"entre";
            if(pVectorCivilizacion[pos] == pVectorCivilizacion[i]){
                //civilizacion = new Civilizacion();
                if( pVectorCivilizacion[pos]->getPoblacion() <= 350 && cantCasas*50 <= pVectorCivilizacion[pos]->getMadera()){
                
                pVectorCivilizacion[i]->getName();
                pVectorCivilizacion[i]->getOro();
                pVectorCivilizacion[i]->setMadera(pVectorCivilizacion[i]->getMadera()-(madera));
                pVectorCivilizacion[i]->getPiedra();
                pVectorCivilizacion[i]->getAlimento();
                pVectorCivilizacion[i]->getPoblacion();
                pVectorCivilizacion[i]->getPoblacionMAX();
                pVectorCivilizacion[i]->setCapacidad(pVectorCivilizacion[i]->getCapacidad()+(capacidad));
                pVectorCivilizacion[i]->getAldeano();
//cout<<"entre otra vez";
                //pVectorCivilizacion.push_back(civilizacion);
                }
            }
        }
}
void printvectorEdificios(vector<Jugador*> pVectorJugador){
        cout<<endl<<"*****Casas*****"<<endl;
        Casas* casa;
        for(int i=0;i<pVectorJugador.size();i++){  
              
                cout<< i <<")"<<"Jugador: "<<pVectorJugador[i]->getNombre()<<endl
                    //<<"Casas: "<<pVectorJugador[i]->getCivilizacion()<<endl
                    <<"_____________________________________/*"<<endl;	
        }
        
}

void printvectorArchivoCiv(vector<Civilizacion*> pVectorCivilizacion){
        cout<<endl<<"*****Civilizaciones*****"<<endl;
        
        for(int i=0;i<pVectorCivilizacion.size();i++){    
                if (pVectorCivilizacion[i] != NULL){
                cout<<i<<")"<<" Nombre de la Civilización: "<<pVectorCivilizacion[i]->getName()<<endl
                    <<"   Oro de la Civilización: "<<pVectorCivilizacion[i]->getOro()<<endl
                    <<"   Madera de la Civilización: "<<pVectorCivilizacion[i]->getMadera()<<endl
                    <<"   Piedras de la Civilización: "<<pVectorCivilizacion[i]->getPiedra()<<endl
                    <<"   Alimento de la Civilización: "<<pVectorCivilizacion[i]->getAlimento()<<endl
                    <<"   Población de la Civilización: "<<pVectorCivilizacion[i]->getPoblacion()<<endl
                    <<"   Población Máxima de la Civilización: "<<pVectorCivilizacion[i]->getPoblacionMAX()<<endl
                    <<"   Capacidad de la Civilización: "<<pVectorCivilizacion[i]->getCapacidad()<<endl
                    <<"   Aldeanos de la Civilización: "<<pVectorCivilizacion[i]->getAldeano()<<endl
                    <<"*******************************************************"<<endl;	

                stringstream salida;
                salida<<"*****Civilizaciones*****"<<endl
                    <<i<<")"<<" Nombre de la Civilización: "<<pVectorCivilizacion[i]->getName()<<endl
                    <<"   Oro de la Civilización: "<<pVectorCivilizacion[i]->getOro()<<endl
                    <<"   Madera de la Civilización: "<<pVectorCivilizacion[i]->getMadera()<<endl
                    <<"   Piedras de la Civilización: "<<pVectorCivilizacion[i]->getPiedra()<<endl
                    <<"   Alimento de la Civilización: "<<pVectorCivilizacion[i]->getAlimento()<<endl
                    <<"   Población de la Civilización: "<<pVectorCivilizacion[i]->getPoblacion()<<endl
                    <<"   Población Máxima de la Civilización: "<<pVectorCivilizacion[i]->getPoblacionMAX()<<endl
                    <<"   Capacidad de la Civilización: "<<pVectorCivilizacion[i]->getCapacidad()<<endl
                    <<"   Aldeanos de la Civilización: "<<pVectorCivilizacion[i]->getAldeano()<<endl
                    <<"*******************************************************"<<endl;	
                string f = salida.str();

                Fichero(f);
                }
        }
}


void llenarvectorCrearJugador(vector<Jugador*>& pVectorJugador){
        Jugador* jugador;
        //Civilizacion* civi;
        string nomb;
                jugador = new Jugador();
                cout<<"Ingrese el Nombre del Jugador (Sin Espacios): ";
                cin>>nomb;
                jugador->setNombre(nomb);/*
                
                for(int i = 0; i < pVectorJugador.size(); i++){
                    Casas* casa = new Casas();

                    if(pVectorJugador[pos] == pVectorJugador[i]){
                    pVectorJugador[i]->getCivilizacion()->addCasa(casa);
                    }
                }*/
                pVectorJugador.push_back(jugador);
        
}
void printvectorCrearJugador(vector<Jugador*> pVectorJugador){
        cout<<endl<<"*****Jugadores*****"<<endl;
        
        for(int i=0;i<pVectorJugador.size();i++){    
                
                cout<< i <<")"<<"Jugador: "<<pVectorJugador[i]->getNombre()<<endl
                    <<"_____________________________________/*"<<endl;
        }
}

void printvectorArchivoJug(vector<Jugador*> pVectorJugador){
        cout<<endl<<"*****Jugadores*****"<<endl;
        
        for(int i=0;i<pVectorJugador.size();i++){    
                
                cout<< i <<")"<<"Jugador: "<<pVectorJugador[i]->getNombre()<<endl
                    <<"_____________________________________/*"<<endl;

                stringstream salida;
                salida<<"*****Jugadores*****"<<endl
                    << i <<")"<<"Jugador: "<<pVectorJugador[i]->getNombre()<<endl
                    <<"_____________________________________/*"<<endl;	
                string f = salida.str();

                Fichero(f);	
        }
}


void llenarvectorAldeano(vector<Aldeanos*>& pVectorAldeano){
        Aldeanos* aldeano;
        char sx;
                    aldeano = new Aldeanos();
                    cout<<"Ingrese el sexo (F ó M): ";
                    cin>>sx;
                    aldeano->setSexo(sx);
                    aldeano->getSexo();


                    pVectorAldeano.push_back(aldeano);
                
             
}

void sumarvectorAldeano(vector<Civilizacion*> pVectorCivilizacion,int pos){
        Civilizacion* civilizacion;
        //int aldeano = 1;
        
            
            for(int i = 0; i < pVectorCivilizacion.size(); i++){
                if(pVectorCivilizacion[pos] == pVectorCivilizacion[i]){
                    pVectorCivilizacion[i]->getName();
                pVectorCivilizacion[i]->getOro();
                pVectorCivilizacion[i]->getMadera();
                pVectorCivilizacion[i]->getPiedra();
                pVectorCivilizacion[i]->getAlimento();
                pVectorCivilizacion[i]->getPoblacion();
                pVectorCivilizacion[i]->getPoblacionMAX();
                pVectorCivilizacion[i]->getCapacidad();
                    pVectorCivilizacion[i]->setAldeano(pVectorCivilizacion[i]->getAldeano()+1);

                    pVectorCivilizacion.push_back(civilizacion);
                
                }
            }
}

void BuscarRecursos(vector<Civilizacion*>& pVectorCivilizacion, int pos, int CantAldeanos=1){
        Civilizacion* civilizacion;
        int oro = CantAldeanos*30, madera = CantAldeanos*40, piedra = CantAldeanos*20, alimento = CantAldeanos*50, menos =CantAldeanos*55, poblacion, aldeano;
        string nomb;
    
        for(int i = 0; i < pVectorCivilizacion.size();i++){
  //          cout<<"entre";
            if(pVectorCivilizacion[pos] == pVectorCivilizacion[i]){
                //civilizacion = new Civilizacion();
                if(pVectorCivilizacion[pos]->getAldeano() >= 0  && CantAldeanos <= pVectorCivilizacion[pos]->getAldeano() && pVectorCivilizacion[pos]->getAlimento() >= CantAldeanos*55){
                pVectorCivilizacion[i]->getName();
                pVectorCivilizacion[i]->setOro(pVectorCivilizacion[i]->getOro()+(oro));
                pVectorCivilizacion[i]->setMadera(pVectorCivilizacion[i]->getMadera()+(madera));
                pVectorCivilizacion[i]->setPiedra(pVectorCivilizacion[i]->getPiedra()+(piedra));
                pVectorCivilizacion[i]->setAlimento(pVectorCivilizacion[i]->getAlimento()+(alimento-menos));
                pVectorCivilizacion[i]->getPoblacion();
                pVectorCivilizacion[i]->getPoblacionMAX();
                pVectorCivilizacion[i]->getCapacidad();
                pVectorCivilizacion[i]->getAldeano();
                //cout<<"entre otra vez";
                //pVectorCivilizacion.push_back(civilizacion);
                }else{
                    cout<<"cantidad de Aldeanos o Alimentos insuficientes!!!!"<<endl;
                } 
            }
        }
}

void DesterrarvectorCivilizacion(vector<Civilizacion*>& pVectorCivilizacion, int pos){
        Civilizacion* civilizacion;
        int oro=0, madera=0, piedra=0, alimento=100, poblacion=0,aldeano = 0;
        string nomb;

        for(int i = 0; i < pVectorCivilizacion.size();i++){
  //          cout<<"entre";
            if(pVectorCivilizacion[pos] == pVectorCivilizacion[i]){
                //civilizacion = new Civilizacion();
                
                pVectorCivilizacion[i]->getName();
                pVectorCivilizacion[i]->setOro(oro);
                pVectorCivilizacion[i]->setMadera(madera);
                pVectorCivilizacion[i]->setPiedra(piedra);
                pVectorCivilizacion[i]->setAlimento(alimento);
                pVectorCivilizacion[i]->setPoblacion(poblacion);
                pVectorCivilizacion[i]->getPoblacionMAX();
                pVectorCivilizacion[i]->getCapacidad();
                pVectorCivilizacion[i]->setAldeano(aldeano);
//cout<<"entre otra vez";
                //pVectorCivilizacion.push_back(civilizacion);
            }
        }
}