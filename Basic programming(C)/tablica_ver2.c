#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void wypisz(int *t, int r);
void losuj(int *t, int r, int a, int b);
void losuj_macierz(int w,int k, int (*m)[k], int p, int q);
void wypisz_macierz(int w,int k,int (*m)[k]);
int main()
{
    srand(time(NULL));
    printf("Podaj liczbe wierszy: ");
    int n;
    if(scanf("%d",&n)!=1 || n<=0)
    {
        puts("\nBledna liczba wierszy");
        return 0;
    }
    printf("Podaj liczbe kolumn: ");
    int m;
    if(scanf("%d",&m)!=1 || m<=0)
    {
        puts("\nBledna liczba kolumn");
        return 0;
    }
    int A[n][m];
    puts("--------------------------------------------");
    losuj_macierz(n,m,A,-10,10);
    wypisz_macierz(n,m,A);
    return 0;
}

void wypisz(int *t, int r)
{
    puts("");
    for(int i=0; i<r; ++i)
        printf("%d\t",t[i]);
}

void losuj(int *t, int r, int a, int b)
{
    int wartosc=b-a+1;
    for(int i=0; i<r; ++i)
        t[i]=rand()%wartosc+a;
}


void losuj_macierz(int w, int k, int (*m)[k], int p, int q)
{
    int war=q-p+1;
    for(int i=0;i<w;++i)
        losuj(m[i],k,p,q);
}

void wypisz_macierz(int w, int k, int (*m)[k])
{
    for(int i=0; i<w; ++i)
        wypisz(m[i],k);
}
