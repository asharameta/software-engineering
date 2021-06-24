//#include<iostream>
//#include<cstdlib>
//using namespace std;
//
//int main() {
//
//	int S, D, K, ile_skokow, ile_zmian;
//	double skok, droga;
//
//	cout << "Podaj D : ";
//	cin >> D;
//	cout << "Podaj S : ";
//	cin >> S;
//	cout << "Podaj K : ";
//	cin >> K;
//
//		D = 100 * D;
//		skok = S; droga = 0;
//		ile_skokow = 0; ile_zmian = 0;
//		while (droga < D && skok >= K)
//		{
//			droga = droga + skok; ile_skokow++;
//			if (ile_skokow%5==0)
//			{
//				ile_zmian++;
//				skok = ile_zmian/(ile_zmian+1.0)*skok;
//			}
//		}
//		if (droga>=D)
//		{
//			cout << "Tak, w " << ile_skokow << " skokach" << endl;
//		}
//		else
//		{
//			cout << "Nie" << endl;
//		}
//	return 0;
//}