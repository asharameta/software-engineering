#include <stdio.h>

struct Czlowiek
{
    int wiek;
    float wzrost;
};

typedef struct Czlowiek Czlowiek;

void pobierzLudzi(Czlowiek *tablica, int rozmiar);
void wypiszLudzi(const Czlowiek *tablica,int rozmiar);

int main()
{
    int n;
    printf("Podaj liczbe osob: ");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Bledna liczba osob");
        return 1;
    }
    Czlowiek A[n];///tu mozna zdefiniowac dowolna tablice
    printf("Wprowadz dane na temat %d osob:\n",n);
    pobierzLudzi(A,n);
    printf("\nLista osob:");
    wypiszLudzi(A,n);
    return 0;
}

void pobierzLudzi(Czlowiek *tablica, int rozmiar)
{
    for(int i=0; i<rozmiar; ++i)
    {
        printf("%d:\n",i+1);
        printf("Podaj wiek: ");
        scanf("%d",&tablica[i].wiek);
        printf("Podaj wzrost w metrach: ");
        scanf("%f",&tablica[i].wzrost);
    }
}

void wypiszLudzi(const Czlowiek *tablica,int rozmiar)
{
    for(int i=0; i<rozmiar; ++i)
    {
        printf("\n%d: ",i+1);
        printf("wiek: %3d wzrost: %4.2f",tablica[i].wiek,tablica[i].wzrost);
    }
}
