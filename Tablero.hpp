/*
Autor: Jocelyn Ileana Balderas Sánchez
Matrícula: A01798528

Implementación de la clase Tablero
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
    void activar();
    void desactivar();
    void actualizarIndicadores();
    void actualizarRecordatorioTanque();
};

#endif