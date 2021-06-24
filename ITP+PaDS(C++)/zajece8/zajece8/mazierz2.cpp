#include<iostream>
using namespace std;


int main() {
	int rows, cols;
	cin >> rows;
	cin>> cols;
	int** tab=new int*[rows];
	for (int i = 0; i < rows; i++)
	{
		tab[i] = new int[cols];
	}
	int** arr=new int*[rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}
	int** ary=new int*[rows];
	for (int i = 0; i < rows; i++)
	{
		ary[i] = new int[cols];
	}
	///////////////////////////////////////////
	for (int j = 0; j < rows; j++)
	{
		cout << "Podaj "<<cols<<" liczby dlia " << j + 1 << " wiersza pierwszej tablicy." << endl;
		for (int i = 0; i < cols; i++)
		{
			cin >> arr[j][i];
		}
	}
	cout<<"==============="<<endl;
	for (int i = 0; i < rows; i++)
	{
		cout << "Podaj " << cols << " liczby dlia " << i + 1 << " wiersza drugiej tablicy." << endl;
		for (int j = 0; j < cols; j++)
		{
			cin>>tab[i][j];
		}
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			ary[i][j] = arr[i][j] + tab[i][j];
		}
	}
	cout << "===================" << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout<<ary[i][j]<<" ";
		}
		cout << endl;
	}
	///////////////////////////////////////////////////////
	for (int i = 0; i < rows; i++)
	{
		delete[]tab[i];
	}
	delete[]tab;
	for (int i = 0; i < rows; i++)
	{
		delete[]arr[i];
	}
	delete[]arr;
	for (int i = 0; i < rows; i++)
	{
		delete[]ary[i];
	}
	delete[]ary;
	return 0;
}