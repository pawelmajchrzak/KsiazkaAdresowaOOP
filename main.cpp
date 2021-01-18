#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt","Adresaci.txt");



    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    ksiazkaAdresowa.logowanieUzytkownika();

    //ksiazkaAdresowa.dodajAdresata();

    //ksiazkaAdresowa.wypiszWszystkichAdresatow();

    //ksiazkaAdresowa.wylogowanieUzytkownika();

    //ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
    //ksiazkaAdresowa.rejestracjaUzytkownika();

    ksiazkaAdresowa.wyszukajAdresatowPoImieniu();
    ksiazkaAdresowa.wyszukajAdresatowPoNazwisku();

    return 0;
}
