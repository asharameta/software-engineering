#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void wypisz(int tab[], int n);
void wczytaj(int tab[], int n);
void losuj(int tab[],int n,int p, int q);


int main()
{
	int printf(const char*, ...);
	int scanf(const char*, ...);
	srand(time(NULL));
	int size, jak,p,q;
	puts("Podaj rozmiar tablicy: "); scanf("%d", &size);
	if (size <= 0)
	{
		puts("Liczba nie powina byc ujemna!!!\nSprobuj ponownie.");
		return 1;
	}

	int* tab = (int*)malloc(size * sizeof(int));
	puts("W jaki sposub chcesz wypelnic tablice?\n1 - losowo\n2 - samodzielnie");
	scanf("%d", &jak);
	if (jak == 2) {
		wczytaj(tab, size);
		puts(" ");
	}
	else if (jak == 1) {
		printf("Podaj p: ");
		scanf("%d", &p);
		printf("Podaj q: ");
		scanf("%d", &q);
		losuj(tab, size,p,q);
		puts(" ");
	}
	else
	{
		puts("Bledna wartosc nalezy wpisac 1 albo 2");
	}
	puts("Twoja tablica: ");
	wypisz(tab, size);
}


void wczytaj(int tab[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("Podaj %d element tablicy: ", i + 1);
		scanf("%d", tab + i);
	}
}

void wypisz(int tab[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", tab[i]);
	}
}

void losuj(int tab[], int n, int p, int q)
{
	    if(p>q)
	    {
	        int temp=p;
	        p=q;
	        q=temp;
	    }
	    int war=q-p+1;

		for (int i = 0; i < n; i++)
		{
			tab[i] = rand()%war + p;
		}
}
