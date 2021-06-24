#include<iostream>
using namespace std;


int main() {

	int N;
	cin >> N;
	int* tab = new int[N]{};
	cout << "Podaj " << N << " liczb" << endl;
	for (int i = 0; i < N; i++)
	{
		cin >> tab[N];
	}
	if (tab[N] > 0)
	{
		cout << "w tej tablice jest dodatnia liczba" << endl;
	}
	else
	{
		cout << "W tej tablice nie istnieje dodatniej liczby" << endl;
	}
	return 0;
}