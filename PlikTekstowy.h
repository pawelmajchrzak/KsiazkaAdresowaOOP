#ifndef PlikTekstowy_h
#define PlikTekstowy_h

#include <iostream>
#include <fstream>

using namespace std;

class PlikTekstowy
{
    const string NAZWA_PLIKU;

public:

    PlikTekstowy(string nazwaPliku) : NAZWA_PLIKU(nazwaPliku) {};
    string pobierzNazwePliku();
    bool czyPlikJestPusty();


};

#endif // PlikTekstowy_h
