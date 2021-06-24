#include<iostream>
using namespace std;
#include"Source.h"

int main()
{
	sznur sz;
	/*sz.wstaw(1);
	sz.wstaw(3);
	sz.wstaw(6);
	sz.wstaw(1);
	sz.wstaw(3);
	sz.wstaw(7);
	sz.wstaw(2);
	sz.wstaw(6);
	sz.wstaw(3);
	sz.wstaw(1);
	sz.wstaw(1);*/

	/*sz.wstaw(2);
	sz.wstaw(3);
	sz.wstaw(6);
	sz.wstaw(7);
	sz.wstaw(8);
	sz.wstaw(8);
	sz.wstaw(8);
	sz.wstaw(9);
	sz.wstaw(9);
	sz.wstaw(10);
	sz.wstaw(90);
	sz.wstaw(100);*/
	//1, 1, 2, 2, 5, 5, 5, 5, 6, 6, 6, 8, 8, 9, 9, 9
	sz.wstaw(1);
	sz.wstaw(1);
	sz.wstaw(2);
	sz.wstaw(2);
	sz.wstaw(5);
	sz.wstaw(5);
	sz.wstaw(5);
	sz.wstaw(5);
	sz.wstaw(6);
	sz.wstaw(6);
	sz.wstaw(6);
	sz.wstaw(8);
	sz.wstaw(8);
	sz.wstaw(9);
	sz.wstaw(9);
	sz.wstaw(9);


	//
	sz.wypisz();
	int K = 2;
	sz.przeniesZkroriem(K);
	//
	sz.wypisz();
	return 0;
}