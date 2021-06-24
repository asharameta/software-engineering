#ifndef S_H
#define S_H

#include<iostream>
//#include<string>
using namespace std;

class Samochod
{
	string marka;
	string model;
	bool czyKierownicaZPrawej;
public:
	Samochod(string ma = "brak", string mo = "brak", bool czy = false);
	virtual ~Samochod();
	void wypisz() const;
};

#endif // !S_H

