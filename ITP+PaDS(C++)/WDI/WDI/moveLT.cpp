#include<iostream>
using namespace std;


int main()
{
	const int n = 5;
	int tab[n]{ 1,2,3,4,5 };
	cout << "Startowa tablica: ";
	for (unsigned i = 0; i < n; i++)
	{
		cout << tab[i] <<" ";
	}
	for (unsigned i = 0; i < n-3; i++)
	{
		int z = tab[i];
		tab[i] = tab[i + 3];
		tab[i + 3] = z;
	}
	cout << "\nKoncowa tablica po dzialaniu: ";
	for (unsigned i = 0; i < n; i++)
	{
		cout << tab[i] << " ";
	}
	return 0;
}