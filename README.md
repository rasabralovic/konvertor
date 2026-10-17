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

## Prispevanje

1. Ustvari novo vejo iz `main` (npr. `feature/ime`).
2. Commit sporočila piši po pravilih Conventional Commits.
3. Odpri pull request; združitev je možna šele po razrešenih komentarjih.

## Različice

Projekt uporablja semantično označevanje različic (MAJOR.MINOR.PATCH). Seznam izdaj je na strani Releases.

## Pravila commit sporočil

- `feat:` nova funkcionalnost
- `fix:` popravek napake
- `docs:` dokumentacija
- `refactor:` sprememba kode brez spremembe delovanja

## Kloniranje

Projekt uporablja git submodule, zato kloniraj z:

```bash
git clone --recurse-submodules git@github.com:rasabralovic/konvertor.git
```

Če si repozitorij že kloniral brez modulov:

```bash
git submodule update --init --recursive
```

## Testi

```bash
make test
```
