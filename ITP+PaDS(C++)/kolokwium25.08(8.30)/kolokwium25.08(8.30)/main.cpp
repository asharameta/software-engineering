#include<iostream>
using namespace std;
#include"Source.h"


int main()
{
	sznur sz;

	/*for (int i : {5, 4, 3, 3, 8, 1, 8, 4, 1, -1, 0, 1, 3, 9})
		sz.wstaw(i);*/
	/*for (int i : {3,3,3,6,6,6,9,3,9})
		sz.wstaw(i);*/
		/*for (int i : {0,0,1,5,5,-1,-2,-3,3,7})
			sz.wstaw(i);*/
			/*for (int i : {-5, -4, 3, -3, 8, -1, -8})
				sz.wstaw(i);*/
				///
	for (int i : {3, 3, 3, 4, 7, 4, 4, 5, 5, 5, 1, 2})
		sz.wstaw(i);
	sz.wypisz();
	//
	int K=3;
	sz.usun(K);
	//
	sz.wypisz();

	return 0;
}