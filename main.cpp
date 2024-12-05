#include <iostream>
#include "matematicas/Matematicas.h"
#include "geometria/Geometria.h"
#include "ciencia/Ciencia.h"

int main() {
    // eje 1
    int num;
    std::cout << "Ingresa un numero: ";
    std::cin >> num;
    std::cout << "El numero ingresado es: " << num << std::endl;

    matematicas::Matematicas mat;
    std::cout << "Suma de 3 y 4: " << mat.sumar(3, 4) << std::endl;
    std::cout << "Resta de 7 y 2: " << mat.restar(7, 2) << std::endl;

    // eje 2
    double base = 5.0, altura = 10.0, radio = 3.0, lado = 4.0;
    double lado1 = 3.0, lado2 = 4.0, lado3 = 5.0;

    double areaTriangulo = Geometria::calcularAreaTriangulo(base, altura);
    double areaCirculo = Geometria::calcularAreaCirculo(radio);
    double areaCuadrado = Geometria::calcularAreaCuadrado(lado);

    std::cout << "Area del triangulo: " << areaTriangulo << std::endl;
    std::cout << "Area del circulo: " << areaCirculo << std::endl;
    std::cout << "Area del cuadrado: " << areaCuadrado << std::endl;

    // eje 3
    double perimetroTriangulo = Geometria::calcularPerimetroTriangulo(lado1, lado2, lado3);
    double perimetroCirculo = Geometria::calcularPerimetroCirculo(radio);
    double perimetroCuadrado = Geometria::calcularPerimetroCuadrado(lado);

    std::cout << "Perimetro del triangulo: " << perimetroTriangulo << std::endl;
    std::cout << "Perimetro del circulo: " << perimetroCirculo << std::endl;
    std::cout << "Perimetro del cuadrado: " << perimetroCuadrado << std::endl;

    //eje 4



    return 0;
}