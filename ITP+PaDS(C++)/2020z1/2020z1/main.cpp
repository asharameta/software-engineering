#include<iostream>
#include"Header.h"
using namespace std;

int main()
{
	sznur sz;

	/*for (int i : {1, 3, 6, 1, 3, 7, 2, 6, 3, 1, 1})
		sz.wstaw(i);*/

	
	for (int i : {9, 8, 7, 6, 5, 4, 3, 2, 1, 0, -1})
		sz.wstaw(i);
	//
	sz.wypisz();
	//

	//int K;
	//cout << "Podaj K" << endl;
	//cin >> K;
	//sz.usun(K);
	////
	//sz.wypisz();
	sz.przenies();
	sz.wypisz();
	return 0;
}