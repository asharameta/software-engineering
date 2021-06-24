#include<iostream>
#include<time.h>
using namespace std;

//int pivot = medianOfThree(tab, start, stop);
// int los = rand() % (stop - start + 1) + start;
 //swap(tab[los], tab[stop]);


int medianOfThree(int tab[], int start, int stop )
{ 
    int center = (start + stop) / 2;
    if (tab[center] < tab[start])
        swap(tab[start], tab[center]);
    if (tab[stop] < tab[start])
        swap(tab[start], tab[stop]);
    if (tab[stop] < tab[center])
        swap(tab[center], tab[stop]);

    swap(tab[center], tab[stop]);
    return tab[stop];
}

int medianOfFiveOrSeven(int a[], int left, int right, int ilosc)
{
    int* tab = new int[ilosc];
    tab[0] = left;
    tab[1] = right;
    for (int i = 2; i < ilosc; i++)
    {
        tab[i] = rand() % (right - left + 1) + left;
    }
    for (int i = 1; i < ilosc; i++)
    {
        int tempIndex = tab[i];
        int j = i - 1;
        while ((j >= 0) && (a[tab[j]] > a[tempIndex]))
        {
            tab[j + 1] = tab[j];
            j--;
        }
        tab[j + 1] = tempIndex;
    }
    if (ilosc == 5) return tab[2];
    else return tab[3];
}

int Partition(int tab[], int start, int stop)
{
    //int pivot = medianOfThree(tab, start, stop); /// median of 3


    //int median = medianOfFiveOrSeven(tab, start, stop, 5);  /// median of 5
    //swap(tab[median], tab[stop]);
    //int pivot = tab[stop];

    int median = medianOfFiveOrSeven(tab, start, stop, 7); /// median of 7
    swap(tab[median], tab[stop]);
    int pivot = tab[stop];

    
    //int los = rand() % (stop - start + 1) + start; /// losowana liczba
    //swap(tab[los], tab[stop]);
    //int pivot = tab[stop];


    //int pivot = tab[stop]; ///ostatnia liczba


    int j = start;
    for (int i = start; i < stop; i++)
        if (tab[i] < pivot) swap(tab[i], tab[j++]);
    swap(tab[stop], tab[j]);
    return j;
}


void Qsort(int tab[], int start, int stop)
{
    if (start >= stop)
        return;
    int index = Partition(tab, start, stop);
    Qsort(tab, start, index-1);
    Qsort(tab, index+1, stop);
}




