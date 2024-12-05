#include <iostream>
#include <fstream>
#include <sstream>
#include "matematicas/Matematicas.h"
#include "geometria/Geometria.h"

int main() {
    std::ifstream file;
    file.open("C:/Users/carlo/Desktop/uni/programacion/Flujos_C-/example.txt");
    if (!file) {
        std::cerr << "No se pudo abrir el archivo.\n";
    } else {
        std::cout << "El archivo se abrió correctamente.\n";
    }
    file.close();

    std::ofstream outFile("C:/Users/carlo/Desktop/uni/programacion/Flujos_C-/example.txt");
    if (!outFile) {
        std::cerr << "No se pudo abrir el archivo de salida.\n";
        return 1;
    }

    // eje 1
    int num;
    std::cout << "Ingresa un numero: ";
    std::cin >> num;
    std::cout << "El numero ingresado es: " << num << std::endl;
    outFile << "El numero ingresado es: " << num << std::endl;

    matematicas::Matematicas mat;
    std::cout << "Suma de 3 y 4: " << mat.sumar(3, 4) << std::endl;
    outFile << "Suma de 3 y 4: " << mat.sumar(3, 4) << std::endl;
    std::cout << "Resta de 7 y 2: " << mat.restar(7, 2) << std::endl;
    outFile << "Resta de 7 y 2: " << mat.restar(7, 2) << std::endl;

    // eje 2
    double base = 5.0, altura = 10.0, radio = 3.0, lado = 4.0;
    double lado1 = 3.0, lado2 = 4.0, lado3 = 5.0;

    double areaTriangulo = Geometria::calcularAreaTriangulo(base, altura);
    double areaCirculo = Geometria::calcularAreaCirculo(radio);
    double areaCuadrado = Geometria::calcularAreaCuadrado(lado);

    std::cout << "Area del triangulo: " << areaTriangulo << std::endl;
    outFile << "Area del triangulo: " << areaTriangulo << std::endl;
    std::cout << "Area del circulo: " << areaCirculo << std::endl;
    outFile << "Area del circulo: " << areaCirculo << std::endl;
    std::cout << "Area del cuadrado: " << areaCuadrado << std::endl;
    outFile << "Area del cuadrado: " << areaCuadrado << std::endl;

    // eje 3
    double perimetroTriangulo = Geometria::calcularPerimetroTriangulo(lado1, lado2, lado3);
    double perimetroCirculo = Geometria::calcularPerimetroCirculo(radio);
    double perimetroCuadrado = Geometria::calcularPerimetroCuadrado(lado);

    std::cout << "Perimetro del triangulo: " << perimetroTriangulo << std::endl;
    outFile << "Perimetro del triangulo: " << perimetroTriangulo << std::endl;
    std::cout << "Perimetro del circulo: " << perimetroCirculo << std::endl;
    outFile << "Perimetro del circulo: " << perimetroCirculo << std::endl;
    std::cout << "Perimetro del cuadrado: " << perimetroCuadrado << std::endl;
    outFile << "Perimetro del cuadrado: " << perimetroCuadrado << std::endl;

    // New code
    std::string text;
    std::cout << "Ingresa un texto: ";
    std::cin.ignore(); // To ignore the newline character left in the input buffer
    std::getline(std::cin, text);

    std::stringstream ss;
    ss << text;
    std::string text_from_ss;
    ss >> text_from_ss;
    std::cout << "El texto desde el flujo de cadena es: " << text_from_ss << std::endl;
    outFile << "El texto desde el flujo de cadena es: " << text_from_ss << std::endl;

    outFile.close();
    return 0;
}