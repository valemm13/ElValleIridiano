#ifndef CRIATURA_H
#define CRIATURA_H
#include <iostream>
using namespace std;


class Criatura {
private:
    int ubicacionX;
    int ubicacionY;
    int vida;
    int desplazamiento;
    int hijos;
    int reproducir;

public:
    Criatura();

    Criatura(int x, int y, int v, int d, int r, int h);

    int getUbicacionX() const;

    int getUbicacionY() const;

    int getVida() const;

    int getDesplazamiento() const;

    int getHijos() const;

    int getReproducir() const;

    int setUbicacionX(int x);

    int setUbicacionY(int y);

    void mostrarCriatura() const;
};



#endif //CRIATURA_H
