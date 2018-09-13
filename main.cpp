#include <iostream>

using namespace std;

int menu();
int submenu();
int menuedificio();
int menutropa();

int main(){




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
