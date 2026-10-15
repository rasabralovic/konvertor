#include <iostream>
#include "konverzije.h"

int main() {
    while (true) {
        std::cout << "\n=== Konvertor jedinica ===\n";
        std::cout << "1) Celzijus -> Farenhajt\n";
        std::cout << "2) Farenhajt -> Celzijus\n";
        std::cout << "3) Kilogrami -> funti\n";
        std::cout << "4) Funti -> kilogrami\n";
        std::cout << "0) Ihod\n";
        std::cout << "Izbira: ";

        int izbira;
        if (!(std::cin >> izbira) || izbira == 0) break;

        double vrednost;
        std::cout << "Vnesi vrednost: ";
        std::cin >> vrednost;

        switch (izbira) {
            case 1: std::cout << vrednost << " C = " << celzijus_u_farenhajt(vrednost) << " F\n"; break;
            case 2: std::cout << vrednost << " F = " << farenhajt_u_celzijus(vrednost) << " C\n"; break;
            case 3: std::cout << vrednost << " kg = " << kg_v_funte(vrednost) << " lb\n"; break;
            case 4: std::cout << vrednost << " lb = " << funte_v_kg(vrednost) << " kg\n"; break;
            default: std::cout << "Nepoznata opcija.\n";
        }
    }
    return 0;
}
