#include<iostream>
#include<fstream>
#include"iban.h"
#include"SList.h"
using namespace std;


int main()
{
	const int M = 3;
	string banks[M] = { "1020","1140","2490" };
	string filepath;
	cout << "Podaj nazwe pliku do odczytu: "; cin >> filepath;
	SortedList<IBAN> SL[M];

	ifstream fin(filepath);
	if (!fin)
	{
		cout << "Nie udalo sie otwarcie pliku:(" << endl;
		fin.close();
		return 1;
	}
	string msg;
	while (getline(fin,msg))
	{
		cout << "msg: " <<msg<< endl;
		IBAN iban;
		iban.setNumber(msg);
		for (unsigned i = 0; i < M; i++)
		{
			if (iban.getCode()==banks[i])
			{
				SL[i].wstaw(iban);
				break;
			}
		}
	}
	fin.close();

	for (unsigned i = 0; i<M; i++)
	{
		if (SL[i].size()>0)
		{
			ofstream fout(banks[i] + ".txt");
			while (SL[i].size()>0)
			{
				IBAN iban = SL[i].pop();
				fout << iban.getNumber() << endl;
			}
			fout.close();
		}
	}


	return 0;
}