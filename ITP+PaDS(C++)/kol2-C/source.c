#include"head.h"


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
    //while ((ch = getchar()) != EOF && ch != '\n');
    puts("Podaj koszt: ");
    scanf("%f", &p->cena);
    puts(" ");
    puts("=========================");

}

void wypisz(const Sklep_komp*w)
{
    puts("Zamowienie: ");
    printf("Nazwa towaru: %s", w->model);
    printf("Producent: %s", w->firma);
    printf("Ilosc towaru: %d", w->ilosc);
    printf("\nKoszt wynosi: %f", w->cena);
    puts(" ");
    puts("=========================");
}

float srednia(Sklep_komp* s, int n, int x)
{
    float suma = 0, sr = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if ((s + i)->ilosc < x)
        {
            if ((s+i)->ilosc != 0)
            {
                suma += (s + i)->ilosc;
                count++;
                sr = suma / count;
            }
        }
    }
    return sr;
}

float koszt(Sklep_komp* k, int n)
{
    float max=0;
    int licznik=0, count2=0;
    for (int i = 0; i < n; i++)
    {
        if (max == (k+i)->cena)
        {
            count2++;
        }

        if ((k+i)->cena > max)
        {
            max = (k+i)->cena;
            count2 = 0;
        }
        licznik++;
        if (count2 > 0 && licznik==n)
        {
            printf("powtorna cena: %f\n", (k+i)->cena);
            puts("=========================");
        }
    }
    return max;
}

void sortowanie(Sklep_komp* so) // modyfikacja
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
    }

}
void plik1(const Sklep_komp* plk,int n)
{
    int ch = 0;
    char nazwa[20];
    puts("Podaj nazwe pliku z dodaniem '.txt': ");
    while ((ch = getchar()) != EOF && ch != '\n');
    scanf("%99[^\n]",nazwa);
    char tekst[] = "===========================";
    FILE* plik;
    plik=fopen(nazwa, "a");
    for (int i = 0; i < n; i++)
    {
        if (plik == NULL)
        {
            printf ("blad!\n");
        }
        fprintf(plik, "%s\n", "Zamowienie: ");
        fprintf(plik, "Nazwa towaru: %s", (plk+i)->model);
        fprintf(plik, "Producent: %s", (plk+i)->firma);
        fprintf(plik, "Ilosc towaru: %d\n", (plk+i)->ilosc);
        fprintf(plik, "Koszt wynosi: %f\n", (plk+i)->cena);
        fprintf(plik, "%s\n", tekst);
    }
    rename ("mojplik.txt","hueta.txt");
    fclose(plik);
}

void plik2(Sklep_komp* plk, float SRwynik)
{
    int ch = 0;
    char nazwa[20];
    puts("Podaj nazwe pliku z dodaniem '.txt': ");
    while ((ch = getchar()) != EOF && ch != '\n');
    scanf("%99[^\n]",nazwa);
    char tekst[]="===========================";
    FILE* plik;
    plik=fopen(nazwa, "a");
    if (plik == NULL)
    {
        printf ("blad!\n");
    }
    fprintf(plik, "Srednia pola ilosc wynosi: %f\n", SRwynik);
    fprintf(plik, "%s\n", tekst);
    fclose(plik);
}
