#include <iostream >
using  namespace  std;


int  main() {
	int MAIN_size = 0;
	int numbers = 0;
	int num,G=3;
	int* tab = new int[1];
	int newK = 0;
	int** arr = new int* [MAIN_size];
	cout << "Enter series of numbers: " << endl;
	for (int i = 0;; i++)
	{
		cin >> num;
		if (num == 0)break;
		tab[i] = num;
		int* newarr = new int[i + 1];
		for (int k = 0; k < i; k++)
		{
			newarr[k] = tab[k];
		}
		delete[] tab;
		tab = new int[i + 1];
	}
	// uzycie  tablicy
	for (int i = 0; i < num; i++)
		{
		for (int j = i + 1; j <= num; j++) {
			if (i + j > G) {
				cout << tab[i] << " " << tab[j]<<endl;
			}
		}
			}

	// zwolnienie  pamieci 
	for (int i = 0; i < MAIN_size; i++)
	{
		delete[]arr[i];
	}
	delete[]arr;
	return 0;
}