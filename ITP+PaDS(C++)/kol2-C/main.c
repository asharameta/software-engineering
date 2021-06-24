#include"head.h"

int main()
{
    float SRwynik=0,max=0;
    int n;
    while(1)
    {
        puts("Podaj ilosc zamowien:");
        scanf("%d", &n);
        if (n <= 0)
        {
            printf("Bledna liczba zamowien!");
            return 1;
        }
        Sklep_komp arr[n];
        puts(" ");
        puts("=========================");
        for (int i = 0; i < n; i++)
        {
            podaj(&arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            sortowanie(&arr[i]);
        }
        puts("Po sortowaniu: ");
        puts(" ");
        for (int i = 0; i < n; i++)
        {
            wypisz(&arr[i]);
        }
        int x;
        puts("Podaj X");
        scanf("%d", &x);

            SRwynik = srednia(&arr[0], n, x);

            max = koszt(&arr[0],n);

        if (SRwynik != 0)
        {
            printf("Srednia pola ilosc wynosi: %f", SRwynik);
        }
        else
        {
            puts("Nie uda sie policzyc srednie liczbe");
        }
        puts(" ");
        printf("Maxymalny koszt wynosi: %f", max);
        puts(" ");
        for (int i = 0; i < 1; i++)
        {
            plik1(&arr[i], n);
        }
        for (int i = 0; i < 1; i++)
        {
            plik2(&arr[i], SRwynik);
        }
        int b;
        puts("Nacisni 0 zeby zamknac 1 zeby uruchomic ponownie");
        scanf("%d",&b);
        if (b==0)
        {
            free(arr);
            return 0;
        }
    }
}
