#include "sportowiec.h"
#include <cstring>
int Sportowiec::ile = 0;

Sportowiec::Sportowiec()
{
    ile++;
    nazwisko = new char[12];
    strcpy(nazwisko, "BRAK DANYCH");
    sport = new char[12];
    strcpy(sport, "BRAK DANYCH");
    waga = 0.0;
}

Sportowiec::Sportowiec(const char* n, const char* s, double w)
{
    ile++;
    int nz = strlen(n);
    nazwisko = new char[nz + 1];
    strcpy(nazwisko, n);
    int sp = strlen(s);
    sport = new char[sp + 1];
    strcpy(sport, s);
    waga = w;
}


Sportowiec::~Sportowiec()
{
    delete[] nazwisko;
    delete[] sport;
    ile--;
}

Sportowiec::Sportowiec(const Sportowiec& S)
{
    ile++;
    waga = S.waga;
    int tmp = strlen(S.nazwisko);
    int tmp2 = strlen(S.sport);
    nazwisko = new char[tmp + 1];
    sport = new char[tmp2 + 1];
    strcpy(nazwisko, S.nazwisko);
    strcpy(sport, S.sport);
}

Sportowiec& Sportowiec::operator=(const Sportowiec& S)
{
    if (this == &S)return *this;
    delete[]nazwisko;
    delete[]sport;
    waga = S.waga;
    int tmp = strlen(S.nazwisko);
    int tmp2 = strlen(S.sport);
    nazwisko = new char[tmp + 1];
    sport = new char[tmp2 + 1];
    strcpy(nazwisko, S.nazwisko);
    strcpy(sport, S.sport);
    return *this;
}


ostream& operator<<(ostream& os, const Sportowiec& S)
{
    os << S.nazwisko << ' ' << S.sport << ' ' << S.waga;
    return os;
}




