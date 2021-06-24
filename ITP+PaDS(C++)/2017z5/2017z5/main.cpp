#include<iostream>
using namespace std;
#include"Source.h"


int main()
{
	sznur sz;

	for (int i : {1, 5, 6, 1, 3, 7, 2, 7, 3, 1, 3, 1})
		sz.wstaw(i);

	/*for (int i : { 9, 9, 9, 6, 6, 6, 5, 5})
		sz.wstaw(i);*/

	/*for (int i : { 5, 5, 5, 5, 4, 4, 4, 2, 1})
		sz.wstaw(i);*/

	//
	sz.wypisz();

	sz.usun();

	sz.wypisz();
	return 0;
}