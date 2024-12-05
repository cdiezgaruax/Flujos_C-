#include <iostream>
#include "matematicas/Matematicas.h"

int main() {
    //eje 1
    int num;
    std::cout << "Ingresa un número: ";
    std::cin >> num;
    std::cout << "El numero ingresado es: " << num << std::endl;

    matematicas::Matematicas mat;
    std::cout << "Suma de 3 y 4: " << mat.sumar(3, 4) << std::endl;
    std::cout << "Resta de 7 y 2: " << mat.restar(7, 2) << std::endl;

    //eje 2

    return 0;
}