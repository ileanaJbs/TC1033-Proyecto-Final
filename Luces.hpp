/*
Autor: Jocelyn Ileana Balderas Sánchez
Matrícula: A01798528

Implementación de la clase Luces

*/

#include <iostream>
#include <string>

using namespace std;

#ifndef LUCES_HPP
#define LUCES_HPP

class Luces {
    private:
        string lugar;
        bool estadoLuces;

    public:
        Luces(); // constructor por default
        void apagarLuces();
        void prenderLuces();

};

#endif 