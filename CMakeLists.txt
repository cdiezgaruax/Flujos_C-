cmake_minimum_required(VERSION 3.10)
project(Flujos_C_)

set(CMAKE_CXX_STANDARD 14)

add_executable(Flujos_C_
        main.cpp
        ciencia/Ciencia.h
        Eje5/STLContainers.h
        geometria/Geometria.h
        matematicas/Matematicas.h
        matematicas/Matematicas.cpp
        geometria/Triangulo.cpp
        geometria/Cuadrado.cpp
        geometria/Circulo.cpp
        Eje5/STLContainers.cpp
        ciencia/Fisica.cpp
)