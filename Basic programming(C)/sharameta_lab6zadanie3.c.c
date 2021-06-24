//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//void wypisz(const int* tab, int n);
//void losuj(int* tab, int n, int p, int q);
//int* kopia(int* start, int*start2, int size,int size2);
//int rozmiar;
//
//int main()
//{
//	printf("Podaj liczbe elementow 1 tablicy: ");
//	int size,size2;
//	if (scanf_s("%d", &size) != 1 || size <= 0)
//	{
//		puts("\nBledna liczba elementow");
//		return 1;
//	}
//	printf("Podaj liczbe elementow 2 tablicy: ");
//	if (scanf_s("%d", &size2) != 1 || size2 <= 0)
//	{
//		puts("\nBledna liczba elementow");
//		return 1;
//	}
//	int* arr = (int*)malloc(size * sizeof(int));
//	int* arr2 = (int*)malloc(size2 * sizeof(int));
//	srand(time(NULL));
//	losuj(arr, size, -10, 10);
//	printf("\nWylosowana 1 tablica:\n");
//	wypisz(arr, size);
//	losuj(arr2, size2, -10, 10);
//	printf("\nWylosowana 2 tablica:\n");
//	wypisz(arr2, size2);
//	int* arr3 = kopia(arr, arr2,size,size2);
//	puts("\nKopia tabicy");
//	wypisz(arr3, rozmiar);
//
//	free(arr);
//	free(arr2);
//	free(arr3);
//	return 0;
//}
//
//
//void wypisz(const int* tab, int n)
//{
//	for (int i = 0; i < n; i++)
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
//int* kopia(int* start, int*start2, int size, int size2)
//{
//	rozmiar = size+size2;
//	int* kopia = (int*)malloc(rozmiar * sizeof(int));
//	if (kopia == NULL)
//		return NULL;
//	for (int i = 0; i < size; i++)
//	{
//		kopia[i] = start[i];
//	}
//	for (int i = size,j=0; i < rozmiar; i++)
//	{
//		kopia[i] = start2[j];
//		j++;
//	}
//	return kopia;
//}
