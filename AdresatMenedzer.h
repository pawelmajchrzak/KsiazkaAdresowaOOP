#ifndef AdresatMenedzer_h
#define AdresatMenedzer_h

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "MetodyPomocnicze.h"

using namespace std;

class AdresatMenedzer
{
    int idOstatniegoAdresata;
    vector <Adresat> adresaci;

    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);
    PlikZAdresatami plikZAdresatami;

public:
    AdresatMenedzer (string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {
    idOstatniegoAdresata=0;
    };
    int dodajAdresata(int idZalogowanegoUzytkownika);
    void wypiszWszystkichAdresatow();
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);

};

#endif // AdresatMenedzer_h
