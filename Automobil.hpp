/*
Autor: Jocelyn Ileana Balderas Sánchez
Matrícula: A01798528

Definición de la clase Automobil

*/

#include "Llantas.hpp"
#include "Luces.hpp"
#include "Tablero.hpp"
#include "TanqueGasolina.hpp"

#ifndef AUTOMOBIL_HPP
#define AUTOMOBIL_HPP

class Automobil
{
private:
    double velocidadActual;
    bool estado;

    //declarando la composición
    Luces luces;
    Llantas llantas;
    Tablero tablero;
    TanqueGasolina tanqueGasolina;

public:
    Automobil(); // constructor por default
    void prender(bool);
    void apagar(bool);
    void acelerar(bool);
    void frenar(bool);
    void cargarGasolina(int);
};

#endif