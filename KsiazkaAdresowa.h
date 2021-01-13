#ifndef KsiazkaAdresowa_h
#define KsiazkaAdresowa_h

#include <iostream>

#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"
#include "MetodyPomocnicze.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenedzer uzytkownikMenedzer;
    AdresatMenedzer adresatMenedzer;
    int idZalogowanegoUzytkownika;
public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami) : uzytkownikMenedzer(nazwaPlikuZUzytkownikami), adresatMenedzer(nazwaPlikuZAdresatami) {
    idZalogowanegoUzytkownika=0;
    };
    void rejestracjaUzytkownika();
    void logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogowanieUzytkownika();
    void wypiszWszystkichUzytkownikow();

    void dodajAdresata();
    void wypiszWszystkichAdresatow();

};

#endif // KsiazkaAdresowa_h
