#include <stdio.h>

struct Czlowiek
{
    int wiek;
    float wzrost;
};

typedef struct Czlowiek Czlowiek;

void pobierzCzlowiek(Czlowiek *p);
void wypiszCzlowiek(const Czlowiek *p);
void pobierzLudzi(Czlowiek *tablica, int rozmiar);
void wypiszLudzi(const Czlowiek *tablica,int rozmiar);
Czlowiek najmlodszy(const Czlowiek *tablica,int rozmiar);

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
    Czlowiek x=najmlodszy(A,n);
    puts("\n\nNajmlodsza osoba:");
    wypiszCzlowiek(&x);
    return 0;
}

void pobierzCzlowiek(Czlowiek *p)
{
    printf("Podaj wiek: ");
    scanf("%d",&p->wiek);
    printf("Podaj wzrost w metrach: ");
    scanf("%f",&p->wzrost);
}

void wypiszCzlowiek(const Czlowiek *p)
{
    printf("wiek: %3d wzrost: %4.2f",p->wiek,p->wzrost);
}

void pobierzLudzi(Czlowiek *tablica, int rozmiar)
{
    for(int i=0;i<rozmiar;++i)
    {
        printf("%d:\n",i+1);
        pobierzCzlowiek(tablica+i);
    }
}

void wypiszLudzi(const Czlowiek *tablica,int rozmiar)
{
    for(int i=0;i<rozmiar;++i)
    {
        printf("\n%d: ",i+1);
        wypiszCzlowiek(tablica+i);
    }
}

Czlowiek najmlodszy(const Czlowiek *tablica,int rozmiar)
{
    Czlowiek wynik=tablica[0];
    for(int i=1;i<rozmiar;++i)
        if(tablica[i].wiek<wynik.wiek)
            wynik=tablica[i];
    return wynik;
}
