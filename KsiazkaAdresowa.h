#ifndef KsiazkaAdresowa_h
#define KsiazkaAdresowa_h

#include <iostream>

#include "UzytkownikMenedzer.h"
#include "MetodyPomocnicze.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenedzer uzytkownikMenedzer;
    int idZalogowanegoUzytkownika;
public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami) : uzytkownikMenedzer(nazwaPlikuZUzytkownikami) {
    uzytkownikMenedzer.wczytajUzytkownikowZPliku();
    idZalogowanegoUzytkownika=0;
    };
    void rejestracjaUzytkownika();
    void logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wypiszWszystkichUzytkownikow();

    //void ustawIdZalogowanegoUzytkownika(int IDZALOGOWANEGOUZYTKOWNIKA);
    //int pobierzIdZalogowanegoUzytkownika();
};


/*
    int idOstatniegoAdresata;
    int idUsunietegoAdresata;

public:
    KsiazkaAdresowa();
*/

#endif // KsiazkaAdresowa_h
