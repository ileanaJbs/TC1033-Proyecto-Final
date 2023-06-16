/*
Autor: Jocelyn Ileana Balderas Sánchez
Matrícula: A01798528

Implementación de la clase Automobil
*/

#include "Automobil.hpp"

#include <iostream>
#include <array>

using namespace std;

Automobil::Automobil()
{
    estado = false;
    velocidadActual = 0;
}

void Automobil::prenderApagar()
{
    estado = !estado;
    if (estado)
    {
        tablero.mostrarMensaje("El automovil se ha encendido");
    }
    else
    {
        tablero.mostrarMensaje("El automovil se ha apagado");
    }
}

void Automobil::acelerar()
{
    if (estado)
    {
        velocidadActual += 15;
        tanqueGasolina.gastarGasolina(0.005 * velocidadActual);

        if (velocidadActual > 230)
        {
            velocidadActual = 230;
        }

        if (velocidadActual > 160)
        {
            tablero.mostrarMensaje("¡Peligro! Velocidad alta");
        }

        if (tanqueGasolina.getPorcentajeNivel() < 0.15)
        {
            tablero.mostrarMensaje("¡Recordatorio! Llenar el tanque de gasolina");
        }
    }
    else
    {
        tablero.mostrarMensaje("El automovil esta apagado. No se puede acelerar");
    }
}

void Automobil::frenar()
{
    if (estado)
    {
        velocidadActual -= 25;

        if (velocidadActual < 0)
        {
            velocidadActual = 0;
        }
    }
    else
    {
        tablero.mostrarMensaje("El automovil esta apagado. No se puede frenar");
    }
}

void Automobil::prenderLuces() 
{
    if (estado)
    {
        luces.prenderLuces();
        tablero.mostrarMensaje("Las luces del automovil han sido encendidas");
    }
    else
    {
        tablero.mostrarMensaje("El automovil esta apagado. No se pueden encender las luces");
    }
}

void Automobil::apagarLuces()
{

}

void Automobil::cargarGasolina(double litros)
{

}

void Automobil::mostrarTablero()
{

}

void Automobil::inflarLlanta(int indice, double presion)
{

}

void Automobil::desinflarLlanta(int indice, double presion)
{

}