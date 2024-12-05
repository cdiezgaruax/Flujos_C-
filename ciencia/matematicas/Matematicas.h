#ifndef MATEMATICAS_H
#define MATEMATICAS_H

#include <tuple>

namespace matematicas {
    const double DISCRIMINANT_THRESHOLD = 1e-7;
    std::tuple<bool, double, double> resolverEcuacionCuadratica(double a, double b, double c);
}

#endif // MATEMATICAS_H


