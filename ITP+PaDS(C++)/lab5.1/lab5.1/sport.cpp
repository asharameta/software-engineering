#include"sport.h"
#include<cstring>
int Sportowiec::ile = 0;

Sportowiec::Sportowiec()
{
	ile++;
	nazwisko = new char[12];
	strcpy(nazwisko, "None");
	sport = new char[12];
	strcpy(sport, "None");
	waga = 0.0;
}

Sportowiec::~Sportowiec()
{
	delete[]nazwisko;
	delete[]sport;
	ile--;
}

Sportowiec::Sportowiec(const char* n, const char* s, float w)
{
	ile++;
	int nz = strlen(n);
	nazwisko = new char[nz + 1];
	strcpy(nazwisko, n);
	sport = new char[strlen(s) + 1];
	strcpy(sport, s);
	waga = w;

}


Sportowiec::Sportowiec(const Sportowiec& s)
{
	ile++;
	nazwisko = new char[strlen(s.nazwisko) + 1];
	strcpy(nazwisko, s.nazwisko);
	sport = new char[strlen(s.sport) + 1];
	strcpy(sport, s.sport);
	waga = s.waga;
}



inline Sportowiec& Sportowiec::operator=(const Sportowiec& s)
{
	if (this == &s) return *this;
	if (nazwisko)
		delete[]nazwisko;
	if (sport)
		delete[]sport;
	ile++;
	nazwisko = new char[strlen(s.nazwisko) + 1];
	strcpy(nazwisko, s.nazwisko);
	sport = new char[strlen(s.sport) + 1];
	strcpy(sport, s.sport);
	waga = s.waga;
	return *this;
}

Sportowiec* Sportowiec::AddStruct(Sportowiec* s, const int n)
{
	if (n == 0)
	{
		s = new Sportowiec[n + 1];
	}
	else
	{
		Sportowiec* tempS = new Sportowiec[n + 1];

		for (int i = 0; i < n; i++)
		{
			tempS[i] = s[i];
		}
		delete[] s;

		s = tempS;
		size++;
	}
	return s;
}


ostream& operator<<(ostream& os, const Sportowiec& s)
{
	cout << "------------------------\n";
	os << s.nazwisko << endl;
	os << s.sport << endl;
	os << s.waga << endl;
	cout << "------------------------\n";
	return os;
}

void Sportowiec::usun(Sportowiec& s, int n)
{
	delete[n]s.nazwisko;
	delete[n]s.sport;
	size--;
}

void Sportowiec::print(int ilosc, Sportowiec& s)
{
	for (int i = 0; i < ilosc; i++)
	{
		cout << size << ". " << endl;
		cout << "------------------------\n";
		cout << s[i].nazwisko << endl;
		cout << s[i].sport << endl;
		cout << s[i].waga << endl;
		cout << "------------------------\n";
	}
}

void Sportowiec::setSportowiec(Sportowiec* s, const int ilosc)
{
	cout << "Podaj nazwisko: ";
	cin >> s[ilosc].getNaz();
	cout << "Podaj sport: ";
	cin >> s[ilosc].getSport();
	cout << "Podaj wage: ";
	s[ilosc].getWaga();
	cout << endl;
}
