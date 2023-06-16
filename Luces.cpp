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

void Luces::prenderLuces()
{
    estadoLuces = true;
}

void Luces::apagarLuces()
{
    estadoLuces = true;
}

bool Luces::getEstadoLuces()
{
    return estadoLuces;
}