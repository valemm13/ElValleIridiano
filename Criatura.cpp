#include "Criatura.h"

Criatura::Criatura(int x, int y): ubicacionX(x), ubicacionY(y) {}

int Criatura::getUbicacionX() const {
    return ubicacionX;
}

int Criatura::getUbicacionY() const {
    return ubicacionY;
}

int Criatura::setUbicacionX(int x) {
    ubicacionX=x;
}

int Criatura::setUbicacionY(int y) {
    ubicacionY=y;
}
