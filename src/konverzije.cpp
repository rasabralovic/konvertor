#include "konverzije.h"

constexpr double LITROV_NA_GALONO = 3.785411784;

double celzijus_u_farenhajt(double c) {
    return c * 9.0 / 5.0 + 32.0;
}

double farenhajt_u_celzijus(double f) {
    return (f - 32.0) * 5.0 / 9.0;
}

double km_v_milje(double km) {
    return km / 1.609344;
}

double milje_v_km(double mi) {
    return mi * 1.609344;
}

double kg_v_funte(double kg) {
    return kg / 0.45359237;
}

double funte_v_kg(double lb) {
    return lb * 0.45359237;
}

double litri_v_galone(double l) {
    return l / LITROV_NA_GALONO;
}

double galone_v_litre(double gal) {
    return gal * LITROV_NA_GALONO;
}
