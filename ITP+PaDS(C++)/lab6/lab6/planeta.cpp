#include"planeta.h"


Planeta::Planeta(int w, int s, char m, Plaszczak* wsk)
{
	szer = s;
	wys = w;
	mur = m;
	wskP = wsk;
}


ostream& operator<<(ostream& os, const Planeta& p)
{
	for (unsigned i = 0; i < p.wys; i++)
	{
		for (unsigned j = 0; j < p.szer; j++)
		{
			if (j == 0 || i == 0 || j == p.szer - 1 || i == p.wys - 1)
			{
				os << p.mur;
			}
			else if (j == p.wskP->getPozX() && i == p.wskP->getPozY())
			{
				os << *(p.wskP);
			}
			else
				os << " ";
		}
		os<< endl;
	}
	return os;
}