#include <iostream>
#include "Figura.h"

using namespace std;

int main()
{
	Punkt p1("A", 1, 2);
	Punkt p2("B", 3, 2);
	Odcinek q("AB", p1, p2);
	Zbior z;
	z.push(p1);
	z.push(p2);
	z.push(q);
	z.push(p2);
	z.usun();
	z.print();
	//Zbior zz = z.tylkopunkty();
	//cout << endl << endl;
	//zz.print();

}
