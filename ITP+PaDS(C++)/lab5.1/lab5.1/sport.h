#ifndef S_H
#define S_H

#include<iostream>
using namespace std;

class Sportowiec
{
	static int ile;
	char* nazwisko;
	char* sport;
	float waga;
public:
	int size = 1;
	Sportowiec();
	Sportowiec(const char* n, const char* s, float w);
	~Sportowiec();
	Sportowiec(const Sportowiec& s);
	void setSportowiec(Sportowiec* s, const int ilosc);
	Sportowiec& operator=(const Sportowiec& s);
	static int getIle() { return ile; }
	friend ostream& operator<<(ostream& os, const Sportowiec& s);
	Sportowiec& operator[](int i) { Sportowiec sp; return sp[i]; }
	Sportowiec* AddStruct(Sportowiec* s, const int n);
	double getWaga() { return waga; }
	char* getNaz() { return nazwisko; }
	char* getSport() { return sport; }
	void usun(Sportowiec& s, int n);
	void print(int ilosc, Sportowiec& s);

};


#endif // !S_H