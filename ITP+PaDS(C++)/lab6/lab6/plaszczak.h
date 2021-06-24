#ifndef plaszczak_H
#define plaszczak_H

#include<iostream>
using namespace std;

class Plaszczak
{
	string imie;
	int pozX;
	int pozY;
	char wyglad;
public:
	Plaszczak(string i="Anonim",char w='?') :imie(i), pozX(1), pozY(1), wyglad(w) {}
	virtual ~Plaszczak() {}
	friend ostream& operator<<(ostream& os, const Plaszczak& p) { os << p.wyglad; return os; }
	int& getPozX() { return pozX; }
	int& getPozY() { return pozY; }
};





#endif // !plaszczak_H
