#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define N 10
void wypisz(const int *tablica, int liczba_elementow);
bool czy_parzysta(int liczba);
int policz(const int *tablica,int ile_elementow);

int main()
{
    int A[N]= {2,3,4,7,6,2,3,4,7,5};

    wypisz(A,N);
    printf("\nLiczba parzystych to: %d\n",policz(A,N));

    return 0;
}

void wypisz(const int *tablica, int liczba_elementow)
{
    for(int i=0; i<liczba_elementow; ++i)
        printf("%d\t",tablica[i]);
}

bool czy_parzysta(int liczba)
{
    if (liczba%2==0)
        return true;
    return false;
}

int policz(const int *tablica,int ile_elementow)
{
    int wynik=0;
    for(int i=0; i<ile_elementow; ++i)
        if(czy_parzysta(tablica[i])==true)///lub czy_parzysta(tablica[i])
            ++wynik;
    return wynik;
}
