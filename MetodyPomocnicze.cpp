#include "MetodyPomocnicze.h"

string MetodyPomocnicze::konwerjsaIntNaString(int liczba)
{
    ostringstream ss;
    ss << liczba;
    string str = ss.str();
    return str;
}

string MetodyPomocnicze::wczytajLinie()
{
    cin.clear();
    cin.sync();
    string wejscie = "";
    getline(cin, wejscie);
    return wejscie;
}
