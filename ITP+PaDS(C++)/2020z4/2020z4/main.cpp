#include<iostream>
#include"Source.h"
using namespace std;


int main()
{
	Sznur sz;

	/*sz.wstaw(1);
	sz.wstaw(5);
	sz.wstaw(6);
	sz.wstaw(1);
	sz.wstaw(3);
	sz.wstaw(7);
	sz.wstaw(2);
	sz.wstaw(7);
	sz.wstaw(3);
	sz.wstaw(1);
	sz.wstaw(3);
	sz.wstaw(1);*/
	/*sz.wstaw(9);
	sz.wstaw(9);
	sz.wstaw(8);
	sz.wstaw(7);
	sz.wstaw(6);
	sz.wstaw(5);
	sz.wstaw(5);*/
	//
	/*sz.wstaw(9);
	sz.wstaw(7);
	sz.wstaw(6);
	sz.wstaw(5);
	sz.wstaw(4);
	sz.wstaw(4);
	sz.wstaw(4);
	sz.wstaw(2);
	sz.wstaw(1);*/
	//
	sz.wypisz();
	//
	int S, K;
	cout << "Podaj wartosc S: "; cin >> S;
	cout << "Podaj wartosc K: "; cin >> K;
	sz.usunCiagi(S,K);
	//
	sz.wypisz();
	return 0;
}