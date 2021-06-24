#include <stdio.h>

struct Czlowiek
{
    int wiek;
    float wzrost;
};

typedef struct Czlowiek Czlowiek;

void pobierzCzlowiek(Czlowiek *p);
void wypiszCzlowiek(const Czlowiek *p);

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
    for(int i=0;i<n;++i)
    {
        printf("%d:\n",i+1);
        pobierzCzlowiek(A+i);
    }
    printf("\nLista osob:");
    for(int i=0;i<n;++i)
    {
        printf("\n%d: ",i+1);
        wypiszCzlowiek(A+i);
    }
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

