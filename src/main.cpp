#include <iostream>
#include "konverzije.h"

int main() {
    while (true) {
        std::cout << "\n=== Konvertor jedinica ===\n";
        std::cout << "1) Celzijus -> Farenhajt\n";
        std::cout << "2) Farenhajt -> Celzijus\n";

        std::cout << "3) Kilometri -> milje\n";
        std::cout << "4) Milje -> kilometri\n";

        std::cout << "5) Kilogrami -> funti\n";
        std::cout << "6) Funti -> kilogrami\n";

        std::cout << "7) Litri -> galone\n";
        std::cout << "8) Galone -> litri\n";

        std::cout << "9) Km/h -> mph\n";
        std::cout << "10) Mph -> km/h\n";

        std::cout << "0) Izhod\n";
        std::cout << "Izbira: ";

        int izbira;
        if (!(std::cin >> izbira) || izbira == 0) break;

        double vrednost;
        std::cout << "Vnesi vrednost: ";
        std::cin >> vrednost;

        switch (izbira) {
            case 1: std::cout << vrednost << " C = " << celzijus_u_farenhajt(vrednost) << " F\n"; break;
            case 2: std::cout << vrednost << " F = " << farenhajt_u_celzijus(vrednost) << " C\n"; break;

            case 3: std::cout << vrednost << " km = " << km_v_milje(vrednost) << " mi\n"; break;
            case 4: std::cout << vrednost << " mi = " << milje_v_km(vrednost) << " km\n"; break;

            case 5: std::cout << vrednost << " kg = " << kg_v_funte(vrednost) << " lb\n"; break;
            case 6: std::cout << vrednost << " lb = " << funte_v_kg(vrednost) << " kg\n"; break;

            case 7: std::cout << vrednost << " L = " << litri_v_galone(vrednost) << " gal\n"; break;
            case 8: std::cout << vrednost << " gal = " << galone_v_litre(vrednost) << " L\n"; break;
            
            case 9:  std::cout << vrednost << " km/h = " << kmh_v_mph(vrednost) << " mph\n"; break;
            case 10: std::cout << vrednost << " mph = " << mph_v_kmh(vrednost) << " km/h\n"; break;

            default: std::cout << "Neznana možnost.\n";
        }
    }
    return 0;
}
