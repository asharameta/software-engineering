#include<iostream>
#include"Source.h"
using namespace std;


int main()
{
	sznur sz;

	for (int i : {3, 6, 6, 4, 7, 5, 7, 3, 2, 9, 7, 7, 4, 2})
		sz.wstaw(i);

	//
	sz.wypisz();
	//
	/*unsigned M;
	float sr = 0;
	cout << "Podaj M: "; cin >> M;
	sz.usun(M, sr);*/

	sz.przeniesTrojki();
	//
	sz.wypisz();


	return 0;
}