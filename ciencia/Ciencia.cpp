#include "Ciencia.h"

namespace ciencia {

    double calcularEnergia(double masa) {
        return Fisica::calcularEnergia(masa);
    }

    std::tuple<bool, double, double> resolverEcuacionCuadratica(double a, double b, double c) {
        return matematicas::resolverEcuacionCuadratica(a, b, c);
    }
}

