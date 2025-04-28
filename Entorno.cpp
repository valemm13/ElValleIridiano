#include <iostream>
#include "Entorno.h"
using namespace std;
Entorno::Entorno(int tipo, int s): tipoEntorno(tipo), size(s) {
    //creando mapa
    for (int x = 1; x <= size; ++x) {
        for (int y = 1; y <= size; ++y) {
            nodos[{x, y}] = Nodo();
        }
    }

    //dependiendo del tipo de entorno que elija el usuario, crear la matriz base, configurando los nodos

    for (auto &nodo: nodos) {
        int coordenadaX= nodo.first.first;
        int coordenadaY= nodo.first.second;
        Nodo& nodoMap= nodo.second;

        float porcX = (float)coordenadaX / size;
        float porcY = (float)coordenadaY / size;

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

void Entorno::imprimirMapa()  {
    for (int y = 1; y <= size; ++y) {
        for (int x = 1; x <= size; ++x) {
            auto temp = nodos.find({x, y});
            if (temp != nodos.end()) {
                 Nodo& nodo = temp->second;
                if (nodo.getActivo()) {
                    if (!nodo.getCriaturas().empty()) {
                        cout << " " << nodo.getCriaturas().size() << " ";
                    } else {
                        cout << " # ";
                    }
                } else {
                    cout << " 0 ";
                }
            } else {
                cout << " ? ";
            }
        }
        cout << '\n';
    }
}

void Entorno::agregarCriaturaNodo(const Criatura &criatura) {
    auto temp = nodos.find({criatura.getUbicacionX(), criatura.getUbicacionY()});
    if (temp != nodos.end()) {  // Verifica si el nodo existe
        temp->second.agregarCriatura(criatura);  // Agrega la criatura al nodo
    } else {
        cout << "Nodo no encontrado en las coordenadas (" << criatura.getUbicacionX() << ", " << criatura.getUbicacionY() << ").\n";
    }
}

