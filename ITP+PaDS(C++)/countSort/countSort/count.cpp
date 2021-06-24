#include<iostream>
using namespace std;

int countSort(int A[], int B[], int k)
{
    int n = 25;
    int* C = new int[k];
    for (int i = 0; i < k; ++i)
        C[i] = 0;               

    for (int i = 0; i < n; ++i)
        C[A[i]];              
                                   
    for (int i = 1; i < k; ++i)
        C[i] += C[i - 1];      
                                    
    for (int i = n - 1; i >= 0; --i)
        B[C[A[i]]] = A[i];
    cout << endl << endl;
    for (int i = 0; i < k; i++)
    {
        cout << B[i] << " ";
    }
    return B[k];
}

int main()
{
    int k = 25;
    int* A=new int[k];
    int* tabB = new int[k];
    //srand(time(NULL));
    for (int i = 0; i < k; i++)
    {
        A[i] = rand() % k;
    }

    for (unsigned i = 0; i < k; i++)
    {
        cout << A[i] << " ";
    }
    countSort(A, tabB, k);

    return 0;
}