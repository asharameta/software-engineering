#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
class ciag
{
	int n;
	int min;
	int max;
	int* tab;
	
public:
	ciag();
	ciag(int n, int mn, int mx);
	ciag(const ciag& c);
	virtual ~ciag();
	ciag& operator++();
	ciag operator++(int);
	ciag& operator=(const ciag& c);
	friend ostream& operator<<(ostream& os, const ciag& cg);
	int& operator[](int i){ return tab[i]; }
};

ostream& operator<<(ostream& os, const ciag& cg)
{
	os << "(";

	for (unsigned i = 0; i < cg.n; i++)
	{
		os << cg.tab[i] << " ";
	}
	os << ")";
	return os;
}



ciag::ciag()
{
	n = 0;
	min = 0;
	max = 0;
	tab = nullptr;
}
//konstruktor kopujacy
ciag::ciag(const ciag& c)
{
	this->n = c.n;
	this->min = c.min;
	this->max = c.max;
	if (!c.tab)
	{
		this->tab = nullptr;
	}
	else
	{
		tab = new int[n];
	}
	for (unsigned i = 0; i < n; i++)
	{
		tab[i] = c.tab[i];
		//cout << tab[i] << " ";
	}
}


ciag::ciag(int n1, int mn, int mx)
{
	this->n = n1;
	this->min = mn;
	this->max = mx;
	tab = new int[n];
	for (unsigned i = 0; i < n; i++)
	{
		tab[i]= rand() % (max - min + 1) + min;
		cout << tab[i] <<" ";
	}
	cout << endl;
}

ciag::~ciag()
{
	if (tab)
	{
		delete[]tab;
		tab = nullptr;
	}
	cout << "ciag zniszczony!" << endl;
}

ciag& ciag::operator++()
{
	++n;
	int* arr = new int[n];

	for (unsigned i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			tab[i] = rand() % (max - min + 1) + min;
		}
		else
		{
			arr[i] = tab[i];
		}
	}
	delete[]tab;
	tab = arr;
	return*this;
}

ciag ciag::operator++(int)
{
	ciag kopia = *this; //uwaga! kopia plytka
	++(*this);
	return kopia;
}

ciag& ciag::operator=(const ciag& c)
{
	if (this == &c) return* this;

	if (tab)
	{
		delete[]tab;
		tab = nullptr;
	}

	this->n = c.n;
	this->min = c.min;
	this->max = c.max;
	if (!c.tab)
	{
		this->tab = nullptr;
	}
	else
	{
		tab = new int[n];
		for (unsigned i = 0; i < n; i++)
		{
			tab[i] = c.tab[i];
			//cout << tab[i] << " ";
		}
	}
	return *this;
}



int main()
{
	srand(time(NULL));
	ciag T1;
	ciag T2(6, 1, 5);
	cout << T1 << endl << T2 << endl;
	T2[2] = 100;
	//cout << T2 << endl;
	//cout << "++T1" << ++T1 << endl;
	//cout << "++T2" << ++T2 << endl;
	//cout << "T1= " << T1 << endl;
	//cout << "T2= " << T2 << endl;

	T1 = T2;
	cout << endl;
	cout << "T1= " << T1 << endl;
	cout <<"T2= "<< T2 << endl;

	return 0;
}
