#include"plansza.h"

inline Plansza::Plansza(int szer, int wys)
{
	this->szer = szer;
	this->wys = wys;

    this->tab = new Obiekt **[szer];

    for (int i = 0; i < szer; i++) {
        tab[i] = new Obiekt * [wys];
        for (int j = 0; j < wys; j++) {
            tab[i][j] = nullptr;
        }
    }
}

void Plansza::wstaw(int i, int j, Typ t) {
    if (tab[i][j] != nullptr) {
        delete tab[i][j];
        tab[i][j] = nullptr;
    }
    
    switch (t)
    {
    case Typ::A:
        tab[i][j] = new A;
    case Typ::B:
        tab[i][j] = new B;
    case Typ::C:
        tab[i][j] = new C;
    case Typ::D:
        tab[i][j] = new D;
    default:
        break;
    }
}

ostream& operator<<(ostream& os, const Plansza& p)
{
    for (int i = 0; i < p.szer; i++) {
        for (int j = 0; j < p.wys; j++) {
            if (p.tab[i][j] != nullptr) p.tab[i][j]->print();
            else
                os << '.';

        }
        cout << endl;
    }
    cout << endl;
    return os;
}


Plansza::~Plansza()
{
    for (int i = 0; i < szer; i++) {
        for (int j = 0; j < wys; j++) {
            if (tab[i][j] != nullptr) delete[]tab;

        }
        cout << endl;
    }
    cout << endl;
}



