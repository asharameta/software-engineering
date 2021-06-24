#ifndef PLANSZA_H
#define PLANSZA_H

#include"Gra.h"

enum class Typ {Kolko, Krzyzyk};

class plansza
{
public:
	//plansza(int x=3, int y=3);
	plansza(int x, int y);
	virtual ~plansza();
	void wstaw(int i, int j, Typ T);
	void drukuj();
	void usun(int k,int l);

private:
	int X;
	int Y;
	Symbol*** tab;
};

plansza::plansza(int x, int y)
{
	this->X = x;
	this->Y = y;
	this->tab = new Symbol** [x];

	for (int i = 0; i < x; i++) {
		tab[i] = new Symbol * [y];
		for (int j = 0; j < y; j++) {
			tab[i][j] = nullptr;
		}
	}

}

inline plansza::~plansza()
{
	for (int i = 0; i < X; i++) {
		for (int j = 0; j < Y; j++) {
			if (tab[i][j] != nullptr) delete tab[i][j];

		}
		cout << endl;
	}
	cout << endl;
}

inline void plansza::wstaw(int i, int j, Typ T)
{
	if (tab[i][j] != nullptr)
	{
		delete tab[i][j];
		tab[i][j] = 0;
	}
	switch (T)
	{
	case Typ::Krzyzyk:
		tab[i][j] = new Krzyzyk;
		break;
	case Typ::Kolko:
		tab[i][j] = new Kolko;
		break;
	default:
		break;
	}
}

inline void plansza::drukuj()
{
	for (int i = 0; i < X; i++) {
		for (int j = 0; j < Y; j++) {
			if (tab[i][j] != nullptr) tab[i][j]->print();
			else
				cout << '.';

		}
		cout << endl;
	}
	cout << endl;
}

inline void plansza::usun(int k, int l)
{
	for (int i = 0; i < this->X; i++)
	{
		for (int j = 0; j < this->Y; j++)
		{
			if (this->tab[i][j] == tab[k][l])
			{
				delete tab[k][l];
				tab[i][j] = nullptr;			}
		}
	}
}

#endif // !PLANSZA_H

