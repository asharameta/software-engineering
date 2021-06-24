#include<iostream>
using namespace std;

int main()
{
	int n, num;
	int licznikD = 0;
	int licznikU = 0;
	int* arr = new int[1];
	cout<<"Podaj N: "<<endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Podaj " << i + 1 << " element tablicy: " << endl;
		cin >> arr[i];
		int* arrtemp = new int[i + 1];
		for (int k = 0; k < i + 1; k++)
		{
			arrtemp[k] = arr[k];
		}
		delete[]arr;
		arr = new int[i + 2];
		for (int k = 0; k < i + 1; k++)
		{
			arr[k] = arrtemp[k];
		}
		delete[]arrtemp;
	}

	for (int i = 0; i < n; i++)
	{
		int parz=0;
		if (arr[i]%2==0)
		{
			parz = arr[i];
			for (int j = 0; j < n; j++)
			{
				arr[j + 2] = parz;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}