int main()
{
    
    int rozm = 10;
    int* t = new int[rozm];
    //int* NieMal = new int[rozm];
    for (unsigned i = 0; i < rozm;i++)
    {
        t[i] = rand() % 1000;
    }
    for (unsigned i = 0; i < rozm; i++)
    {
        cout << t[i] << " ";
    }
    
    cout << endl << endl;
    clock_t start = clock();
    Qsort(t, 0, rozm - 1);
    clock_t end = clock();
    double seconds = (double)(end - start) / CLOCKS_PER_SEC;
    cout << "Time for "<<rozm<<" i "<<seconds<< " seconds"<< endl;
    cout << endl << endl;
 
    for (unsigned i = 0; i < rozm; i++)
    {
        cout << t[i] << " ";
    }

    ///
    /*int rozm1 = 160000;
    int* t1 = new int[rozm1];

    for (unsigned i = 0; i < rozm1; i++)
        t1[i] = rand() % 1000;
    for (int i = 0; i < rozm1 - 1; i++) {
        for (int j = 0; j < rozm1 - i - 1; j++) {
            if (t1[j] > t1[j + 1]) {
                int temp1 = t1[j];
                t1[j] = t1[j + 1];
                t1[j + 1] = temp1;
            }
        }
    }

    clock_t start1 = clock();
    Qsort(t1, 0, rozm1 - 1);
    clock_t end1 = clock();
    double seconds1 = (double)(end1 - start1) / CLOCKS_PER_SEC;
    cout << "Time for " << rozm1 << " i " << seconds1 << " seconds" << endl;
    //
    int rozm2 = 170000;
    int* t2 = new int[rozm2];

    for (unsigned i = 0; i < rozm2; i++)
        t2[i] = rand() % 1000;
    for (int i = 0; i < rozm2 - 1; i++) {
        for (int j = 0; j < rozm2 - i - 1; j++) {
            if (t2[j] > t2[j + 1]) {
                int temp2 = t2[j];
                t2[j] = t2[j + 1];
                t2[j + 1] = temp2;
            }
        }
    }

    clock_t start2 = clock();
    Qsort(t2, 0, rozm2 - 1);
    clock_t end2 = clock();
    double seconds2 = (double)(end2 - start2) / CLOCKS_PER_SEC;
    cout << "Time for " << rozm2 << " i " << seconds2 << " seconds" << endl;
    //
    int rozm3 = 180000;
    int* t3 = new int[rozm3];

    for (unsigned i = 0; i < rozm3; i++)
        t3[i] = rand() % 1000;
    for (int i = 0; i < rozm3 - 1; i++) {
        for (int j = 0; j < rozm3 - i - 1; j++) {
            if (t3[j] > t3[j + 1]) {
                int temp3 = t3[j];
                t3[j] = t3[j + 1];
                t3[j + 1] = temp3;
            }
        }
    }

    clock_t start3 = clock();
    Qsort(t3, 0, rozm3 - 1);
    clock_t end3 = clock();
    double seconds3 = (double)(end3 - start3) / CLOCKS_PER_SEC;
    cout << "Time for " << rozm3 << " i " << seconds3 << " seconds" << endl;
    //
    int rozm4 = 190000;
    int* t4 = new int[rozm4];

    for (unsigned i = 0; i < rozm4; i++)
        t4[i] = rand() % 1000;
    for (int i = 0; i < rozm4 - 1; i++) {
        for (int j = 0; j < rozm4 - i - 1; j++) {
            if (t4[j] > t4[j + 1]) {
                int temp4 = t4[j];
                t4[j] = t4[j + 1];
                t4[j + 1] = temp4;
            }
        }
    }

    clock_t start4 = clock();
    Qsort(t4, 0, rozm4 - 1);
    clock_t end4 = clock();
    double seconds4 = (double)(end4 - start4) / CLOCKS_PER_SEC;
    cout << "Time for " << rozm4 << " i " << seconds4 << " seconds" << endl;
    //
    int rozm5 = 200000;
    int* t5 = new int[rozm5];

    for (unsigned i = 0; i < rozm5; i++)
        t5[i] = rand() % 1000;
    for (int i = 0; i < rozm5 - 1; i++) {
        for (int j = 0; j < rozm5 - i - 1; j++) {
            if (t5[j] > t5[j + 1]) {
                int temp5 = t5[j];
                t5[j] = t5[j + 1];
                t5[j + 1] = temp5;
            }
        }
    }

    clock_t start5 = clock();
    Qsort(t5, 0, rozm5 - 1);
    clock_t end5 = clock();
    double seconds5 = (double)(end5 - start5) / CLOCKS_PER_SEC;
    cout << "Time for " << rozm5 << " i " << seconds5 << " seconds" << endl;
    //
    int rozm6 = 140000;
    int* t6 = new int[rozm6];

    for (unsigned i = 0; i < rozm6; i++)
        t6[i] = rand() % 1000;
    for (int i = 0; i < rozm6 - 1; i++) {
        for (int j = 0; j < rozm6 - i - 1; j++) {
            if (t6[j] > t6[j + 1]) {
                int temp6 = t6[j];
                t6[j] = t6[j + 1];
                t6[j + 1] = temp6;
            }
        }
    }

    clock_t start6 = clock();
    Qsort(t6, 0, rozm6 - 1);
    clock_t end6 = clock();
    double seconds6 = (double)(end6 - start6) / CLOCKS_PER_SEC;
    cout << "Time for " << rozm6 << " i " << seconds6 << " seconds" << endl;
    //
    int rozm7 = 150000;
    int* t7 = new int[rozm7];

    for (unsigned i = 0; i < rozm7; i++)
        t7[i] = rand() % 1000;
    for (int i = 0; i < rozm7 - 1; i++) {
        for (int j = 0; j < rozm7 - i - 1; j++) {
            if (t7[j] > t7[j + 1]) {
                int temp7 = t[j];
                t7[j] = t7[j + 1];
                t7[j + 1] = temp7;
            }
        }
    }

    clock_t start7 = clock();
    Qsort(t7, 0, rozm7 - 1);
    clock_t end7 = clock();
    double seconds7 = (double)(end7 - start7) / CLOCKS_PER_SEC;
    cout << "Time for " << rozm7 << " i " << seconds7 << " seconds" << endl;
    //
    int rozm8 = 160000;
    int* t8 = new int[rozm8];

    for (unsigned i = 0; i < rozm8; i++)
        t8[i] = rand() % 1000;
    for (int i = 0; i < rozm8 - 1; i++) {
        for (int j = 0; j < rozm8 - i - 1; j++) {
            if (t8[j] > t8[j + 1]) {
                int temp8 = t8[j];
                t8[j] = t8[j + 1];
                t8[j + 1] = temp8;
            }
        }
    }

    clock_t start8 = clock();
    Qsort(t8, 0, rozm8 - 1);
    clock_t end8 = clock();
    double seconds8 = (double)(end8 - start8) / CLOCKS_PER_SEC;
    cout << "Time for " << rozm8 << " i " << seconds8 << " seconds" << endl;
    //
    int rozm9 =170000;
    int* t9 = new int[rozm9];

    for (unsigned i = 0; i < rozm9; i++)
        t9[i] = rand() % 1000;
    for (int i = 0; i < rozm9 - 1; i++) {
        for (int j = 0; j < rozm9 - i - 1; j++) {
            if (t9[j] > t[j + 1]) {
                int temp9 = t9[j];
                t9[j] = t9[j + 1];
                t9[j + 1] = temp9;
            }
        }
    }

    clock_t start9 = clock();
    Qsort(t9, 0, rozm9 - 1);
    clock_t end9 = clock();
    double seconds9 = (double)(end9 - start9) / CLOCKS_PER_SEC;
    cout << "Time for " << rozm9 << " i " << seconds9 << " seconds" << endl;*/
    

    
    return 0;

}
/*

*/


