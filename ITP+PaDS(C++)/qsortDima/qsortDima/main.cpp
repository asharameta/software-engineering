#include<iostream>
#include<time.h>
#include<ctime>
using namespace std;

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

int medianOfThree(int a[], int left, int right)
{
    int center = (left + right) / 2;
    if (a[center] < a[left])
        swap(a[left], a[center]);
    if (a[right] < a[left])
        swap(a[left], a[right]);
    if (a[right] < a[center])
        swap(a[center], a[right]);
    return center;
}

int PartitionMedianOfFiveOrSeven(int tab[], int start, int stop, int ilosc)
{
    int median = medianOfFiveOrSeven(tab, start, stop, ilosc);
    swap(tab[median], tab[stop]);

    int pivot = tab[stop];
    int j = start;
    for (int i = start; i < stop; i++)
    {
        if (tab[i] <= pivot)
            swap(tab[i], tab[j++]);
    }
    swap(tab[stop], tab[j]);
    return j;
}

int PartitionMedianOfThree(int tab[], int start, int stop)
{
    int median = medianOfThree(tab, start, stop);
    swap(tab[median], tab[stop]);

    int pivot = tab[stop];
    int j = start;
    for (int i = start; i < stop; i++)
    {
        if (tab[i] <= pivot)
            swap(tab[i], tab[j++]);
    }
    swap(tab[stop], tab[j]);
    return j;
}

int PartitionPivotLos(int tab[], int start, int stop)
{
    int los = rand() % (stop - start + 1) + start;
    swap(tab[los], tab[stop]);

    int pivot = tab[stop];
    int j = start;
    for (int i = start; i < stop; i++)
    {
        if (tab[i] <= pivot)
            swap(tab[i], tab[j++]);
    }
    swap(tab[stop], tab[j]);
    return j;
}

int PartitionPivotEnd(int tab[], int start, int stop)
{
    int pivot = tab[stop];
    int j = start;
    for (int i = start; i < stop; i++)
    {
        if (tab[i] <= pivot)
            swap(tab[i], tab[j++]);
    }
    swap(tab[stop], tab[j]);
    return j;
}

void Qsort(int tab[], int start, int stop)
{
    if (start >= stop)
        return;
    int pivot = PartitionPivotEnd(tab, start, stop);
    //int pivot = PartitionPivotLos(tab, start, stop);
    //int pivot = PartitionMedianOfFiveOrSeven(tab, start, stop, 7);
    Qsort(tab, start, pivot - 1);
    Qsort(tab, pivot + 1, stop);
}


int main()
{
    int rozm = 1000000;
    int* t = new int[rozm];

    for (int i = 0; i < rozm; i++)
        t[i] = rand() % 1100000;

    //for (int i = 0; i < rozm; i++)
    //    cout << t[i] << ", ";

    cout << endl << endl;

    Qsort(t, 0, rozm - 1);
    //Qsort(t, 0, rozm - 1);


    cout << endl << endl;
    //for(int i=0; i < rozm; i++)
    //    cout << t[i] << ", ";
    cout << "Runtime : " << clock() << " ms" << endl;
    return 0;

}
