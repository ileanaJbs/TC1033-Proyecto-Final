/*
Autor: Jocelyn Ileana Balderas Sánchez
Matrícula: A01798528

Implementación de la clase Automobil

*/

#ifndef AUTOMOBIL_HPP
#define AUTOMOBIL_HPP

class Automobil
{
private:
    double velocidadActual;
    bool estado;

public:
    Automobil(); // constructor por default
    void prender(bool);
    void apagar(bool);
    void acelerar(bool);
    void frenar(bool);
    void cargarGasolina(int);
};

#endif