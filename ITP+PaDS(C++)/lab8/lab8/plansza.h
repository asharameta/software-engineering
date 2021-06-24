#ifndef plansza_H
#define plansza_H
#include"obiekt.h"

enum class Typ { A, B, C, D };

class Plansza
{
	int szer;
	int wys;
	Obiekt*** tab;
public:
	Plansza(int szer=10, int wys=10);
	void wstaw(int i, int j, Typ T);
	friend ostream& operator<<(ostream& os, const Plansza& p);
	virtual ~Plansza();


};


#endif // !plansza_H
