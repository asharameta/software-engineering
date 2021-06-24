//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//    int w,p,q;
//    int k;
//    int najL_wiersza=0, najL_kolumny=0;
//    printf("Podaj p: ");
//    scanf("%d",&p);
//    printf("Podaj q: ");
//    scanf("%d",&q);
//    if(p>q)
//    {
//        int temp=p;
//        p=q;
//        q=temp;
//    }
//    int war=q-p+1;
//    printf("Podaj liczby w i k dwowymiarowej tablicy wxk: \n");
//    scanf("%d", &w);
//    scanf("%d", &k);
//
//	int N[w][k];
//	srand(time(NULL));
//	puts("--------------------------------------------");
//	printf("Macierz %dx%d\n",w,k);
//	if(w<1 || k<1)
//    {
//        puts("Nie udalo sie zrobic tablicy");
//        puts("--------------------------------------------");
//        system('stop');
//    }
//	for (int i = 0; i < w; ++i)
//    {
//        for (int j = 0; j < k; ++j)
//        {
//            N[i][j] = rand()%war+p;
//            printf("%5d",N[i][j]);
//        }
//        puts(" ");
//    }
//	puts("--------------------------------------------");
//	for (int i = 0; i < w; ++i)
//    {
//        najL_wiersza=0;
//        for (int j = 0; j < k; ++j)
//        {
//            if(N[i][j]>najL_wiersza)
//                najL_wiersza=N[i][j];
//        }
//        printf("najwieksza liczba %d wiersza = %d",i+1,najL_wiersza);
//        puts(" ");
//    }
//    puts(" ");
//    for (int i = 0; i < k; ++i)
//    {
//        najL_kolumny=0;
//        for (int j = 0; j < w; ++j)
//        {
//            if (N[j][i]>najL_kolumny)
//                najL_kolumny=N[j][i];
//        }
//        printf("najwieksza liczba %d kolumny = %d",i+1,najL_kolumny);
//        puts(" ");
//    }
//	return 0;
//}
//
