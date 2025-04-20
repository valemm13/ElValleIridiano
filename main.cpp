#include <iostream>
#include <string>
#include "Entorno.h"

int main() {
    Entorno mapaPrueba= Entorno(1,8,8);

    Criatura c1(3,3);
    Criatura c2(4,4);
    Criatura c3(5,5);
    Criatura c4(6,6);

    mapaPrueba.agregarCriaturaNodo(3,3,c1);
    mapaPrueba.agregarCriaturaNodo(4,4,c2);
    mapaPrueba.agregarCriaturaNodo(5,5,c3);
    mapaPrueba.agregarCriaturaNodo(6,5,c4);

    mapaPrueba.imprimirMapa();

    return 0;
}