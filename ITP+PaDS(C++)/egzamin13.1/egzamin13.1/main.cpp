#include<iostream>
#include<fstream>
#include"nip.h"
#include"sznur.h"
#include<sstream>
using namespace std;



int main()
{
	const int M = 3;
	string file = { "nipy.txt" };
	ifstream fin(file);
	if (!fin)
	{
		cout << "Nie udalo sie otwarcie pliku:(" << endl;
		fin.close();
		return 1;
	}
	sznur<NIP> sz[M];
	string n, podatnik;
	string msg;
	while (getline(fin,msg))
	{
		string urzad;
		n=msg.substr(0, msg.find(' '));
		podatnik = msg.substr(n.size(), msg.find('\n'));
		if (n.size() < 10)
		{
			n = {" "+n };
		}
		NIP nip;
		try
		{
			nip.setNip(n);
			nip.setPodatnik(podatnik);
			nip.setUrzad(n);
			sz->wstaw(nip);
		}
		catch (const std::exception& e)
		{
			cout << e.what() << endl;
		}
		//cout << nip.getNip()+' '<< nip.getPodatnik() << endl;
	}
	fin.close();


	string pliki[M]{ "piotrkow.txt", "radomsko.txt","tomaszow.txt" };
		//ofstream fout(pliki[i]);
		while (sz->Size()>0)
		{
			NIP n = sz->pop();
			if (n.getUrzad()=="771")
			{
				ofstream fout(pliki[0], ios::app);
				fout << n.getNip()+' ' << n.getPodatnik() << endl;
				fout.close();
			}
			else if (n.getUrzad() == "772")
			{
				ofstream fout(pliki[1], ios::app);
				fout << n.getNip()+' ' << n.getPodatnik() << endl;
				fout.close();
			}
			else if (n.getUrzad() == "773")
			{
				ofstream fout(pliki[2], ios::app);
				fout << n.getNip()+' ' << n.getPodatnik() << endl;
				fout.close();
			}
			if (n.getUrzad()!="771" && n.getUrzad() != "772" && n.getUrzad() != "773")
			{
				cout << "Nip: " << n.getNip() + ' ' <<"Jest nipoprawny. | Uzytkownik:"<<n.getPodatnik() << endl;
			}
		}
		//fout.close();


	return 0;
}