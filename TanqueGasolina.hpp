/*
Autor: Jocelyn Ileana Balderas Sánchez
Matrícula: A01798528

Implementación de la clase TanqueGasolina

*/

#ifndef TANQUEGASOLINA_HPP
#define TANQUEGASOLINA_HPP

class TanqueGasolina
{
private:
    double capacidad;
    double nivel;

public:
    TanqueGasolina(); // constructor por default
    void llenarTanque();
    void gastarGasolina();
};

#endif