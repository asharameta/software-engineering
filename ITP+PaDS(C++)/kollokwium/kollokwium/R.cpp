//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//
//	int r, i = 0;
//	int ans = 1;
//	int counter = 0;
//	cout << "Podaj R: " << endl;
//	cin >> r;
//	int tab[1000];
//
//	cout << "Podaj liczby:" << endl;
//	while (ans != 0) {
//		cin >> ans;
//		tab[i] = ans;
//		i++;
//		counter++;
//	}
//
//	cout << endl << "Tablica: " << endl;
//	for (i = 0; i < counter - 1; i++) {
//		cout << tab[i];
//	}
//
//	for (i = 0; i < counter - 1; i++) {
//		bool isTrue = false;
//		if (i + 3 <= counter - 1) {
//			if (tab[i] - tab[i + 1] <= 2 && tab[i] - tab[i + 1] >= -2) {
//				if (tab[i] - tab[i + 2] <= 2 && tab[i] - tab[i + 2] >= -2) {
//					if (tab[i + 1] - tab[i + 2] <= 2 && tab[i + 1] - tab[i + 2] >= -2) {
//						isTrue = true;
//					}
//				}
//			}
//		}
//		if (isTrue == true) {
//			cout << "(" << tab[i] << tab[i + 1] << tab[i + 2] << ")";
//		}
//	}
//
//	return 0;
//}