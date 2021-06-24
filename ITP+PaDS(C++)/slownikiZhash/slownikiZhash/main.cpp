#include<iostream>
#include<map>
#include<string>
using namespace std;

int key(int x, map<int, int>&data)
{
	return x % data.size();
}

bool IsEmpty(int x, map<int, int>&data)
{
	if (data.at(x) == -1)
		return true;
	else return false;
}

bool deleted(int x, map<int, int>&data)
{
	if (data.at(x) == -2)return true;
	else return false;
}

int scan_for(int x, map<int, int>&data)
{
	int f = x % data.size();
	int s = 1;
	int d = -1;
	int i = f;
	while (!IsEmpty(i, data))
	{
		if (deleted(i, data))
		{
			if (d == -1)d = i;
		}
		else if (data.at(i) == x)
			return i;
		i = (i + s) % data.size();
		if (i == f)return d;
	}
	if (d != -1)return d;
	return i;
}


auto pop(int x, map<int, int>&data)
{
	int i = scan_for(x, data);
	if (i != -1 && !IsEmpty(i, data))
	{
		data[i] = -2;
		return data;
	}
	else return data;
}


auto add(int x, map<int, int>&data)
{
	int i = scan_for(x, data);
	if (i == -1)
	{
		throw invalid_argument("No memory!");
	}
	data[i] = x;
	return data;
}


int Search(int x, map<int, int>&data)
{
	int i = scan_for(x, data);
	if (i == -1 || IsEmpty(i, data) || deleted(i, data))return false;
	else return data[i];
}


int main()
{
	map<int, int> data;
	int N = 10;
	for (unsigned i = 0; i < N; i++)
	{
		data.emplace(i, -1);
	}

	int a[] = { 7, 17, 27, 37, 77, 87 };
	int n = sizeof(a) / sizeof(a[0]);

	for (int i = 0; i < n; i++)
		data=add(a[i],data);

	for (unsigned i = 0; i < N; i++)
	{
		cout << data[i] << " ";
	}



	data = add(57, data);
	cout << endl;
	for (int i = 0; i < N; i++)
	{
		cout << data[i] << " ";
	}



	data = add(67, data);
	cout << endl;
	for (int i = 0; i < N; i++)
	{
		cout << data[i] << " ";
	}



	int liczba = Search(19, data);
	cout << endl;
	if (liczba == 0)cout << "Slownik nie posiada tej liczby!" << endl;
	else cout << liczba << endl;



	data = pop(27, data);
	cout << endl;
	for (unsigned i = 0; i < N; i++)
	{
		cout << data[i] << " ";
	}




	liczba = Search(58, data);
	cout << endl;
	if (liczba == 0)cout << "Slownik nie posiada tej liczby!" << endl;
	else cout << liczba << endl;




	data = add(37, data);
	cout << endl;
	for (unsigned i = 0; i < N; i++)
	{
		cout << data[i] << " ";
	}
	return 0;
}