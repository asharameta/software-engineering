//#include<iostream>
//using namespace std;
//
//
//int main() {
//
//	int num, K;
//	int* arr = new int[1];
//	int count = 0;
//	cout << "Podaj K: "; cin >> K;
//	for (int i = 0; ; i++)
//	{
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
//	for (int i = 0; i < count; i++) {
//		if (i + 3 < count) {
//			int ilosc = 0;
//			if (arr[i] % K == 0) {
//				ilosc++;
//			}
//			if (arr[i + 1] % K == 0) {
//				ilosc++;
//			}
//			if (arr[i + 2] % K == 0) {
//				ilosc++;
//			}
//			if (arr[i + 3] % K == 0) {
//				ilosc++;
//			}
//			if (ilosc <= 2) {
//				cout << "(" << arr[i] << arr[i + 1] << arr[i + 2] << arr[i + 3] << ")";
//			}
//		}
//	}
//	delete[]arr;
//	return 0;
//}