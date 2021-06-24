#ifndef siatka_H
#define siatka_H

#include"komorka.h"

class Siatka
{
	int szer;
	int wys;
	Komorka** tab;
	int liczbaSasiadow(int i, int j);
public:
	Siatka(int sz = 5, int w = 5);
	Siatka(const Siatka& s);
	virtual ~Siatka();
	friend ostream& operator<<(ostream& os, const Siatka& s);
	Siatka operator=(const Siatka& s);
	void Cykl();

private:

};

#endif // !siatka_H

