/*
Autor: Jocelyn Ileana Balderas Sánchez
Matrícula: A01798528

Implementación de la clase Luces

*/

#include "Luces.hpp"

Luces::Luces()
{
    estadoLuces = false;
}

void Luces::prenderLuces(bool)
{
    estadoLuces = true;
}

void Luces::apagarLuces(bool)
{
    estadoLuces = true;
}

bool Luces::getEstadoLuces()
{
    return estadoLuces;
}