#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void wypisz(const int *start, int rozmiar);
int* kopia(int *start,int rozmiar);
void losuj(int *start, int rozmiar, int p, int q);

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
    srand(time(NULL));
    losuj(A,n,-10,10);
    printf("\nWylosowana tablica:\n");
    wypisz(A,n);
    int *B=kopia(A,n);
    puts("\nKopia tabicy");
    wypisz(B,n);
    free(B);
    free(A);
    return 0;
}

void wypisz(const int *start, int rozmiar)
{
    for(int i=0; i<rozmiar; ++i)
        printf("%d\t",start[i]);
}

int* kopia(int *start,int rozmiar)
{
    int *kopia=(int*)malloc(rozmiar*sizeof(int));
    if(kopia==NULL)
        return NULL;
    for(int i=0; i<rozmiar; ++i)
        kopia[i]=start[i];
    return kopia;
}

void losuj(int *start, int rozmiar, int p, int q)
{
    int wartosc=q-p+1;
    for(int i=0; i<rozmiar; ++i)
        start[i]=rand()%wartosc+p;
}

