#ifndef NODO_H
#define NODO_H
#include <iostream>
#include "Criatura.h"
#include <vector>
using namespace std;

class Nodo {
private:
    bool activo=false;
    int x;
    int y;
    vector <Criatura> criaturas;

public:
    Nodo();

    Nodo(int x, int y);

    int getX() const;

    int getY() const;

    void setActivo(bool estado);

    bool getActivo() const;

    void agregarCriatura(Criatura criatura);

    void mostrarNodo();


    vector<Criatura>&  getCriaturas() ;
};




#endif //NODO_H
