#include<iostream>
using namespace std;
#include"Header.h"


int main() {

	Kolejka k;

	int a;
	while (true)
	{
		cout << "Podaj liczby do kolejki. 0 konczy" << endl; cin >> a;
		if (a == 0)break;
		k.dodaj(a);
		cout << "Kolejka po wstaweniu" << endl;
		k.wypisz(); cout << endl;
	}

	int L;
	int b;
	cout << "Podaj liczbe ktore chcesz zdjec" << endl; cin >> b;
	try {
		L = k.zdejmij(b);
		cout << "Udalo sie zdjec" << L << endl;
	}
	catch (...)
	{
		cout << "Nie udalo sie zdjec: Kolejka pusta!" << endl;
	}

	return 0;
}