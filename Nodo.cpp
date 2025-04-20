#include "Nodo.h"

Nodo::Nodo()=default;

Nodo::Nodo(int x, int y): x(x), y(y), activo(false) {}

int Nodo::getX() const {
    return x;
}

int Nodo::getY() const {
    return y;
}
void Nodo::setActivo(bool estado) {
    activo=estado;
}

bool Nodo::getActivo() const {
    return activo;
}

void Nodo::agregarCriatura(int x, int y) {
    if (activo == true) {
        criaturas.push_back(Criatura(x,y));
    }
    else {
        cout << "El nodo no esta activo" << endl;
    }
}

void Nodo::mostrarCriatura() {
    for (const auto& criatura : criaturas) {
        cout << "(" << criatura.getUbicacionX() << "," << criatura.getUbicacionY() << ")" << endl;
    }
}

const vector<Criatura> & Nodo::getCriaturas() const {
    return criaturas;
}



