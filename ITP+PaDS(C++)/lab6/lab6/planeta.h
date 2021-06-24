#ifndef planeta_H
#define planeta_H

#include"plaszczak.h"

class Planeta
{
	int wys;
	int szer;
	char mur;
	Plaszczak* wskP;
public:
	Planeta(int w, int s, char m, Plaszczak* wsk);
	virtual ~Planeta() {}
	friend ostream& operator<<(ostream& os, const Planeta& p);
	void ruchGora() { --(wskP->getPozY()); }
	void ruchDol(){ ++(wskP->getPozY()); }
	void ruchLewo(){ --(wskP->getPozX()); }
	void ruchPrawo(){ ++(wskP->getPozX()); }
};



#endif // !planeta_H

