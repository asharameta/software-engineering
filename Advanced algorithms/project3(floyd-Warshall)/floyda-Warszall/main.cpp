#include<iostream>
using namespace std;

const int N = 5;
const int inf = 99999;


template<typename t>
void print(t tab)
{
	for (int i = 0; i < N; i++)
	{
		for (int k = 0; k < N; k++)
		{
			if (tab[i][k] == inf)
				cout << "inf" << " ";
			else
				cout << tab[i][k] << " ";
		}
		cout << endl;
	}
}



template<typename t>
void Floyd(t tab)
{
	int arr[N][N];
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			arr[i][j] = tab[i][j];

	for (int k = 0; k < N; k++)
	{
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (arr[i][j] > (arr[i][k] + arr[k][j]) && (arr[k][j] != inf && arr[i][k] != inf))
					arr[i][j] = arr[i][k] + arr[k][j];
			}
		}
	}
	cout << "\nAfter Floyd(): " << endl;
	print(arr);
	
}


int main()
{
	//int tab[N][N]{ {0,2,inf,inf,1},{2,0,1,4,8},{inf,1,0,2,inf},{inf,4,2,0,10},{1,8,inf,10,0} };
	int tab[N][N]{ {0,2,4,inf,inf},{inf,0,3,3,inf},{inf,inf,0,-1,4},{inf,inf,inf,0,2},{inf,inf,inf,inf,0} };

	print(tab);

	Floyd(tab);
	return 0;
}
