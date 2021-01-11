#include "AdresatMenedzer.h"

int AdresatMenedzer::dodajAdresata(int idZalogowanegoUzytkownika)
{
    if (idZalogowanegoUzytkownika==0) return idOstatniegoAdresata;
    Adresat adresat;
    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata(idZalogowanegoUzytkownika);

    adresaci.push_back(adresat);
    plikZAdresatami.dopiszAdresataDoPliku(adresat);

    return ++idOstatniegoAdresata;
}

Adresat AdresatMenedzer::podajDaneNowegoAdresata(int idZalogowanegoUzytkownika)
{
    Adresat adresat;

    adresat.ustawId(++idOstatniegoAdresata);
    adresat.ustawIdUzytkownika(idZalogowanegoUzytkownika);

    cout << "Podaj imie: ";
    string imie = MetodyPomocnicze::wczytajLinie();
    adresat.ustawImie (MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(imie));

    cout << "Podaj nazwisko: ";
    string nazwisko = MetodyPomocnicze::wczytajLinie();
    adresat.ustawNazwisko (MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(nazwisko));

    cout << "Podaj numer telefonu: ";
    adresat.ustawNumerTelefonu (MetodyPomocnicze::wczytajLinie());

    cout << "Podaj email: ";
    adresat.ustawEmail (MetodyPomocnicze::wczytajLinie());

    cout << "Podaj adres: ";
    adresat.ustawAdres (MetodyPomocnicze::wczytajLinie());

    return adresat;
}

void AdresatMenedzer::wypiszWszystkichAdresatow()
{
    for (int i = 0 ; i< adresaci.size(); i++)
    {
        cout << adresaci[i].pobierzId() << "|";
        cout << adresaci[i].pobierzIdUzytkownika() << "|";
        cout << adresaci[i].pobierzImie() << "|";
        cout << adresaci[i].pobierzNazwisko() << "|";
        cout << adresaci[i].pobierzNumerTelefonu() << "|";
        cout << adresaci[i].pobierzEmail() << "|";
        cout << adresaci[i].pobierzAdres() << "|" << endl;
    }
}

void AdresatMenedzer::wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika)
{
    idOstatniegoAdresata = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(adresaci,idZalogowanegoUzytkownika);
}
