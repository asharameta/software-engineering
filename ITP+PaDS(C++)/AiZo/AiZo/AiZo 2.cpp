#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	int N;
	cout << "Podaj N: "; cin >> N;
	int* arr = new int[N];
	int count = 0;
	for (unsigned i = 0; i < N; i++)
	{
		arr[i] = rand();	
	}
	
	unsigned int start = clock();
	int liczba = 0;
	for (unsigned i = 0; i < N; i++)
	{
		for (unsigned k = i+1; k < N; k++)
		{
			if (arr[i] == arr[k])
			{
				count++;
				liczba = arr[i];
			}
			
		}
		if (count)
		{
			cout << "Liczba: " << liczba << " powtarza sie " << count << " razy" << endl;
		}
		count = 0;
	}
	unsigned int koniec = clock();
	unsigned int search_time = koniec - start;
	for (unsigned i = 0; i < N; i++)
	{
		cout << arr[i] << endl;
	}
	cout << "czas wykonania: " << search_time <<" sekund"<< endl;
	return 0;
}