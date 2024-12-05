cmake_minimum_required(VERSION 3.29)
project(Flujos_C_)

set(CMAKE_CXX_STANDARD 14)

add_executable(Flujos_C_
    main.cpp
        matematicas/Matematicas.cpp
        geometria/Geometria.h
        geometria/Cuadrado.cpp
        geometria/Circulo.cpp
        geometria/Triangulo.cpp
        ciencia/fisica/Fisica.cpp
        ciencia/matematicas/Matematicas.cpp
        ciencia/Ciencia.h
        ciencia/Ciencia.cpp)
