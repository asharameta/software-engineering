#include"pociag.h"



int main()
{
	Lwy l;
	Malpy m;
	Slonie s;
	Zyrafy z;
	Wagon w1(5, l.Wypisz());
	Wagon w2(1, s.Wypisz());
	Wagon w3(3, z.Wypisz());
	Wagon w4(2, m.Wypisz());

	Pociag p1;
	p1.push(w1);
	p1.push(w3);
	p1.push(w2);
	p1.push(w4);
	p1.print();
	cout << endl;
	cout << "---------------------" << endl;
	p1.usun(0);
	p1.print();


	return 0;
}