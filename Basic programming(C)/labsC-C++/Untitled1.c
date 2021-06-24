#include<stdio.h>
#include<stdlib.h>
#include<time.h>


struct Wektor
{
	int dlugosc;
	int p,q;
};
typedef struct Wektor Wektor;

void wypisz(Wektor *pod);
void wypiszDzialanie(int n);
void wczytaj(Wektor* pod);
int* suma(Wektor* pod);
int* roznica(Wektor* pod);
int* mnozenie(Wektor* pod);

int main()
{
	Wektor w;
	int jak;
	link:
	wczytaj(&w);
	puts(" ");
	puts("---------------");
	wypisz(&w);
	puts(" ");
	puts("\nCo chcesz zrobic z wektorami?\n1 - dodawanie wektorow\n2 - odejmowanie wektorow\n3 - mnozenie wektora przez liczbe\n");
	scanf_s("%d", &jak);
	switch (jak)
	{
		case 1:
		{
			int z = suma(&w);
			wypiszDzialanie(z);
			break;
		}
		case 2:
		{
			int* z = roznica(&w);
			wypiszDzialanie(z);
			break;
		}
		case 3:
		{
			int* z = mnozenie(&w);
			wypiszDzialanie(z);
			break;
		}
	}
	int pyt;
	puts("Czy chcesz ponownie uruchomic program?\n1 - uruchomic program ponownie\n2 - zakonczyc dzialanie programy");
	scanf("%d", &pyt);
	if (pyt == 1)
	{
		goto link;
	}
	else if (pyt == 2)
	{
		return 1;
	}
}

void wypisz(const Wektor* pod)
{
	printf("p= %d\nq= %d\ndlugosc= %d\n", pod->p, pod->q,pod->dlugosc);
}

void wczytaj(Wektor* pod)
{
	printf("Podaj p: ");
	scanf("%d", &pod->p);
	printf("Podaj q: ");
	scanf("%d", &pod->q);
	if (pod->q > pod->p)
	{
		int temp = pod->p;
		pod->p = pod->q;
		pod->q = temp;
	}
	pod->dlugosc = pod->p - pod->q;

}

void wypiszDzialanie(int n)
{
	puts("");
	printf("Wynik dzialanie wychodzi: %d\n", n);
	puts("----------------------------------------");
}

int* suma(Wektor* pod)
{
	int wynik;
	wynik = pod->p + pod->q;
	return wynik;
}

int* roznica(Wektor* pod)
{
	int wynik;
	wynik = pod->p - pod->q;
	return wynik;
}

int* mnozenie(Wektor* pod)
{
	int wynik;
	wynik = pod->p * pod->q;
	return wynik;
}

