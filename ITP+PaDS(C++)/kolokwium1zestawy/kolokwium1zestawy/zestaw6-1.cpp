#include<iostream>
using namespace std;

int main()
{
	int num, K;
	int count = 0;
	int count2=0;
	int* arr = new int[1];
	cout << "Podaj wartosc K: " << endl;
	cin >> K;
	for (int i = 0; ; i++)
	{
		cout << "Podaj " << i + 1 << " element tablicy: " << endl;
		cin >> num;
		if (num == 0)break;
		arr[i] = num;
		int* arrtemp = new int[i + 1];
		for (int k = 0; k < i+1; k++)
		{
			arrtemp[k] = arr[k];
		}
		delete[]arr;
		arr = new int[i + 2];
		for (int k = 0; k < i+1; k++)
		{
			arr[k] = arrtemp[k];
		}
		delete[]arrtemp;
		count++;
	}
	for (int i = 0; i < count; i++)
	{
		int sum = 0;
		int dzielnik = 1;
		if (i+1<count)
		{
			count2 = 0;
			for (int j = i; j < i+1; j++)
			{
				sum = arr[j] + arr[j + 1];
			}
			for (int j = 0; j < sum+1; j++)
			{
				if (sum % dzielnik == 0)
				{
					count2++;
				}
				dzielnik++;
			}
		}
		if (count2>K)
		{
			cout <<"("<< arr[i] << arr[i + 1]<<")"<< " ";
		}
	}
	if (count2 < K)
	{
		cout << "Brak szukanych dwojek" << endl;
	}
	delete[]arr;
	return 0;
}