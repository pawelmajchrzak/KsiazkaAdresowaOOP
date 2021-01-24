#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{

    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt","Adresaci.txt");

    char wybor;

    while (true)
    {
        if (ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika() == 0)
        {
            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                ksiazkaAdresowa.logowanieUzytkownika();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        }
        else
        {
            /*
            if (adresaci.empty() == true)
                // Pobieramy idOstatniegoAdresata, po to aby zoptymalizowac program.
                // Dzieki temu, kiedy uztykwonik bedzie dodawal nowego adresata
                // to nie bedziemy musieli jeszcze raz ustalac idOstatniegoAdresata
                idOstatniegoAdresata = wczytajAdresatowZalogowanegoUzytkownikaZPliku(adresaci, idZalogowanegoUzytkownika);
            */
            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuUzytkownika();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.dodajAdresata();
                break;
            case '2':
                ksiazkaAdresowa.wyszukajAdresatowPoImieniu();
                break;
            case '3':
                ksiazkaAdresowa.wyszukajAdresatowPoNazwisku();
                break;
            case '4':
                ksiazkaAdresowa.wypiszWszystkichAdresatow();
                break;
            case '5':
                ksiazkaAdresowa.usunAdresata();
                break;
            case '6':
                ksiazkaAdresowa.edytujAdresata();
                break;
            case '7':
                ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
                break;
            case '8':
                ksiazkaAdresowa.wylogowanieUzytkownika();
                break;
            }
        }
    }
    return 0;
}


/*


    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    ksiazkaAdresowa.logowanieUzytkownika();

    ksiazkaAdresowa.dodajAdresata();

    ksiazkaAdresowa.wypiszWszystkichAdresatow();

    ksiazkaAdresowa.wylogowanieUzytkownika();

    ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
    ksiazkaAdresowa.rejestracjaUzytkownika();

    ksiazkaAdresowa.wyszukajAdresatowPoImieniu();
    ksiazkaAdresowa.wyszukajAdresatowPoNazwisku();

    ksiazkaAdresowa.usunAdresata();
    ksiazkaAdresowa.edytujAdresata();
    ksiazkaAdresowa.wypiszWszystkichAdresatow();
    return 0;
}
*/
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
