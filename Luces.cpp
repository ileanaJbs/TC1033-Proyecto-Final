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

//checar si es true o false
void Luces::prenderLuces()
{
    estadoLuces = true;
}

//checar si es true o false
void Luces::apagarLuces()
{
    // original: estadoLuces = true;
    estadoLuces = false;
}

bool Luces::getEstadoLuces()
{
    return estadoLuces;
}