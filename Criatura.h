#ifndef CRIATURA_H
#define CRIATURA_H



class Criatura {
private:
    int ubicacionX;
    int ubicacionY;

public:
    Criatura(int x, int y);

    int getUbicacionX() const;

    int getUbicacionY() const;

    int setUbicacionX(int x);

    int setUbicacionY(int y);
};



#endif //CRIATURA_H
