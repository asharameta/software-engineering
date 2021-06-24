#include"Samochod.h"

Samochod::Samochod(string ma, string mo, bool czy) : marka(ma),model(mo),czyKierownicaZPrawej(czy) {}

Samochod::~Samochod()
{
	cout << "Ususwany obiekt: " << marka << endl;
}

void Samochod::wypisz() const
{
	cout << marka+" " << model+" " << (czyKierownicaZPrawej?"Z prawej":"Z lewej") << endl;
}
