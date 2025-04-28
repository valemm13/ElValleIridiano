#include "Chispa.h"

Chispa::Chispa() = default;

Chispa::Chispa(int x, int y, int v, int d, int r, int h, int rapidezPower): Criatura(x, y, v, d,r, h), rapidezPower(rapidezPower) {}

int Chispa::getRapidezPower() const {
    return rapidezPower;
}

void Chispa::setRapidezPower(int cantidad) {
    rapidezPower = cantidad;
}
