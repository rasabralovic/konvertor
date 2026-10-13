#include <iostream>
#include "konverzije.h"

int main() {
    while (true) {
        std::cout << "\n=== Konvertor jedinica ===\n";
        std::cout << "1) Celzijus -> Farenhajt\n";
        std::cout << "2) Farenhajt -> Celzijus\n";
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
            default: std::cout << "Nepoznata opcija.\n";
        }
    }
    return 0;
}
