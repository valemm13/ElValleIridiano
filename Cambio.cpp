//
// Created by valer on 27/04/2025.
//

#include "Cambio.h"

Cambio::Cambio() = default;

Cambio::Cambio(int x, int y, int v, int d, int r, int h, int adaptacionPower): Criatura( x,y,v,d,r,h), adaptacionPower(adaptacionPower) {}

int Cambio::getAdaptacionPower() const {
    return adaptacionPower;
}

void Cambio::setadaptacionPower(int cantidad) {
    adaptacionPower = cantidad;
}
