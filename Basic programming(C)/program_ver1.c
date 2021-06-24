//Wylosuj w programie tablicę n elementową.
//Następnie, skopiuj do nowej tablicy tylko elementy o wartościach parzystych z wylosowanej tablicy n elementowej.
//W programie skorzystaj z funkcji z odpowiednimi parametrami.
//Warunek do funkcji należy przekazać w parametrze.


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void wypisz(const int* start, int rozmiar);
int* kopia(int* start, int rozmiar);
void losuj(int* start, int rozmiar, int p, int q);

int main()
{
	printf("Podaj liczbe elementow: ");
	int size;
	if (scanf("%d", &n) != 1 || n <= 0)
	{
		uts("\nBledna liczba elementow");
		return 1;
	}
	int* arr = (int*)malloc(n * sizeof(int));
	rand(time(NULL));
	losuj(arr, size, -10, 10);
	printf("\nWylosowana tablica:\n");
	wypisz(arr, size);
	int* arr2 = kopia(arr, size);
	puts("\nKopia tabicy");
	wypisz(arr2, size);
	free(arr2);
	free(arr);
	return 0;
}

void wypisz(const int* start, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d\t", start[i]);
	}
}

void losuj(int* start, int rozmiar, int p, int q)
{
	int wartosc = q - p + 1;
	for (int i = 0; i < rozmiar; ++i)
	{
		start[i] = rand() % wartosc + p;
	}
}


int* kopia(int* start, int rozmiar)
{
	int* kopia = (int*)malloc(rozmiar * sizeof(int));
	if (kopia == NULL) {
		return NULL;
	}
	for (int i = 0; i < rozmiar; ++i) {
		kopia[i] = start[i];
	}
	return kopia;
}
