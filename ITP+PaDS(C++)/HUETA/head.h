#include<stdio.h>
#include <ctype.h>
#include<malloc.h>
#include <stdlib.h>

struct Sklep_komp
{
    char model[90];
    char firma[90];
    int ilosc;
    float cena;
};

typedef struct Sklep_komp Sklep_komp;
void wypisz(const Sklep_komp*w);
void podaj(Sklep_komp* p);
float srednia(Sklep_komp* s, int n);
float koszt(Sklep_komp* k, int n);
void sortowanie(Sklep_komp* so);
void plik1(const Sklep_komp*plk, int n);
void plik2(Sklep_komp*plk, float SRwynik);
