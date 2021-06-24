#include <stdio.h>

int main()
{
    FILE *plik=fopen("zawodnicy.dat","rb");

    int liczba;

    while(fread(&liczba,sizeof(int),1,plik)==1)
        printf("%d ",liczba);

    fclose(plik);
    return 0;
}
