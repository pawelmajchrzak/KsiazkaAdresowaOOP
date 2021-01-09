#ifndef PlikZUzytkownikami_h
#define PlikZUzytkownikami_h

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <cstdlib>

#include "Uzytkownik.h"
#include "MetodyPomocnicze.h"


using namespace std;

class PlikZUzytkownikami
{
    string nazwaPlikuZUzytkownikami;


    bool czyPlikJestPusty(fstream &plikTekstowy);
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);

public:
    PlikZUzytkownikami();
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    vector <Uzytkownik>  wczytajUzytkownikowZPliku();
};

#endif // PlikZUzytkownikami_h
