#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void wypisz(const int *tablica, int liczba_elementow);
void wczytaj(int *tablica, int liczba_elementow);
void losuj(int *tablica, int liczba_elementow, int p, int q);
bool czy_parzysta(int liczba);

int main()
{
    printf("Podaj liczbe elementow: ");
    int n;
    if(scanf("%d",&n)!=1 || n<=0)
    {
        puts("\nBledna liczba elementow");
        return 1;
    }
    int *A=(int*)malloc(n*sizeof(int));
    //................

    //................
    free(A);
    return 0;
}

void wypisz(const int *tablica, int liczba_elementow)
{
    for(int i=0; i<liczba_elementow; ++i)
        printf("%d\t",tablica[i]);
}

void wczytaj(int *tablica, int liczba_elementow)
{
    for(int i=0; i<liczba_elementow; ++i)
    {
        printf("%d: ",i+1);
        scanf("%d",tablica+i);
    }
}

void losuj(int *tablica, int liczba_elementow, int p, int q)
{
    int wartosc=q-p+1;
    for(int i=0; i<liczba_elementow; ++i)
        tablica[i]=rand()%wartosc+p;
}

bool czy_parzysta(int liczba)
{
    if (liczba%2==0)
        return true;
    return false;
}
