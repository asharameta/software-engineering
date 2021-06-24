#include"siatka.h"

Siatka Siatka::operator=(const Siatka& s)
{
    if (this == &s) return *this;

    for (int i = 0; i < szer; i++)
    {
        delete[]tab[i];
    }
    delete[]tab;

    this->szer = s.szer;
    this->wys = s.wys;
    tab = new Komorka * [szer];

    for (int i = 0; i < szer; i++)
    {
        tab[i] = new Komorka[wys];
    }

    for (int i = 1; i < szer - 1; ++i) {
        for (int j = 1; j < wys - 1; ++j) {
            tab[i][j].GetStan() = s.tab[i][j].GetStan();
        }
    }
    return *this;
}

void Siatka::Cykl()
{
    Siatka kopia = *this;

    for (int i = 1; i < szer - 2; ++i) {
        for (int j = 1; j < wys - 2; ++j) {
            int l = liczbaSasiadow(i, j);
            if (l == 3 || l == 2 && tab[i][j].GetStan() == true)
            {
                tab[i][j].GetStan() = true;
            }
            else
                tab[i][j].GetStan() = false;
        }
    }
    *this = kopia;
}

int Siatka::liczbaSasiadow(int i, int j)
{
    int licznik = 0;
    if (tab[i - 1][j].GetStan() == 1)
        ++licznik;
    if (tab[i][j - 1].GetStan() == 1)
        ++licznik;
    if (tab[i + 1][j].GetStan() == 1)
        ++licznik;
    if (tab[i][j + 1].GetStan() == 1)
        ++licznik;
    if (tab[i - 1][j - 1].GetStan() == 1)
        ++licznik;
    if (tab[i + 1][j - 1].GetStan() == 1)
        ++licznik;
    if (tab[i - 1][j + 1].GetStan() == 1)
        ++licznik;
    if (tab[i + 1][j + 1].GetStan() == 1)
        ++licznik;

    return licznik;
}

Siatka::Siatka(int szer, int wys)
{
    this->szer = szer;
    this->wys = wys;
    tab = new Komorka * [szer];

    for (int i = 0; i < szer; i++)
    {
        tab[i] = new Komorka[wys];
    }

    for (int i = 1; i < szer - 1; ++i) {
        for (int j = 1; j < wys - 1; ++j) {
            tab[i][j].GetStan()=rand()%2;
        }
    }
}

Siatka::Siatka(const Siatka& s)
{
    this->szer = s.szer;
    this->wys = s.wys;
    tab = new Komorka * [szer];

    for (int i = 0; i < szer; i++)
    {
        tab[i] = new Komorka[wys];
    }

    for (int i = 1; i < szer - 1; ++i) {
        for (int j = 1; j < wys - 1; ++j) {
            tab[i][j].GetStan()= s.tab[i][j].GetStan();
        }
    }

}

Siatka::~Siatka()
{
    for (int j = 0; j < szer; j++)
    {
        delete[] tab[j];
    }
 
    delete[] tab;
}

ostream& operator<<(ostream& os, const Siatka& s)
{
    for (int i = 0; i < s.szer; ++i) {
        for (int j = 0; j < s.wys; ++j) {
            os << s.tab[i][j];
        }
        os << endl;
    }
    return os;
}
