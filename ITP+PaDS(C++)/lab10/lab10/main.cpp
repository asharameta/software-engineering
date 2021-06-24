#include"stackTP.h"

class Obiekt
{
	int o;
public:
	Obiekt(int o=0) : o(o) {}
	friend ostream& operator<<(ostream& os, const Obiekt& ob)
	{
		os << ob.o <<" ";
		return os;
	}
};


int main()
{
	StackTP<char>znaki;
	StackTP<bool> bity;
	StackTP<Obiekt> obiekty;

	znaki + 'a';
	znaki + 'b';
	znaki + 'c';
	znaki + 'd';

	bity + true + false;

	obiekty + Obiekt(2) + Obiekt(-1) + Obiekt();
	cout << "------------------" << endl;
	cout << --znaki << endl;
	cout << --bity << endl;
	cout << --obiekty << endl;
	cout << "------------------" << endl;

	znaki.print();
	bity.print();
	obiekty.print();
	return 0;
}