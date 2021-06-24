#ifndef POCIAG_H
#define POCIAG_H

#include<iostream>
using namespace std;
#include<string>
#include<vector>

class Zwierzeta
{
	string nazwa;
public:
	Zwierzeta()=default;
	virtual ~Zwierzeta() {};
	virtual string Wypisz() = 0;
	void setN(string n) { nazwa = n; }
	string getN() { return nazwa; }

};

class Zyrafy :public Zwierzeta
{
public:
	string Wypisz(){ return "zyrafy"; }
	Zyrafy() = default;
	virtual ~Zyrafy() {}
};

class Slonie :public Zwierzeta
{
public:
	string Wypisz() { return "slonie"; }
	Slonie() = default;
	virtual ~Slonie() {}
};

class Lwy :public Zwierzeta
{
public:
	string Wypisz() { return "lwy"; }
	Lwy() = default;
	virtual ~Lwy() {}
};

class Malpy :public Zwierzeta
{
public:
	string Wypisz() { return "Malpy"; }
	Malpy() = default;
	virtual ~Malpy() {}
};

class Wagon
{
	int ilosc;
	string gatunek;
public:
	Wagon(int i, string g) :ilosc(i),gatunek(g) {};
	~Wagon() {};
	int getIlosc() { return ilosc; }
	string getGatunek() { return gatunek; }

	void Wypisz() { cout << gatunek << "," << ilosc; }
	

};

class Pociag
{
	vector<Wagon*>MyVec;
public:
	Pociag()=default;
	void clear();
	~Pociag() { clear(); };
	void push(Wagon& w);
	void print();
	void usun(int A);
	friend Pociag operator+(Pociag& p, Wagon& w);
	friend ostream& operator<<(ostream& os, Pociag& p)
	{
		auto iter = p.MyVec.begin();
		int i = 0;
		while (iter != p.MyVec.end())
		{
			iter[i]->Wypisz();
			i++;
		}
		return os;
 	}

private:

};


#endif // !POCIAG_H

