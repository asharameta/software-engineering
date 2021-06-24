#include<stdio.h>
#include <stdlib.h>
#include"head.h"

float suma = 0, count = 0;
float sr = 0, max = 0;
int count2 = 0;


void podaj(Sklep_komp* p)
{
    int ch = 0;
    while ((ch = getchar()) != EOF && ch != '\n');
    puts("Podaj zamowenie!");
    puts("=========================");
    fputs("Podaj nazwe towaru: ", stdout);
    fgets(p->model, sizeof(p->model), stdin);
    fputs("Podaj nazwe producentu: ", stdout);
    fgets(p->firma, sizeof(p->firma), stdin);
    puts("Podaj ilosc: ");
    scanf("%d", &p->ilosc);
    while ((ch = getchar()) != EOF && ch != '\n');
    puts("Podaj koszt: ");
    scanf("%f", &p->cena);
    puts(" ");
    puts("=========================");
}

void wypisz(const Sklep_komp* w)
{
    int ch = 0;
    while ((ch = getchar()) != EOF && ch != '\n');
    puts("Zamowienie: ");
    printf("Nazwa towaru: %s", w->model);
    printf("Producent: %s", w->firma);
    printf("Ilosc towaru: %d", w->ilosc);
    printf("\nKoszt wynosi: %f", w->cena);
    puts(" ");
    puts("=========================");
}


float srednia(Sklep_komp* s, int n)
{
    //int suma = 0,count=0,sr=0;

    if (s->ilosc < n && s->ilosc!=0) {
        suma += s->ilosc;
        count++;
        sr = suma / count;
    }
    else if(n==1)
    {
        sr = (float)s->ilosc;
    }

    return sr;
}

float koszt(Sklep_komp* k)
{
    if (max == k->cena)
    {
        count2++;
    }

    if (k->cena > max)
    {
        max = k->cena;
        count2 = 0;
    }

    if (count2 > 0 && k->cena == max)
    {
        printf("powtorna cena: %f\n", k->cena);
        puts("=========================");
    }

    return max;
}

void sortowanie(Sklep_komp* so)
{
    char* c;
    for (c = so->firma; *c; ++c)
        *c = tolower(*c);

    for (int i = 0; so->firma[i] != 0; i++)
    {
        if (so->firma[i] <= 'z' && so->firma[i] >= 'a')
        {
            so->firma[i] += 'A' - 'a';
        }
        break;
    }
}

void plik1(Sklep_komp* plk)
{
    int ch = 0;
    while ((ch = getchar()) != EOF && ch != '\n');
    char nazwa_pliku[20];
    puts("Podaj nazwe pirwszego pliku z dodaniem '.txt': ");
    fgets(nazwa_pliku, sizeof(nazwa_pliku), stdin);
    FILE* plik = fopen(nazwa_pliku, "w");
    fclose(plik);
}

//void plik2(Sklep_komp* plk)
//{
//    char nazwa_pliku[20];
//    puts("Podaj nazwe pirwszego pliku: ");
//    fgets(nazwa_pliku, sizeof(nazwa_pliku), stdin);
//    FILE* plik = fopen_s(&plik, nazwa_pliku, "w");
//}
