#include<iostream>
using namespace std;

int f(int x)
{
	if (x == 0)return 3;
	else return f(x - 1) + 2;
}

int f_potega(int x, int y)
{
	if (y == 0) return 1;
	else return x * f_potega(x, y - 1);
}

int fib(int x)
{
	if (x == 1 || x == 2)return 1;
	else return fib(x - 1) + fib(x - 2);
}
int silnia(int x)
{
	if (x == 0)return 1;
	else return x * silnia(x - 1);
}
int fun(int a, int b)
{
	if (b == 0)return 0;
	else return a + fun(a, b - 1);
}



int main()
{
	cout <<f(2) << endl;
	cout << f_potega(2, 3) << endl;
	cout << fib(3) << endl;
	cout << silnia(5) << endl;
	cout << fun(2, 3) << endl;
	return 0;
}