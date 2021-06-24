#include <stdio.h>
#include <stdlib.h>

void wypisz(int* t, int r);
void wypisz2(float* t, int r);
void losuj(int* t, int r, int a, int b);
void losuj_macierz(int** m, int w, int k, int p, int q);
void wypisz_macierz(float** m, int w, int k);
int* sr_wierszy(int** m, int w, float k);
int* sr_kolumn(int** m, float w, int k);

int temp1, temp2;


int main()
{
    srand(time(NULL));
    printf("Podaj liczbe wierszy: ");
    int n;
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        puts("\nBledna liczba wierszy");
        return 0;
    }
    printf("Podaj liczbe kolumn: ");
    int m;
    if (scanf("%d", &m) != 1 || m <= 0)
    {
        puts("\nBledna liczba kolumn");
        return 0;
    }
    int** A = (int**)calloc(n, sizeof(int*));
    for (int i = 0; i < n; ++i)
        A[i] = (int*)calloc(m, sizeof(int));
    puts("--------------------------------------------");
    losuj_macierz(A, n, m, -10, 10);
    wypisz_macierz(A, n, m);
    float* B = sr_wierszy(A, n, m);
    puts("\nSredni liczby z wierszy");
    wypisz2(B, n);
    free(B);
    float* C = sr_kolumn(A, n, m);
    puts("\nSredni liczby z kolumn");
    wypisz2(C, m);
    puts("\n--------------------------------------------");
    printf("Najweksza srednia liczba jest w %d wierszu\n", temp1 + 1);
    printf("Najweksza srednia liczba jest w %d kolumnie\n", temp2+1);
    free(C);
    for (int i = 0; i < n; ++i)
        free(A[i]);
    free(A);
    return 0;
}


void wypisz(int* t, int r)
{
    puts("");
    for (int i = 0; i < r; ++i)
        printf("%d\t", t[i]);
}
void wypisz2(float* t, int r)
{
    puts("");
    for (int i = 0; i < r; ++i)
        printf("%f\t", t[i]);
}

void losuj(int* t, int r, int a, int b)
{
    int wartosc = b - a + 1;
    for (int i = 0; i < r; ++i)
        t[i] = rand() % wartosc + a;
}

void losuj_macierz(int** m, int w, int k, int p, int q)
{
    for (int i = 0; i < w; ++i)
        losuj(m[i], k, p, q);
}

void wypisz_macierz(float** m, int w, int k)
{
    for (int i = 0; i < w; ++i)
        wypisz(m[i], k);

}

int* sr_wierszy(int** m, int w, float k)
{
    float sum = 0, max = 0;
    float* wynik = (float*)calloc(w, sizeof(float));
    for (int i = 0; i < w; ++i) {
        sum = 0;
        for (int j = 0; j < k; ++j)
        {
            sum += m[i][j];
        }
        wynik[i] = sum / k;
        if (wynik[i] > max) {
            max = wynik[i];
            temp1 = i;
        }
    }

    return wynik;
}

int* sr_kolumn(int** m, float w, int k)
{
    float sum = 0, max = 0;
    float* wynik = (float*)calloc(k, sizeof(float));
    for (int i = 0; i < k; ++i) {
        sum = 0;
        for (int j = 0; j < w; ++j) {
            sum += m[j][i];
        }
        wynik[i] = sum / w;
        if (wynik[i] > max) {
            max = wynik[i];
            temp2 = i;
        }
    }
    return wynik;
}
