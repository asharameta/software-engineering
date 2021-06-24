#include<stdio.h>
#include"head.h"
#include<malloc.h>


int main()
{
    int n;
    float SRwynik=0,max=0;
    puts("Podaj ilosc zamowien:");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Bledna liczba zamowien!");
        return 1;
    }
    Sklep_komp* arr = (Sklep_komp*)malloc(n * sizeof(int));
        puts(" ");
        puts("=========================");
            for (int i = 0; i < n; i++)
            {
                podaj(&arr[i]);
                //wypisz(&sk);
            }
            /*for (int i = 0; i < n; i++)
            {
                wypisz(&arr[i]);
            }*/
            for (int i = 0; i < n; i++) {
                SRwynik = srednia(&arr[i], n);
            }

            for (int i = 0; i < n; i++) {
                max = koszt(&arr[i]);
            }
            puts(" ");
            for (int i = 0; i < n; i++)
            {
                sortowanie(&arr[i]);
            }
            puts("=========================\nPo sorotowaniu:\n");
            for (int i = 0; i < n; i++)
            {
                wypisz(&arr[i]);
            }
            if (SRwynik != 0) {
                printf("Srednia pola ilosc wynosi: %f", SRwynik);
            }
            else
            {
                puts("Nie uda sie policzyc srednie liczbe");
            }
            puts(" ");
            printf("Maxymalny koszt wynosi: %f", max);
            puts(" ");
            for (int i = 0; i < n; i++)
            {
                plik1(&arr[i]);
                break;
            }
            /*for (int i = 0; i < n; i++)
            {
                plik2(&arr[i]);
                break;
            }*/
            free(arr);

    return 0;
}
