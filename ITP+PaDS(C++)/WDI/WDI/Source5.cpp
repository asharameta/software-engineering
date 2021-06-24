//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n = 3;
//	const int w = 3;
//	const int k = 3;
//	int tab[w][k]{ {1,2,3},{4,8,1},{5,2,4} };
//	for (int i = 1; i < n; i++)
//	{
//		for (int k = 0; k < i; k++)
//		{
//			tab[i][k] = tab[i][n - 1];
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int k = 0; k < n; k++)
//		{
//			cout << tab[i][k] << " ";
//		}
//		cout << endl;
//	}
//}