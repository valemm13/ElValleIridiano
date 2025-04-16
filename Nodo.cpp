//
// Created by hanna on 4/14/2025.
//

#include "Nodo.h"

Nodo::Nodo()=default;

int Nodo::getX() const {
    return x;
}

int Nodo::getY() const {
    return x;
}
void Nodo::setActivo(bool estado) {
    activo=estado;
}

bool Nodo::getActivo() const {
    return activo;
}



