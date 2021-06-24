#include"obiekt.h"
#include"plansza.h"


int main()
{
	Plansza p(10, 10);
	cout << p << endl << endl;
	p.wstaw(0, 0, Typ::A);
	p.wstaw(5, 5, Typ::B);
	p.wstaw(3, 8, Typ::C);
	p.wstaw(1, 9, Typ::D);
	return 0;
}