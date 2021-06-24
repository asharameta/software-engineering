#include<iostream>
#include<ctime>
using namespace std;

int sort(int tab[],int A)
{
	int key, i;
	int licznik = 0;
	for (unsigned j = 1; j < A; j++)
	{
		key = tab[j];
		i = j - 1;
		while (i >= 0 && tab[i] > key)
		{
			tab[i + 1] = tab[i];
			licznik++;
			i--;
		}
		tab[i + 1] = key;
	}
	return licznik;
}


int main()
{
	srand(time(NULL));
	int licznik = 0;
	int i = 10;
	for (i; i < 1000; i=i+10)
	{
		int* tab = new int[i];
		for (int j = 0; j < i; j++)
		{
			tab[j] = rand();
		}
		licznik = sort(tab, i);
		cout <<"Licznik: " << licznik << endl;
	}
	/*for (unsigned i = 0; i < i; i++)
	{
		cout << tab[i] << " ";
	}*/
	cout << endl;
	return 0;
}