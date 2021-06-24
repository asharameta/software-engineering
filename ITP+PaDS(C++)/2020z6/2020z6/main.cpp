#include<iostream>
#include"Source.h"
using namespace std;


int main()
{
	Sznur sz;
	////4, 7, 5, 1, 6, 6, 1, 7, 7, 3, 2, 1, 2,
	//sz.wstaw(4);
	//sz.wstaw(7);
	//sz.wstaw(5);
	//sz.wstaw(1);
	//sz.wstaw(6);
	//sz.wstaw(6);
	//sz.wstaw(1);
	//sz.wstaw(7);
	//sz.wstaw(7);
	//sz.wstaw(3);
	//sz.wstaw(2);
	//sz.wstaw(1);
	//sz.wstaw(2);
	//sz.wstaw(3);
	//sz.wstaw(1);
	

	////9, 9, 9, 4, 4, 4, 4, 5, 4, 7, 7, 1, 1, 2
	//sz.wstaw(9);
	//sz.wstaw(9);
	//sz.wstaw(9);
	//sz.wstaw(4);
	//sz.wstaw(4);
	//sz.wstaw(4);
	//sz.wstaw(4);
	//sz.wstaw(5);
	//sz.wstaw(4);
	//sz.wstaw(7);
	//sz.wstaw(7);
	//sz.wstaw(1);
	//sz.wstaw(1);
	//sz.wstaw(2);

	////1, 2, 6, 3, 4
	//sz.wstaw(1);
	//sz.wstaw(2);
	//sz.wstaw(6);
	//sz.wstaw(3);
	//sz.wstaw(4);
	
	sz.wypisz();
	//
	int M=2, N=3;
	//cout << "Podaj M: "; cin >> M;
	//cout << "Podaj N: "; cin >> N;
	sz.usun(M,N);
	//
	sz.wypisz();
	return 0;
}