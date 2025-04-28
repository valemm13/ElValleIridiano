#include "Nodo.h"
#include "Criatura.h"

Nodo::Nodo()=default;

Nodo::Nodo(int x, int y): x(x), y(y), activo(false) {}

int Nodo::getX() const {
    return x;
}

int Nodo::getY() const {
    return y;
}

void Nodo :: mostrarNodo()  {
    for (const auto& criatura : criaturas) {
        criatura.mostrarCriatura();
    }
}

void Nodo::setActivo(bool estado) {
    activo=estado;
}

bool Nodo::getActivo() const {
    return activo;
}

void Nodo::agregarCriatura(Criatura criatura) {
    if (activo == true) {
        criaturas.push_back(criatura);
    }
    else {
        cout << "El nodo no esta activo" << endl;
    }
}


vector<Criatura>& Nodo::getCriaturas()  {
    return criaturas;
}



