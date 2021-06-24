////Wylosuj w programie tablicę n elementową.
////Następnie, skopiuj do nowej tablicy tylko elementy o wartościach parzystych z wylosowanej tablicy n elementowej.
////W programie skorzystaj z funkcji z odpowiednimi parametrami.
////Warunek do funkcji należy przekazać w parametrze.
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#include <stdbool.h>
//
//void wypisz(const int* tab, int n);
//void wypisz2(const int* tab, int n);
//int* kopia(int* tab, int n);
//void losuj(int* tab, int n, int p, int q);
//bool czy_parzysta(int);
//int temp = 0;
//
//int main()
//{
//	printf("Podaj liczbe elementow: ");
//	int size;
//	if (scanf_s("%d", &size) != 1 || size <= 0)
//	{
//		puts("\nBledna liczba elementow");
//		return 1;
//	}
//	int* arr = (int*)malloc(size * sizeof(int));
//	srand(time(NULL));
//	losuj(arr, size, -10, 10);
//	printf("\nWylosowana tablica:\n");
//	wypisz(arr, size);
//	int* arr2 = kopia(arr, size);
//	puts("\nKopia tabicy");
//	wypisz2(arr2, size);
//	free(arr2);
//	free(arr);
//	return 0;
//}
//
//void wypisz(const int* tab, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d\t", tab[i]);
//	}
//}
//
//void wypisz2(const int* tab, int n)
//{
//	for (int i = 0; i < temp; i++)
//	{
//		printf("%d\t", tab[i]);
//	}
//}
//
//void losuj(int* tab, int n, int p, int q)
//{
//	int wartosc = q - p + 1;
//	for (int i = 0; i < n; ++i)
//	{
//		tab[i] = rand() % wartosc + p;
//	}
//}
//
//
//int * kopia(int* tab, int n)
//{
//	temp = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (czy_parzysta(tab[i]) == true)
//		{
//			temp++;
//		}
//	}
//	int* tab2 = (int*)malloc(temp * sizeof(int));
//	if (kopia == NULL) {
//		return NULL;
//	}
//		for (int i = 0; i < temp; ++i)
//		{
//				tab2[i] = rand() % -20 + 10;
//		}
//	return tab2;
//	return temp;
//}
//
//
//bool czy_parzysta(int x)
//{
//	if (x % 2 == 0) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
