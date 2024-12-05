#include <iostream>
#include "matematicas/Matematicas.h"
#include "geometria/Geometria.h"

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

    double base = 5.0, altura = 10.0, radio = 3.0, lado = 4.0;

    double areaTriangulo = Geometria::calcularAreaTriangulo(base, altura);
    double areaCirculo = Geometria::calcularAreaCirculo(radio);
    double areaCuadrado = Geometria::calcularAreaCuadrado(lado);

    std::cout << "Área del triángulo: " << areaTriangulo << std::endl;
    std::cout << "Área del círculo: " << areaCirculo << std::endl;
    std::cout << "Área del cuadrado: " << areaCuadrado << std::endl;

    return 0;
}
