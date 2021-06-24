//#include<iostream>
//#include<ctime>
//using namespace std;
//
//int main()
//{
//	srand(time(NULL));
//	int N;
//	cout << "Podaj N: "; cin >> N;
//	int* arr = new int[N];
//	int count = 0;
//	int count2 = 0;
//	for (unsigned i = 0; i < N; i++)
//	{
//		arr[i] = rand();	
//	}
//	
//	unsigned int start = clock();
//	int liczba = 0;
//	for (unsigned i = 0; i < N; i++)
//	{
//		for (unsigned k = i+1; k < N; k++)
//		{
//			if (arr[i] == arr[k])
//			{
//				count++;
//			}
//			
//		}
//		if (count > count2)
//		{
//			count2 = count;
//			liczba = arr[i];
//		}
//		count = 0;
//	}
//	unsigned int koniec = clock();
//	unsigned int search_time = koniec - start;
//	for (unsigned i = 0; i < N; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	cout << "Liczba: " << liczba << " Powtarzania: " << count2 << endl;
//	cout << "czas wykonania: " << search_time <<" sekund"<< endl;
//	return 0;
//}


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{


    int N;
    cout << "enter size: ";
    cin >> N;




    int* a = new int[N];

    srand(time(NULL));
    for (int i = 0; i < N; i++)
    {
        a[i] = rand();

    }

    for (int i = 0; i < N; i++)
    {
        cout << a[i] << " ";
    }

    /*for(int i=0; i<N; i++)
    {
        cout << "enter element: " << i << ": ";
        cin >> a[i];
    }

    for(int i=0; i<N; i++)
    {
        cout << a[i] << " ";

    }
    cout << endl;*/


    int ile_raz = 0;
    int kto;
    int walker = 0;

    for (int i = 0; i < N; ++i)
    {
        int licznik = 0;
        int xto = a[i];
        for (int k = 0; k < N; ++k)
        {
            if (a[i] == a[k])
            {
                ++licznik;
            }
        }

        if (licznik > ile_raz)
        {
            ile_raz = licznik;

        }
    }





    cout << endl << "powtarzanie " << ile_raz << " raz" << endl;

    cout << "runtime = " << clock() / 1000.0 << endl;

    delete[] a;
    return 0;
}
