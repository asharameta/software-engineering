#include"ulamek.h"

ostream& operator<<(ostream& os, const Ulamek& u)
{
	if (u.m==1)
	{
		cout << u.l << endl;
	}
	else
	{
		cout << u.l << "/" << u.m << endl;
	}
	return os;
}

istream& operator>>(istream& is, Ulamek& u)
{
	cout << "Licznik: "; is >> u.l;
	cout << "Mianownik: "; is >> u.m;
	return is;
}

Ulamek::~Ulamek()
{
	cout << "konstruktor deleted!" << endl;
}

Ulamek Ulamek::operator-(const Ulamek& u) const
{
	return *this + (-u);
}

Ulamek Ulamek::operator~() const
{
	return Ulamek(m, l);
}


