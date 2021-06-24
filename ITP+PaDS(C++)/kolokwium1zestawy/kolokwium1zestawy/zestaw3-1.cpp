//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int num;
//	int count = 0;
//	int R;
//	unsigned int O;
//	int* arr = new int[1];
//	cout << "Podaj wartosc R: " << endl; cin >> R;
//	for (int i = 0; ; i++)
//	{
//		cout << "Podaj " << i + 1 << " element tablicy: " << endl;
//		cin >> num;
//		if (num == 0)break;
//		arr[i] = num;
//		int* arrtemp = new int[i + 1];
//		for (int k = 0; k < i+1; k++)
//		{
//			arrtemp[k] = arr[k];
//		}
//		delete[]arr;
//		arr = new int[i + 2];
//		for (int k = 0; k < i+1; k++)
//		{
//			arr[k] = arrtemp[k];
//		}
//		delete[]arrtemp;
//		count++;
//	}
//	for (int i = 0; i < count; i++)
//	{
//		if (i + 2 < count)
//		{
//
//			O = arr[i + 1] - arr[i];
//			if (O <= R)
//			{
//				cout << arr[i] << arr[i + 1] << arr[i + 2] << endl;
//			}
//			else
//			{
//				cout << "Brak" << endl;
//			}
//		}
//	
//	}
//	delete[]arr;
//	return 0;
//}