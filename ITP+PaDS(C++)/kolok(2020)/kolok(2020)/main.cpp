#include<iostream>
#include"Head.h"
using namespace std;

int main()
{
	sznur sz;

	sz.wstaw(4);
	sz.wstaw(7);
	sz.wstaw(5);
	sz.wstaw(1);
	sz.wstaw(6);
	sz.wstaw(6);
	sz.wstaw(1);
	sz.wstaw(7);
	sz.wstaw(7);
	sz.wstaw(3);
	sz.wstaw(2);
	sz.wstaw(1);
	sz.wstaw(2);
	sz.wstaw(3);
	sz.wstaw(1);

	//sz.wstaw(1);
	//sz.wstaw(1);
	//sz.wstaw(1);
	//sz.wstaw(1);
	//sz.wstaw(1);
	/*int N;
	for (int i = 0; ; i++)
	{
		cout << "Poday liczby do sznura.   0 konczy." << endl;
		cin >> N;
		if (N==0) { break; }
		sz.wstaw(N);
	}*/
	//
	sz.wypisz();
	//
	int P;
	cout << "Podaj P" << endl;
	cin >> P;
	sz.usunFragmenty(P);
	//
	sz.wypisz();
	return 0;
}