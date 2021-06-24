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
    scanf_s("%d", &p->ilosc);
    while ((ch = getchar()) != EOF && ch != '\n');
    puts("Podaj koszt: ");
    scanf_s("%f", &p->cena);
    puts(" ");
    puts("=========================");
}

void wypisz(const Sklep_komp* w)
{
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
    float suma = 0, sr = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if ((s + i)->ilosc < n)
        {
            if ((s+i)->ilosc != 0)
            {
                suma += (s + i)->ilosc;
                count++;
                sr = suma / count;
            }
            else if (n == 1)
            {
                sr = (float)(s + i)->ilosc;
            }
        }
        else
        {
            return sr;
        }
    }
    return sr;
}

float koszt(Sklep_komp* k, int n)
{
    float max = 0;
    int licznik = 0, count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (max == (k + i)->cena)
        {
            count2++;
        }

        if ((k + i)->cena > max)
        {
            max = (k + i)->cena;
            count2 = 0;
        }
        licznik++;
        if (count2 > 0 && licznik == n)
        {
            printf("powtorna cena: %f\n", (k + i)->cena);
            puts("=========================");
        }
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
    char tekst[] = "===========================";
    FILE* plik;
    fopen_s(&plik, "hueta.txt", "a");
    if (plik == NULL) {
        printf("blad!\n");
    }
    else {
        printf("dziala!\n");
    }
    fflush(stdin);
    fprintf(plik, "%s\n", "Zamowienie: ");
    fprintf(plik, "%s", plk->model);
    fprintf(plik, "%s", plk->firma);
    fprintf(plik, "%d\n", plk->ilosc);
    fprintf(plik, "%f\n", plk->cena);
    fprintf(plik, "%s\n", tekst);
    fclose(plik);
}
