#include <stdio.h>

int main()
{
    char nazwisko[100];
    printf("Podaj nazwisko: ");
    scanf("%99[^\n]",nazwisko);
    int wiek;
    printf("Podaj wiek: ");
    scanf("%d",&wiek);
    char nazwa_pliku[40]="mojplik.txt";
    FILE *plik=fopen(nazwa_pliku,"a");
    fprintf(plik,"%s - %d\n",nazwisko,wiek);
    fclose(plik);
    return 0;
}

