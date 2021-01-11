#ifndef PlikZAdresatami_h
#define PlikZAdresatami_h

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <cstdlib>

#include "Adresat.h"
#include "MetodyPomocnicze.h"


using namespace std;

class PlikZAdresatami
{
    const string nazwaPlikuZAdresatami;


    bool czyPlikJestPusty(fstream &plikTekstowy);
    string zamienDaneAdresataNaLinieZDanymiOddzielonaPionowymiKreskami(Adresat adresat);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);

public:
    PlikZAdresatami(string NAZWAPLIKUZADRESATAMI) : nazwaPlikuZAdresatami(NAZWAPLIKUZADRESATAMI) {};
    void dopiszAdresataDoPliku(Adresat adresat);
    int wczytajAdresatowZalogowanegoUzytkownikaZPliku(vector <Adresat> &adresaci, int idZalogowanegoUzytkownika);
};

#endif // PlikZAdresatami_h
