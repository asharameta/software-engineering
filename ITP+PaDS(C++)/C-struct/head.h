#include<stdio.h>
#include <ctype.h>
#include<string.h>

struct Sklep_komp
{
    char firma[90];
    char model[90];
    int ilosc;
    float cena;
};

typedef struct Sklep_komp Sklep_komp;
void wypisz(const Sklep_komp* w);
void podaj(Sklep_komp* p);
float srednia(Sklep_komp* s, int n);
float koszt(Sklep_komp* k);
void sortowanie(Sklep_komp* so);
void plik1(Sklep_komp*plk);
//void plik2(Sklep_komp* plk);
