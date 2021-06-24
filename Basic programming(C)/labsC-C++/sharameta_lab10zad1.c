/*#include<stdio.h>

int odczytaj_plik(FILE *plik2);
float srednia(FILE *plik2);
int liczba_wierszy1(FILE *plik);
int liczba_wierszy2(FILE *plik);

int main()
{
    char nazwa_pliku[80]="C:\\Users\\shiiit\\Downloads\\nazwy.txt";
    FILE *plik=fopen(nazwa_pliku,"r");
    puts("Zawartosc pliku: ");
    odczytaj_plik(plik);
   // float b = srednia(plik);
    puts("\n======================");
   // printf("srednia: %.3f\n",b);

    printf("Liczba wierszy %d\n",liczba_wierszy1(plik));
    printf("Liczba wielkich liter %d\n",liczba_wierszy2(plik));
    return 0;
}

int odczytaj_plik(FILE *plik2)
{
    rewind(plik2);
    int count=0;
    char bufor[255];
    while(fgets(bufor,sizeof(bufor),plik2)!=NULL)
    {
        fputs(bufor,stdout);
        count++;
    }
    return count;
}

float srednia(FILE *plik2)
{
    int indeks,count=0;
    float sr, suma=0;
    rewind(plik2);
    rewind(plik2);
    while(fscanf(plik2,"%d;%f\n",&indeks,&sr)==2)
    {
        suma += sr;
        count++;
    }
    suma = suma/count;
    return (float)suma;
}

int liczba_wierszy1(FILE *plik)
{
    rewind(plik);
    int wynik=0;
    char bufor[255];
    while(fgets(bufor,sizeof(bufor),plik)!=NULL)
    {
        wynik++;
    }
    return wynik;
}

int liczba_wierszy2(FILE *plik)
{
    rewind(plik);
    int wynik=0;
    char ch=0;
    rewind(plik);
    while(!feof(plik))
    {
        if(ch>'A' && ch<'Z')
            wynik++;
    }
    return wynik;
}
*/
