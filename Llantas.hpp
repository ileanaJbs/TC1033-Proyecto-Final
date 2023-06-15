/*
Autor: Jocelyn Ileana Balderas Sánchez
Matrícula: A01798528

Definición de la clase Llantas

*/

#ifndef LLANTAS_HPP
#define LLANTAS_HPP

#include <array>

using namespace std;

class Llantas
{
private:
    array<double, 4> presiones;

public:
    Llantas();
    double getPresion(int indice);
    void inflar(int indice, double presion);
    void desinflar(int indice, double presion);
};

#endif