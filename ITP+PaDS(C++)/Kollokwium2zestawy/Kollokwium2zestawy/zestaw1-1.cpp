//#include<iostream>
//using namespace std;
//
//
//void Pobierz(int arr[], int size);
//void Wypisz(int arr[], int size);
//void PrzestawMale(int arr[], int size);
//int *UsunWielkaSume(int arr[], int size, int& result);
//
//
//int main()
//{
//	cout << "Podaj dlugosc tablicy: " << endl;
//	int num;
//	cin >> num;
//	int* arr=new int[num];
//	Pobierz(arr, num);
//	cout << "Twoja tablica: " << endl;
//	Wypisz(arr, num);
//	cout << endl;
//	int* apv;
//	int apv_length;
//	apv = UsunWielkaSume(arr, num, apv_length);
//	cout << "watrosc tablicy PrzestawMale"<<endl;
//	PrzestawMale(arr, num);
//	Wypisz(arr, num);
//	cout << endl;
//	cout << "watrosc tablicy UsunWielkaSume"<<endl;
//	Wypisz(apv, apv_length);
//	cout << endl;
//	return 0;
//}
//
//
//void Pobierz(int arr[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << "Podaj " << i + 1 << " element tablicy: " << endl;
//		cin >> arr[i];
//	}
//}
//
//
//void Wypisz(int arr[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}
//
//void PrzestawMale(int arr[], int size)
//{
//	int min = arr[0];
//	for (int i = 0; i < size; i++)
//	{
//		if (min>arr[i])
//		{
//			min = arr[i];
//		}
//	}
//
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i]==min)
//		{
//			for (int j = i; j >= 0; j--)
//			{
//				arr[j] = arr[j - 1];
//			}
//			arr[0] = min;
//		}
//	}
//}
//
//int* UsunWielkaSume(int arr[], int size, int& result)
//{
//	int rememberI=0, rememberJ=0;
//	int rozm=0;
//	int max = arr[0];
//	for (int i = 0; i < size; i++)
//	{
//		int sum = 0;
//		for (int j = i; j < size; j++)
//		{
//			sum += arr[j];
//			if (sum > max)
//			{
//				rememberI = i;
//				rememberJ = j;
//				max = sum;
//			}
//		}
//		sum = 0;
//	}
//		result = size - (rememberJ - rememberI + 1);
//		int* newArr = new int[result];
//		for (int i = 0; i < size; i++)
//		{
//			if (i<rememberI || i>rememberJ)
//			{
//				newArr[rozm] = arr[i];
//				rozm++;
//			}
//		}
//		return newArr;
//
//}
//
//
