#ifndef ENTORNO_H
#define ENTORNO_H
#include "Nodo.h"
#include <vector>
#include <map>

using namespace std;

class Entorno {
private:
    int tipoEntorno;
    int size;
    map<pair<int, int>, Nodo> nodos;

public:
    Entorno(int tipo, int s); //crear objeto entorno (constructor)

    void imprimirMapa() ;

    void mostrarNodoEntorno(int x, int y) {
        for (auto& nodo : nodos) {
            if (nodo.first.first == x && nodo.first.second == y) {
                nodo.second.mostrarNodo();
            }
        }

    }

    void agregarCriaturaNodo(const Criatura& criatura);

};

#endif //ENTORNO_H