//#include<iostream>
//using namespace std;
//
//void Pobierz(int arr[], int size);
//void Wypisz(int arr[], int size);
//void PrzestawParzyste(int arr[], int size);
//
//int main()
//{
//	int size;
//	cout << "podaj dlugosc" << endl;
//	cin >> size;
//	int* arr = new int[size];
//	Pobierz(arr, size);
//	cout << "wartosc tej tablicy" << endl;
//	Wypisz(arr, size);
//	cout << endl;
//	PrzestawParzyste(arr, size);
//	cout << "wartosc tablicy PrzestawParzyste" << endl;
//	Wypisz(arr, size);
//}
//
//
//
//void Pobierz(int arr[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cin >> arr[i];
//	}
//}
//
//void Wypisz(int arr[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}
//
//void PrzestawParzyste(int arr[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		int parzysta = 0;
//		if (arr[i]%2==0)
//		{
//			parzysta = arr[i];
//			for (int j = i; j >= 0; j--)
//			{
//				arr[j] = arr[j - 1];
//			}
//			arr[0] = parzysta;
//		}
//	}
//}