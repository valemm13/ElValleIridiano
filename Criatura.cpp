#include "Criatura.h"

Criatura::Criatura() = default;

Criatura::Criatura(int x, int y, int v, int d, int r, int h): ubicacionX(x), ubicacionY(y), vida(v), desplazamiento(d), reproducir(r), hijos(h) {}

int Criatura::getUbicacionX() const {
    return ubicacionX;
}

int Criatura::getUbicacionY() const {
    return ubicacionY;
}

int Criatura::getVida() const{
    return vida;
}

int Criatura::getDesplazamiento() const{
    return desplazamiento;
}

int Criatura::getHijos() const{
    return hijos;
}

int Criatura::getReproducir() const {
    return reproducir;
}

int Criatura::setUbicacionX(int x) {
    ubicacionX=x;
}

int Criatura::setUbicacionY(int y) {
    ubicacionY=y;
}

void Criatura::mostrarCriatura() const {
    cout << "Vida: " << vida << endl;
    cout << "Ubicacion: (" << ubicacionX << "," << ubicacionY << ")" << endl;
}
