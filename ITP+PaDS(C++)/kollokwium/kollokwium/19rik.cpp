//#include<iostream>
//using namespace std;
//
//
//int main() {
//
//	int num, K = 3, ilosc = 0;
//	bool isTrue = false;
//	int* arr = new int[1];
//	int count = 0;
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
//	for (int i = 0; i < count - 1; i++) {
//		if (i + 3 <= count - 1) {
//			if (arr[i] - arr[i + 1] <= 2 && arr[i] - arr[i + 1] >= -2) {
//				if (arr[i] - arr[i + 2] <= 2 && arr[i] - arr[i + 2] >= -2) {
//					if (arr[i + 1] - arr[i + 2] <= 2 && arr[i + 1] - arr[i + 2] >= -2) {
//						isTrue = true;
//					}
//				}
//			}
//		}
//		if (isTrue == true) {
//			cout << "(" << arr[i] << arr[i + 1] << arr[i + 2] << ")";
//		}
//	}
//	if (!isTrue)
//	{
//		cout << "Brak takich trojek" << endl;
//	}
//	delete[]arr;
//	return 0;
//}