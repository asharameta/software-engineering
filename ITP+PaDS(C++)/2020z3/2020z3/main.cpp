#include<iostream>
#include"Source.h"
using namespace std;


int main()
{
	Sznur sz;
	for (int i : { 1, 5, 6, 1, 3, 7, 2, 7, 3, 1, 3, 1})
	{
		sz.wstaw(i);
	}

	//////9, 9, 8, 7, 6, 5, 5
	//for (int i : { 9, 9, 8, 7, 6, 5, 5})
	//{
	//	sz.wstaw(i);
	//}

	////// 9,7,6,5,4,4,4,2,1
	//for (int i : {9, 7, 6, 5, 4, 4, 4, 2, 1})
	//{
	//	sz.wstaw(i);
	//}

	/*for (int i : {9,8,7,6,5,4,3,2,1,0,-1})
	{
		sz.wstaw(i);
	}*/
	cout << "Sznur: " << endl;
	sz.wypisz();

	int K;
	cout << "Podaj K: "; cin >> K;
	sz.usunPlus(K);

	/*sz.przeniesParzyste();*/

	sz.wypisz();

	return 0;
}