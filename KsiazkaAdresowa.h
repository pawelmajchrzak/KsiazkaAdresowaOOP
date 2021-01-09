#ifndef KsiazkaAdresowa_h
#define KsiazkaAdresowa_h

#include <iostream>

#include "UzytkownikMenedzer.h"
#include "MetodyPomocnicze.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenedzer uzytkownikMenedzer;
public:
    KsiazkaAdresowa();
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
};


/*
    int idOstatniegoAdresata;
    int idUsunietegoAdresata;

public:
    KsiazkaAdresowa();
*/

#endif // KsiazkaAdresowa_h
