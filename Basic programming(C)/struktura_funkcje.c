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
    Czlowiek a;
    pobierzCzlowiek(&a);
    wypiszCzlowiek(&a);
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

