#include "../Ciencia.h"
#include <cmath>
#include <tuple>

namespace matematicas {
    std::tuple<bool, double, double> resolverEcuacionCuadratica(double a, double b, double c) {
        double discriminante = b * b - 4 * a * c;
        if (discriminante < -DISCRIMINANT_THRESHOLD) {
            return std::make_tuple(false, 0.0, 0.0);
        } else if (std::abs(discriminante) < DISCRIMINANT_THRESHOLD) {
            double x = -b / (2 * a);
            return std::make_tuple(true, x, x);
        } else {
            double sqrtDiscriminante = std::sqrt(discriminante);
            double x1 = (-b + sqrtDiscriminante) / (2 * a);
            double x2 = (-b - sqrtDiscriminante) / (2 * a);
            return std::make_tuple(true, x1, x2);
        }
    }
}