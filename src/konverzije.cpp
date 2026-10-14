#include "konverzije.h"

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