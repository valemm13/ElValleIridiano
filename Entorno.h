//
// Created by hanna on 4/14/2025.
//

#ifndef ENTORNO_H
#define ENTORNO_H
#include "Nodo.h"
#include <vector>
#include <map>

using namespace std;

class Entorno {
private:
    int tipoEntorno;
    int sizeX;
    int sizeY;
    map<pair<int, int>, Nodo> nodos;

public:
    Entorno(int tipo, int x, int y); //crear objeto entorno (constructor)


    void imprimirMapa() const;


    void mostrar();

};

#endif //ENTORNO_H
