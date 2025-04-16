//
// Created by hanna on 4/14/2025.
//
#include <iostream>
#include "Entorno.h"
Entorno::Entorno(int tipo, int x, int y): tipoEntorno(tipo), sizeX(x), sizeY(y) {
    //creando mapa
    for (int x = 1; x <= sizeX; ++x) {
        for (int y = 1; y <= sizeY; ++y) {
            nodos[{x, y}] = Nodo();
        }
    }


    //dependiendo del tipo de entorno que elija el usuario, crear la matriz base, configurando los nodos

    for (auto &nodo: nodos) {
        int coordenadaX= nodo.first.first;
        int coordenadaY= nodo.first.second;
        Nodo& nodoMap= nodo.second;

        float porcX = (float)coordenadaX / sizeX;
        float porcY = (float)coordenadaY / sizeY;

        if (tipoEntorno==1) {
            // Altos Cálidos
            if (
            (porcY > 1.0f/8 && porcY <= 2.0f/8 && porcX >= 3.0f/8 && porcX <= 6.0f/8) ||  // fila 2
            (porcY > 2.0f/8 && porcY <= 3.0f/8 && porcX >= 2.0f/8 && porcX <= 7.0f/8) ||  // fila 3
            (porcY > 3.0f/8 && porcY <= 5.0f/8 && porcX >= 2.0f/8 && porcX <= 6.0f/8) ||  // filas 4–5
            (porcY > 5.0f/8 && porcY <= 7.0f/8 && porcX >= 1.0f/8 && porcX <= 5.0f/8))     // filas 6–7
            {
                nodoMap.setActivo(true);
                cout << "Activado nodo (" << coordenadaX << ", " << coordenadaY << ")\n";
            }

        }

        if (tipoEntorno==2) {
            // Lomas Mansas
            if (
            (porcY > 1.0/8 && porcY <= 4.0/8 && porcX >= 2.0/8 && porcX <= 6.0/8) ||  // filas 2–4
            (porcY > 4.0/8 && porcY <= 5.0/8 && porcX >= 3.0/8 && porcX <= 6.0/8) ||  // fila 5
            (porcY > 5.0/8 && porcY <= 7.0/8 && porcX >= 3.0/8 && porcX <= 8.0/8))    // filas 6–7
            {nodoMap.setActivo(true);}

        }
        if (tipoEntorno==3) {
            // Llanos Opacos
            if (
                (porcY > 1.0f/8 && porcY <= 4.0f/8 && porcX >= 2.0f/8 && porcX <= 4.0f/8) ||  // filas 2–4, columnas 2–4
                (porcY > 4.0f/8 && porcY <= 6.0f/8 && porcX >= 2.0f/8 && porcX <= 5.0f/8) ||  // filas 5–6, columnas 2–5
                (porcY > 6.0f/8 && porcY <= 7.0f/8 && porcX >= 2.0f/8 && porcX <= 7.0f/8) ||  // fila 7, columnas 2–7
                (porcY > 7.0f/8 && porcY <= 8.0f/8 && porcX >= 4.0f/8 && porcX <= 7.0f/8))     // fila 8, columnas 4–7
            {nodoMap.setActivo(true);}
        }

        if (tipoEntorno==4) {
            // Zonas Profundas
            if (
                (porcY > 1.0f/8 && porcY <= 2.0f/8 && porcX >= 5.0f/8 && porcX <= 7.0f/8) ||  // fila 2
                (porcY > 2.0f/8 && porcY <= 5.0f/8 && porcX >= 2.0f/8 && porcX <= 8.0f/8) ||  // filas 3–5
                (porcY > 5.0f/8 && porcY <= 6.0f/8 && porcX >= 3.0f/8 && porcX <= 8.0f/8) ||  // fila 6
                (porcY > 6.0f/8 && porcY <= 7.0f/8 && porcX >= 4.0f/8 && porcX <= 7.0f/8))  // fila 7)
            {nodoMap.setActivo(true);}

        }
    }
}

void Entorno::imprimirMapa() const {
    for (int y = 1; y <= sizeY; ++y) {
        for (int x = 1; x <= sizeX; ++x) {
            auto it = nodos.find({x, y});
            if (it != nodos.end()) {
                if (it->second.getActivo()) {
                    std::cout << " # ";
                } else {
                    std::cout << " 0 ";
                }
            } else {
                std::cout << "? ";  // Por si falta el nodo en el mapa
            }
        }
        std::cout << '\n';
    }
}


