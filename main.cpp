#include <iostream>
#include <string>
#include "Entorno.h"
#include "Nodo.h"


int main() {
    Entorno mapaPrueba= Entorno(1,8);

    Criatura c1(3,3,1,1,1,1);
    Criatura c2(3,3,7,1,1,1);
    Criatura c3(5,5,1,1,1,1);
    Criatura c4(6,6,1,1,1,1);

    mapaPrueba.agregarCriaturaNodo(c1);
    mapaPrueba.agregarCriaturaNodo(c2);
    mapaPrueba.agregarCriaturaNodo(c3);
    mapaPrueba.agregarCriaturaNodo(c4);

    mapaPrueba.imprimirMapa();
    mapaPrueba.mostrarNodoEntorno(3,3);

    return 0;
}