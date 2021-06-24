#include<iostream>
using namespace std;

class Liczba
{
	int x;
public:
	Liczba(int x = 0) : x(x) {}
	virtual ~Liczba() {}
	void drukuj() const { cout << x; }
	Liczba operator+(Liczba& l) const { return Liczba(x + l.x); }
	Liczba operator+(int x) const { return this->x + x; }

};


int main()
{
	Liczba l1(8);
	Liczba l2(5);
	(l1 + l2).drukuj();
	cout << endl;
	(l1 + 4).drukuj();
	return 0;
}