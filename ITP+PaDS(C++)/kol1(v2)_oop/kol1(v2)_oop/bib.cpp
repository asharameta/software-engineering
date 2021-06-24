#include"bib.h"

void czytelnik::push(ksiazka&k)
{
	czytel.push_back(&k);
}

void czytelnik::clear()
{
	czytel.clear();
}

void czytelnik::wypisz()
{
	cout << "Konto uzytkownika: " << imie << " " << nazwisko << "\t numer: " << nr << endl;
	cout << "Wyporzyczone ksiazki: " << endl;
	for (unsigned i = 0; i < czytel.size(); i++)
	{
		cout << "----------------------" << endl;
		cout<<"Autor: "<<czytel[i]->getA() << endl;
		cout <<"Nazwa: " << czytel[i]->getN() << endl;
		cout << "----------------------" << endl;
	}
}


czytelnik operator+(czytelnik& cz, ksiazka& k)
{
	cz.push(k);
	return cz;
}
