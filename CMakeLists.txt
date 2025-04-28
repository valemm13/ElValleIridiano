cmake_minimum_required(VERSION 3.30)
project(proyectofinal)

set(CMAKE_CXX_STANDARD 20)

add_executable(proyectofinal main.cpp
        Entorno.cpp
        Entorno.h
        Nodo.cpp
        Nodo.h
        Criatura.cpp
        Criatura.h
        Raiz.cpp
        Raiz.h
        Chispa.cpp
        Chispa.h
        Cambio.cpp
        Cambio.h)
