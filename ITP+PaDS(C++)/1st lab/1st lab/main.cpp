#include"Samochod.h"


int main()
{
	Samochod S1("BMW", "M5", true);
	Samochod S2("Kia","Rio");

	{
		Samochod s("Fiat", "126p");
	}

	Samochod S3("Suzuki");
	Samochod S4;
	Samochod tab[10];
	S1.wypisz();
	S2.wypisz();
	S3.wypisz();
	S4.wypisz();

	//obiekty twotzone w sposon dynamiczny
	Samochod* wsk1=new Samochod("BMW","Z4",true);
	wsk1->wypisz();
	cout << "wsk1: " << wsk1 << endl;
	delete wsk1;

	//tablica dynamiczna obiektow automatychnych
	int x = 5;
	Samochod* tab2 = new Samochod[x];
	delete[]tab2;

	//tablica dynamiczna obiektow tworzonych dynamicznie

	Samochod** tab3 = new Samochod*[x];
	tab3[0] = new Samochod;
	tab3[1] = new Samochod("Volvo");
	tab3[2] = new Samochod("Audi");
	tab3[3] = new Samochod("Lada");
	tab3[4] = new Samochod("Skoda");

	for (unsigned i = 0; i < x; i++)
	{
		tab3[i]->wypisz();
	}
	delete[] tab3;


	return 0;
}