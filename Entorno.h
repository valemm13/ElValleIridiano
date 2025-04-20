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

    void agregarCriaturaNodo(int x, int y, const Criatura& criatura);

    Nodo& getNodo(int x, int y);
};

#endif //ENTORNO_H