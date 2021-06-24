#include<iostream>
#include"kol.h"
using namespace std;

int main()
{
	sznur sz;

	/*for (int i : {10, 9, 9, 9, 8, 8, 7, 5, 5, 3, 2, 1})
		sz.wstaw(i);*/
	for (int i : {7,6,6,6,3,1,1})
		sz.wstaw(i);
	//
	sz.wypisz();
	return 0;
}