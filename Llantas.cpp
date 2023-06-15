/*
Autor: Jocelyn Ileana Balderas Sánchez
Matrícula: A01798528

Implementación de la clase Llantas

*/

#include "Llantas.hpp"

Llantas::Llantas()
{
    presiones.fill(33.00);
}

double Llantas::getPresion(int indice)
{
    return presiones[indice];
}

void Llantas::inflar(int indice, double presion)
{
    presiones[indice] = presion;
}

void Llantas::desinflar(int indice, double presion)
{
    presiones[indice] = presion;
}