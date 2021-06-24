#include"kostki.h"


int main()
{
	kostka* k1 = new kostka(6);
	kostka* k2 = new KolorowaKostka("czerwona", 3);

	k1->losuj();
	k2->losuj();
	cout << endl;
	cout << "Liczba kosci: "; cout << kostka::getIle() << endl;
	delete k1;
	delete k2;
	cout << "Liczba kosci: "; cout << kostka::getIle() << endl;

	return 0;
}