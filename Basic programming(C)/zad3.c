/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n;
    int P=0,pP=0,paP=0,bt=0;
    printf("Podaj liczbe N dwowymiarowej tablicy nxn: ");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Bledna liczba. ");
        return 1;
    }
    int tab[n][n];
    srand(time(NULL));
    for(int i=0; i<n; ++i)
        for(int j=0; j<n; ++j)
            tab[i][j]=rand()%11-5;

    puts("--------------------------------------------");
    printf("Macierz %dx%d\n",n,n);
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<n; ++j)
            printf("%4d",tab[i][j]);
        puts("");
    }
    puts("--------------------------------------------");
    for (int i=0; i<n;i++)
          for (int j=0;j<n;j++)
            if (i==j)
              P+=tab[i][j];
    printf("suma liczb przekatnej: %d", P);
    puts(" ");
    for (int i=0; i<n-1;i++)
          for (int j=i+1;j<n;j++)
              pP+=tab[i][j];
    printf("suma liczb powyzej przekatnej: %d", pP);
     puts(" ");
     for (int i = 0; i < n; i++)
       for (int j = 0; j < n; j++)
            if (i>n-1-j)
                paP+=tab[i][j];
    printf("suma liczb ponizej antyprzekatnej: %d", paP);
    puts(" ");
    for(int i=0;i<n-1;i++)
    {
        for(int j=i;j<n;j++)
        {
            bt+=tab[i][j];
        }
    }
    printf("suma liczb na brzegach tablicy: %d", bt);

    return 0;
}
*/
