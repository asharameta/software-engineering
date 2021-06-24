#ifndef U_H
#define U_H

#include<iostream>
using namespace std;

class Ulamek
{
	int l;
	int m;
public:
	explicit Ulamek(int l = 1, int m = 1) : l(l), m(m) {}
	virtual ~Ulamek();
	friend ostream& operator<<(ostream& os, const Ulamek& u);
	friend istream& operator>>(istream& is, Ulamek& u);
	Ulamek operator+(const Ulamek& ul) const;
	Ulamek operator-()const;
	Ulamek operator- (const Ulamek& u) const;
	Ulamek operator~() const;
};


#endif // !U_H


