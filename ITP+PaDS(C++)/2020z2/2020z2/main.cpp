#include<iostream>
using namespace std;
#include"Source.h"


int main()
{
	Sznur sz;
	/*sz.wstaw(1);
	sz.wstaw(3);
	sz.wstaw(6);
	sz.wstaw(1);
	sz.wstaw(3);
	sz.wstaw(9);
	sz.wstaw(3);
	sz.wstaw(6);
	sz.wstaw(3);
	sz.wstaw(1);
	sz.wstaw(1);*/
	/*sz.wstaw(8);
	sz.wstaw(7);
	sz.wstaw(6);
	sz.wstaw(5);
	sz.wstaw(3);
	sz.wstaw(2);
	sz.wstaw(2);
	sz.wstaw(1);*/
	/*sz.wstaw(7);
	sz.wstaw(6);
	sz.wstaw(5);
	sz.wstaw(5);
	sz.wstaw(4);
	sz.wstaw(4);
	sz.wstaw(3);
	sz.wstaw(2);
	sz.wstaw(1);*/

	for (int i : {9, 9, 9, 8, 8, 6, 6, 6, 6, 5, 5, 5, 5, 2, 2, 1, 1})
		sz.wstaw(i);

	cout << "Sznur: " << endl;
	sz.wypisz();
	//
	cout << endl;
	sz.przenies();
	cout << "przenies: " << endl;
	sz.wypisz();
	return 0;
}