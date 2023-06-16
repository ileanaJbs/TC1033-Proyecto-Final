/*
Autor: Jocelyn Ileana Balderas Sánchez
Matrícula: A01798528

Proyecto Integrador TC1033
*/

#include <iostream>
#include "Automobil.hpp"
#include "Automobil.cpp"
#include "Llantas.hpp"
#include "Llantas.cpp"
#include "Luces.hpp"
#include "Luces.cpp"
#include "Tablero.hpp"
#include "Tablero.cpp"
#include "TanqueGasolina.hpp"
#include "TanqueGasolina.cpp"

using namespace std;

void menuPrincipal()
{
    cout << "----- MENU -----" << endl;
    cout << "Bienvenido!" << endl;
    cout << "Selecciona la opcion deseada: " << endl;
    cout << "1) Prender/Apagar el auto" << endl;
    cout << "2) Acelerar" << endl;
    cout << "3) Frenar" << endl;
    cout << "4) Prender luces" << endl;
    cout << "5) Apagar luces" << endl;
    cout << "6) Cargar gasolina" << endl;
    cout << "7) Inflar llanta" << endl;
    cout << "8) Desinflar llanta" << endl;
    cout << "9) Mostrar tablero" << endl;
    cout << "10) Salir" << endl;
    cout << "--------------------------" << endl;
}

int main()
{
    Automobil automobil;
    int x;
    double litros;
    int llanta;
    double presion;

    automobil.mostrarTablero();

    menuPrincipal();
    cin >> x;

    switch (x)
    {
    case 1:
        automobil.prenderApagar();
        break;
    case 2: 
        automobil.acelerar();
        break;
    case 3:
        automobil.frenar();
        break;
    case 4:
        automobil.prenderLuces();
        break;
    case 5:
        automobil.apagarLuces();
        break;
    case 6:
        cout << "Ingrese la cantidad de litros a cargar" << endl;
        cin >> litros;
        automobil.cargarGasolina(litros);
        break;
    case 7:
        cout << "Escribe el numero de llanta que deseas inflar: " << endl;
        cin >> llanta;
        cout << "Escribe cuantos psi de presion se inflara la llanta: " << endl;
        cin >> presion;
        automobil.inflarLlanta(llanta -1, presion);
        break;
    case 8:
        cout << "Escribe el numero de llanta que deseas desinflar: " << endl;
        cin >> llanta;
        cout << "Escribe cuantos psi de presion se desinflara la llanta: " << endl;
        automobil.desinflarLlanta(llanta -1, presion);
        break;
    case 9:
        automobil.mostrarTablero();
        break;
    case 10:
        cout <<"Adios! Vuelve pronto" << endl;
        exit(0);
    default:
        cout << "Opcion invalida. Ingresa un numero del 1 al 10" << endl;
        break;
    }
    return 0;
}
