#include"pochodna.h"


A::A(int w, bool p)
{
	wsk = new int[w];
}

A::A(const A& a)
{
	this->wsk = new int(*a.wsk);
	this->p = a.p;
}

A::~A()
{
	delete wsk;
}

A& A::operator=(const A& a)
{
	if (this == &a) return *this;
	delete wsk;
	wsk = new int(*a.wsk);
	p = a.p;
	return *this;
}

void A::print() const
{
	cout << "[" << *wsk << "," << boolalpha << p << "]" << endl;
}