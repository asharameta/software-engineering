#include<iostream>
using namespace std;

int main() {
	double obwod_okien, wysokosc_okna, szerokosc_okna, obwod_drzwi, wysokosc_drzwi, szerokosc_drzwi, ilosc_okien, ilosc_drzwi;
	double dwa_okna, dwe_drzwi;
	cout << "ilosc_okien = ";
	cin >> ilosc_okien;
	cin >> wysokosc_okna;
	cin >> szerokosc_okna;
	cout << "ilosc_drzwi = ";
	cin >> ilosc_drzwi;
	cin >> wysokosc_drzwi;
	cin >> szerokosc_drzwi;
	cout << "======================================" << endl;
	obwod_okien = (wysokosc_okna + szerokosc_okna) * 2;
	if (ilosc_okien == 2)
	{
		dwa_okna = obwod_okien * 2;
		cout << "okno" << dwa_okna << endl;
	}
	else if (ilosc_okien == 1)
	{
		obwod_okien;
		cout << "okno" << obwod_okien << endl;
	}

	obwod_drzwi = (wysokosc_drzwi + szerokosc_drzwi) * 2;
	if (ilosc_drzwi == 2)
	{
		dwe_drzwi = obwod_drzwi * 2;
		cout << "drzwi" << dwe_drzwi << endl;
	}
	else if (ilosc_drzwi == 1)
	{
		obwod_drzwi;
		cout << "drzwi" << obwod_drzwi << endl;
	}
}