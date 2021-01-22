#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt","Adresaci.txt");



    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    ksiazkaAdresowa.logowanieUzytkownika();

    //ksiazkaAdresowa.dodajAdresata();

    ksiazkaAdresowa.wypiszWszystkichAdresatow();

    //ksiazkaAdresowa.wylogowanieUzytkownika();

    //ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
    //ksiazkaAdresowa.rejestracjaUzytkownika();

    //ksiazkaAdresowa.wyszukajAdresatowPoImieniu();
    //ksiazkaAdresowa.wyszukajAdresatowPoNazwisku();

    ksiazkaAdresowa.usunAdresata();
    ksiazkaAdresowa.wypiszWszystkichAdresatow();
    return 0;
}
/*
//Testy PlikZAdresatami
int main()
{
    PlikZAdresatami plikZAdresatami ("Adresaci-test.txt");
    Adresat adresat(1,9,"Janek","Twardowski","999 888 333","janek@o2.pl","ul. Jankowa 3a")

    plikZAdresatami.dopiszAdresataDoPliku(adresat);

    adresat.pobierzImie("Marek");

    adres.usunAdresata();
}
*/
