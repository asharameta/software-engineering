//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n,num;
//	int count = 0;
//	int licznikD = 0;
//	int licznikU = 0;
//	int* arr = new int[1];
//	for (int i = 0; ; i++)
//	{
//		cout << "Podaj " << i + 1 << " element tablicy: " << endl;
//		cin >> num;
//		if (num == 0)break;
//		arr[i] = num;
//		int* arrtemp = new int[i + 1];
//		for (int k = 0; k < i + 1; k++)
//		{
//			arrtemp[k] = arr[k];
//		}
//		delete[]arr;
//		arr = new int[i + 2];
//		for (int k = 0; k < i + 1; k++)
//		{
//			arr[k] = arrtemp[k];
//		}
//		delete[]arrtemp;
//		count++;
//	}
//
//	for (int i = 0; i < count; i++)
//	{
//		licznikD = 0;
//		licznikU = 0;
//		if (i+3<count)
//		{
//			for (int k = i; k < i+4; k++)
//			{
//				if (arr[k]>0)
//				{
//					licznikD++;
//				}
//				else if (arr[k]<0)
//				{
//					licznikU++;
//				}
//			}
//		}
//		if (licznikD == 2)
//		{
//			if (licznikU == 2)
//			{
//				cout << "(" << arr[i] << arr[i + 1] << arr[i + 2] << arr[i + 3] << ")" << " ";
//				licznikD = 0;
//				licznikU = 0;
//			}
//		}
//	}
//	if (licznikD != 2)
//		{
//		cout << "Brak" << endl;
//		}
//	delete[]arr;
//}