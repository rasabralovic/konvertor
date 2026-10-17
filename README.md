# Konvertor jedinica

Jednostavan CLI program u C++ za pretvaranje mernih jedinica.
Projekat sluzi kao vezba za rad sa Git-om.

## Podrzane konverzije

- Celzijus ↔ Farenhajt
- Kilometri ↔ milje
- Kilogrami ↔ funti
- Litri ↔ galone
- Hitrost: km/h ↔ mph

## Zahtevi

- g++ (C++17)
- make

## Pokretanje

```bash
make        # kompajlira u build/konvertor
make run    # kompajlira i pokrece
make clean  # brise build folder
```


## Avtor

Radovan Bralović, RVO, 1. vaja


## Struktura projekta

- `src/main.cpp` – meni in vnos uporabnika
- `src/konverzije.h` – deklaracije funkcij
- `src/konverzije.cpp` – implementacija pretvorb
- `Makefile` – prevajanje in zagon programa
