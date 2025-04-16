# 0 "C:/Users/hanna/OneDrive/Escritorio/proyectofinal/Nodo.cpp"
# 1 "C:\\Users\\hanna\\OneDrive\\Escritorio\\proyectofinal\\cmake-build-debug//"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "C:/Users/hanna/OneDrive/Escritorio/proyectofinal/Nodo.cpp"




# 1 "C:/Users/hanna/OneDrive/Escritorio/proyectofinal/Nodo.h" 1
# 10 "C:/Users/hanna/OneDrive/Escritorio/proyectofinal/Nodo.h"
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
# 6 "C:/Users/hanna/OneDrive/Escritorio/proyectofinal/Nodo.cpp" 2

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
