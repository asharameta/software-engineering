#include"pociag.h"

void Pociag::clear()
{
	MyVec.clear();
}

void Pociag::push(Wagon& w)
{
	MyVec.push_back(&w);
}

void Pociag::print()
{
	for (unsigned i = 0; i < MyVec.size(); i++)
	{
		cout << "["; MyVec[i]->Wypisz(); cout << "]<->";
	}
}

void Pociag::usun(int A)
{
	MyVec.erase(MyVec.begin() + A, MyVec.begin() + A+1);
}

Pociag operator+(Pociag& p, Wagon& w)
{
	p.push(w);
	return p;
}
