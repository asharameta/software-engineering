//#include<iostream>
//using namespace std;
//
//void Pobierz(int arr[], int size);
//void Wypisz(int arr[], int size);
//void ZamienNaSumeParzystychPoprzednich(int arr[], int size);
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
//	ZamienNaSumeParzystychPoprzednich(arr, size);
//	cout << "wartosc tablicy ZamienNaSumeParzystychPoprzednich" << endl;
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

void ZamienNaSumeParzystychPoprzednich(int arr[], int size)
{
	int suma = 0;
	for (int i = 0; i < size; i++)
	{
			int n = arr[i];
			arr[i] = suma;
			if (n%2==0)
			{
				suma += n;
			}

	}
}