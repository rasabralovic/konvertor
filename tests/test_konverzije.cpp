#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
#include "konverzije.h"

TEST_CASE("Temperatura") {
    CHECK(celzijus_u_farenhajt(100) == doctest::Approx(212));
    CHECK(celzijus_u_farenhajt(0) == doctest::Approx(32));
    CHECK(farenhajt_u_celzijus(32) == doctest::Approx(0));
    CHECK(farenhajt_u_celzijus(-40) == doctest::Approx(-40));
}

TEST_CASE("Dolzina") {
    CHECK(km_v_milje(1.609344) == doctest::Approx(1));
    CHECK(milje_v_km(1) == doctest::Approx(1.609344));
}

TEST_CASE("Masa") {
    CHECK(funte_v_kg(1) == doctest::Approx(0.45359237));
    CHECK(kg_v_funte(0.45359237) == doctest::Approx(1));
}

TEST_CASE("Prostornina") {
    CHECK(galone_v_litre(1) == doctest::Approx(3.785411784));
    CHECK(litri_v_galone(3.785411784) == doctest::Approx(1));
}

TEST_CASE("Hitrost") {
    CHECK(mph_v_kmh(1) == doctest::Approx(1.609344));
    CHECK(kmh_v_mph(100) == doctest::Approx(62.137119).epsilon(0.0001));
}
