#ifndef PlikZAdresatami_h
#define PlikZAdresatami_h

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <algorithm>
#include <windows.h>

#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "PlikTekstowy.h"

using namespace std;

class PlikZAdresatami : public PlikTekstowy
{
    //const string NAZWA_PLIKU_Z_ADRESATAMI;
    int idOstatniegoAdresata;

    //bool czyPlikJestPusty(fstream &plikTekstowy);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    void usunPlik(string nazwaPlikuZRozszerzeniem);
    void zmienNazwePliku(string staraNazwa, string nowaNazwa);

public:
    PlikZAdresatami(string nazwaPlikuZAdresatami) : PlikTekstowy(nazwaPlikuZAdresatami) {
    idOstatniegoAdresata = 0;
    };
    bool dopiszAdresataDoPliku(Adresat adresat);
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    int pobierzIdOstatniegoAdresata();
    void usunWybranegoAdresataZPliku(int idAdresata);
    void edytujAdresataWPliku(Adresat adresat);

};

#endif // PlikZAdresatami_h
