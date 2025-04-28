#include "Raiz.h"

Raiz::Raiz() = default;

Raiz::Raiz(int x, int y, int v, int d, int r, int h, int vidaPower): Criatura(x, y, 2*v, d,2*r, h), vidaPower(vidaPower) {}

int Raiz::getVidaPower() const {
    return vidaPower;
}

void Raiz::setVidaPower(int cantidad) {
    vidaPower = cantidad;
}
