#include"Gra.h"
#include"Plansza.h"



int main()
{
	plansza P(3,5);
	P.wstaw(0, 0, Typ::Kolko);
	P.wstaw(1, 1, Typ::Krzyzyk);
	P.wstaw(2, 0, Typ::Kolko);
	P.drukuj();
	P.usun(0, 0);
	P.drukuj();
	return 0;
}