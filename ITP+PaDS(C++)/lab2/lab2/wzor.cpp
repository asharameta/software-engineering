#include "wzor.h"

Wzor::~Wzor()
{
    cout << "Obiekt (" << dlugosc << "," << znak << ") usuniety.\n";
}

void Wzor::opis() const
{
    cout << dlugosc << " x '" << znak << "'\n";
}

void Wzor::drukuj() const
{
    for (int i = 0; i < dlugosc; ++i)
    {
        cout << znak;
    }
    cout << endl;
}

void Wzor::ustaw(char z, int d)
{
    znak = z;
    dlugosc = d;
}


