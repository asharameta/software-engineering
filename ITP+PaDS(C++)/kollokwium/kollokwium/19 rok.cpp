#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, const char* argv[]) {

	int k, i = 0;
	int ans = 1;
	int counter = 0;
	cout << "Podaj K: " << endl;
	cin >> k;
	int tab[1000];

	cout << "Podaj liczby:" << endl;
	while (ans != 0) {
		cin >> ans;
		tab[i] = ans;
		i++;
		counter++;
	}

	cout << endl << "Tablica: " << endl;
	for (i = 0; i < counter - 1; i++) {
		cout << tab[i];
	}

	for (i = 0; i < counter - 1; i++) {
		if (i + 3 < counter - 1) {
			int nC = 0;
			if (tab[i] % k == 0) {
				nC++;
			}
			if (tab[i + 1] % k == 0) {
				nC++;
			}
			if (tab[i + 2] % k == 0) {
				nC++;
			}
			if (tab[i + 3] % k == 0) {
				nC++;
			}
			if (nC == 2) {
				cout << "(" << tab[i] << tab[i + 1] << tab[i + 2] << tab[i + 3] << ")";
			}
		}
	}
	return 0;
}