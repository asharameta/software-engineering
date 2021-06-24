#include <stdio.h>

struct Czlowiek
{
    int wiek;
    float wzrost;
};

typedef struct Czlowiek Czlowiek;

int main()
{
    Czlowiek a;
    printf("Podaj wiek: ");
    scanf("%d",&a.wiek);
    printf("Podaj wzrost w metrach: ");
    scanf("%f",&a.wzrost);

    printf("wiek: %d wzrost: %.2f",a.wiek,a.wzrost);
    return 0;
}


