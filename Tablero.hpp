/*
Autor: Jocelyn Ileana Balderas Sánchez
Matrícula: A01798528

Definición de la clase Tablero
*/

#include <iostream>
#include <string>

using namespace std;

#ifndef TABLERO_HPP
#define TABLERO_HPP

class Tablero
{
private:
    double indicadorNivelTanqueGasolina;
    string indicadorLuces;
    double indicadorVelocidadActual;
    string indicadorPeligroVelocidad;
    string recordatorioTanque;

public:
    Tablero();
    void activar(bool);
    void desactivar(bool);
    void actualizarIndicadores(string);
    void actualizarRecordatorioTanque(string);
};

#endif