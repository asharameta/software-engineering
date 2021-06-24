#include"bib.h"



int main()
{
	satyra s("ktos", "Zona modna");
	utopie u("Morus", "Utopie");
	czytelnik cz(13, "Aliaksei", "Sharameta");
	satyra s2("ja", "ty");
	cz.push(s);
	cz.push(u);
	cz.push(s2);
	cz.wypisz();
	cout << endl;
	return 0;
}