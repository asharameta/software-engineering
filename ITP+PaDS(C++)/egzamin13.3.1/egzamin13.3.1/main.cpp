#include<iostream>
#include"dane.h"
#include"sznur.h"
#include<fstream>
using namespace std;


int main()
{
	const int M = 2;
	string pesele = { "pesele.txt" };
	string osoby = { "osoby.txt" };
	ifstream peseleFIN(pesele);
	ifstream osobyFIN(osoby);
	if (!peseleFIN || !osobyFIN)
	{
		cout << "Nie udalo sie otwarcie pliku/ow" << endl;
		peseleFIN.close();
		osobyFIN.close();
		return 1;
	}
	sznur<info> sz[M];
	while (!osobyFIN.eof())
	{
		string _name;
		
	}
	osobyFIN.close();
	peseleFIN.close();
	return 0;
}