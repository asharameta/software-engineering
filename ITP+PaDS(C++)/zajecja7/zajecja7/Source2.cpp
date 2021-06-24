#include <iostream>

using namespace std;

int main()
{
	int a = 0, a1 = 0, a2 = 0;
	int G, ile = 0;
	cout << "podaj wartosc G: " << endl;

	cin >> G;

	cout << "podaj liczby : " << endl;
	for (int i = 0; ; i++)
	{
		a = a1;
		a1 = a2;
		cin >> a2;
		if (a2 == 0) break;
		if (a2>a&&a1>a) {
			if(a2+a1>G)
			  ile++;
		}
		if (a>a1&&a2>a1) {
			if (a + a2 > G)
				ile++;
		}
		if (a>a2&&a1>a2) {
			if (a + a1 > G)
				ile++;
		}
		if (ile == 1)
		{
			cout << "(" << a << "," << a1 << "," << a2 << ") " << endl;
			ile = 0;
		}
	}
	return 0;
}