//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int num, G;
//	int count = 0, ilosc=0;
//	int* arr = new int[1];
//	cout << "Podaj wartosc G: " << endl; cin >> G;
//	for (int i = 0; ; i++)
//	{
//		cout << "Podaj " << i + 1 << " element tablicy: " << endl;
//		cin >> num;
//		if (num == 0)break;
//		arr[i] = num;
//		int* temparr = new int[i + 1];
//		for (int k = 0; k < i + 1; k++)
//		{
//			temparr[k] = arr[k];
//		}
//		delete[]arr;
//		arr = new int[i + 2];
//		for (int k = 0; k < i + 1; k++)
//		{
//			arr[k] = temparr[k];
//		}
//		delete[]temparr;
//		count++;
//	}
//	for (int i = 0; i < count; i++)
//	{
//		if (i+2<count)
//		{
//			int uj=0;
//			float sr=0;
//				for (int j = i; j < i+2; j++)
//				{
//					if (arr[j]<0)
//					{
//						uj = arr[j];
//						sr = ((float)(arr[i] + arr[i+2]) / 2);
//					}
//				}
//				if (sr > G)
//				{
//					if (uj<0)
//					{
//						cout << arr[i] << arr[i + 1] << arr[i + 2] << " ";
//						ilosc++;
//					}
//				}
//		}
//	}
//	cout << endl;
//	if (ilosc<1)
//	{
//		cout << "Znalezionych trojek: 0" << endl;
//	}
//	else
//	{
//		cout << "Znalezionych trojek: "<< ilosc << endl;
//	}
//}