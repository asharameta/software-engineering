#ifndef komorka_H
#define komorka_H

#include<iostream>
#include<ctime>
using namespace std;


class Komorka
{
	bool stan;
public:
	Komorka(bool s = false) : stan(s){}
	virtual ~Komorka()=default;
	bool& GetStan() { return stan; }
	friend ostream& operator<<(ostream& os, const Komorka& K) {
		os << (K.stan ? 'o' : '.');
		return os;
	}

};




#endif // !komorka_H
