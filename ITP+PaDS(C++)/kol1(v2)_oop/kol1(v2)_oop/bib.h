#ifndef bib_H
#define bib_H

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class ksiazka
{
public:
	ksiazka(string atr, string nzw) : autor(atr), nazwa(nzw) {};
	virtual ~ksiazka() { };
	virtual string wypisz() = 0;
	string getA() { return autor; }
	string getN() { return nazwa; }

private:
	string autor;
	string nazwa;
};

class satyra:public ksiazka
{
public:
	satyra(string atr, string nzw) :ksiazka(atr, nzw) {};
	string wypisz() { return "satyra"; }
};

class utopie:public ksiazka
{
public:
	utopie(string atr, string nzw) : ksiazka(atr, nzw) {};
	string wypisz() { return "utopie"; }
};


class czytelnik
{
	string imie;
	string nazwisko;
	int nr;
	vector<ksiazka*>czytel;
public:
	czytelnik(int n, string im, string nz) : imie(im), nr(n), nazwisko(nz) {};
	~czytelnik() { clear(); };
	void push(ksiazka&);
	void clear();
	//void zwroc();
	void wypisz();
	friend czytelnik operator+(czytelnik&cz, ksiazka& k);
	//czytelnik(const czytelnik& c);

};

#endif // !bib_H

