#include "Geometria.h"
#include <cmath>

namespace Geometria {
    double calcularAreaCirculo(double radio) {
        return M_PI * radio * radio;
    }
    double calcularPerimetroCirculo(double radio) {
        return 2 * M_PI * radio;
    }
}