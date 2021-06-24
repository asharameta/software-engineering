//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int num, k;
//	int count = 0;
//	int* arr = new int[1];
//	cout << "Podaj wartosc K: " << endl; cin >> k;
//	for (int i = 0; ; i++)
//	{
//		cout << "Podaj " << i + 1 << " element tablicy: " << endl;
//		cin >> num;
//		if (num == 0)break;
//		arr[i] = num;
//		int* temparr = new int[i + 1];
//		for (int k = 0; k < i+1; k++)
//		{
//			temparr[k] = arr[k];
//		}
//		delete[]arr;
//		arr = new int[i + 2];
//		for (int k = 0; k < i+1; k++)
//		{
//			arr[k] = temparr[k];
//		}
//		delete[]temparr;
//		count++;
//	}
//	for (int i = 0; i < count; i++)
//	{
//		if (i+3<count)
//		{
//			int count = 0;
//			if (arr[i] % k == 0)count++;
//			if (arr[i+1] % k == 0)count++;
//			if (arr[i + 2] % k == 0)count++;
//			if (arr[i + 3] % k == 0)count++;
//			count = 0;
//		}
//		if (count <= 2)
//		{
//			cout << "(" << arr[i] << arr[i + 1] << arr[i + 2] << arr[i + 3] << ")" << " ";
//		}
//		else
//		{
//			cout << "Brak szukanych czworek liczb" << endl;
//		}
//	}
//	delete[]arr;
//	return 0;
//}