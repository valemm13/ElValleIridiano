//
// Created by hanna on 4/14/2025.
//

#ifndef NODO_H
#define NODO_H



class Nodo {
private:
    bool activo=false;
    int x;
    int y;

public:
    Nodo();

    int getX() const;

    int getY() const;

    void setActivo(bool estado);
    bool getActivo() const;

};




#endif //NODO_H
