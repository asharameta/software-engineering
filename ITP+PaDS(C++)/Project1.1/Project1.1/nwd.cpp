#include<iostream>
#include<string>
using namespace std;

//Napisać program pobierający od użytkownika dwie liczby całkowite dodatnie,
//a następnie wyznaczający ich największy wspólny dzielnik.

int main() {

	int x, y, a, b;
	cout << "dodaj pierwszu liczbu calkowitu: ";
	cin >> a;
	cout << "dodaj drugu liczbu calkowitu: ";
	cin >> b;
	x = a;
	y = b;

	while (x!=y)
	{
		if (x > y) {
			x -= y;
		}
		else
		{
			y -= x;
		};
	}
	cout << "NWD liczb " << a << " i " << b << " = " << x << endl;


	return 0;
}