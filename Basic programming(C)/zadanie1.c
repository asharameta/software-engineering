#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void wypisz(int *t, int r);
void losuj(int *t, int r, int a, int b);
void losuj_macierz(int **m,int w,int k, int p, int q);
void wypisz_macierz(int **m,int w,int k);
int *sumy_wierszy(int **m,int w,int k);
int *sumy_kolumn(int **m,int w,int k);

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
    int **A=(int**)calloc(n,sizeof(int*));
    for(int i=0; i<n; ++i)
        A[i]=(int*)calloc(m,sizeof(int));
    puts("--------------------------------------------");
    losuj_macierz(A,n,m,-10,10);
    wypisz_macierz(A,n,m);
    int *B=sumy_wierszy(A,n,m);
    puts("\nSumy z wierszy");
    wypisz(B,n);
    free(B);
    int *C=sumy_kolumn(A,n,m);
    puts("\nSumy z kolumn");
    wypisz(C,m);
    free(C);
    for(int i=0; i<n; ++i)
        free(A[i]);
    free(A);
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

void losuj_macierz(int **m, int w ,int k, int p, int q)
{
    for(int i=0;i<w;++i)
        losuj(m[i],k,p,q);
}

void wypisz_macierz(int **m, int w, int k)
{
    for(int i=0; i<w; ++i)
        wypisz(m[i],k);

}

int *sumy_wierszy(int **m, int w, int k)
{
    int *wynik=(int*)calloc(w,sizeof(int));
    for(int i=0; i<w; ++i)
        for(int j=0; j<k; ++j)
            wynik[i]+=m[i][j];
    return wynik;
}

int *sumy_kolumn(int **m, int w, int k)
{
    int *wynik=(int*)calloc(k,sizeof(int));
    for(int i=0; i<k; ++i)
        for(int j=0; j<w; ++j)
            wynik[i]+=m[j][i];
    return wynik;
}
