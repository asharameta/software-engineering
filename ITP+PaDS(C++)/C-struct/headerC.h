#ifndef HEADERC_H_INCLUDED
#define HEADERC_H_INCLUDED

void wypisz(int *t, int r);
void losuj(int *t, int r, int a, int b);
void losuj_macierz(int **m,int w,int k, int p, int q);
void wypisz_macierz(int **m,int w,int k);
int *sumy_wierszy(int **m,int w,int k);
int *sumy_kolumn(int **m,int w,int k);


#endif // HEADERC_H_INCLUDED
