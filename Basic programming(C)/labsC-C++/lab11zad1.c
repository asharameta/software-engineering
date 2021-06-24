/*#include<stdio.h>
#include<string.h>
int read_file(FILE*plik);
int slowo(FILE*plik);
int litery(FILE*plik);
int ident(FILE*plik);

int main()
{
    char nazwa_pliku[80]="nazwy.txt";
    FILE*plik;
    plik=fopen(nazwa_pliku,"r");
    puts("Zawartosc pliku: ");
    read_file(plik);
    puts("========");
    printf("ilosc slow: %d\n",slowo(plik));
    printf("ilosc wielkich liter: %d\n",litery(plik));
    printf("ilosc identycznych liter: %d\n",ident(plik));
    return 0;
}

int read_file(FILE*plik)
{
    rewind(plik);
    int count=0;
    char bufor[255];
    while(fgets(bufor,sizeof(bufor),plik)!=NULL)
    {
        fputs(bufor,stdout);
        count++;
    }
    return count;
}

int slowo(FILE*plik)
{
    rewind(plik);
    char symbol;
    int wynik=0;
    while((symbol = fgetc(plik)) != EOF)
    {
        if((symbol == '\n') || (symbol == ' ') || (symbol == '\t'))
        {
            wynik++;
        }
    }

    return wynik;
}

int litery(FILE*plik)
{
    rewind(plik);
    char symbol;
    int wynik=0;
    while((symbol = fgetc(plik)) != EOF)
    {
        if((symbol >= 'A') && (symbol <= 'Z'))
        {
            wynik++;
        }
    }

    return wynik;
}

int ident(FILE*plik)
{
    rewind(plik);
    char symbol;
    char identS;
    int wynik=0;
    while((symbol = fgetc(plik)) != EOF)
    {
        if(symbol==identS)
            wynik++;
        identS=symbol;

    }

    return wynik;
}
*/
