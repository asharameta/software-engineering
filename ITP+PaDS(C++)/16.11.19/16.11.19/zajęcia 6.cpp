//#include<iostream>
//using namespace std;
//
////Napisać program pobierający od użytkownika wartości całkowite aż do podania wartości 0
////kończącej pobieranie i wypisujący te pary kolejno podawanych liczb,
////dla których suma wartości pary jest mniejsza od największej z dotychczas podanych wartości,
////oraz wypisujący ile było takich par (końcowe zero nie jest brane pod uwagę;
////przykład: dla ciągu wartości 4,1,2,3,-1,6,5,0 wypisane mają być pary: 1,2; 3,-1; -1,6 oraz informacja że były 3 takie pary). 
//
//int main() {
//
//	int war1=0,war2=0;
//	int max = 0;
//	int count = 0;
//	while (true)
//	{
//		war1 = war2;
//		cout << "Podaj wartosc calkowite:";
//		cin >> war2;
//		if (war2 == 0) break;
//		if (war2>max)
//		{
//			max=war2;
//		}
//		if (war1 + war2 < max)
//		{
//			count++;
//			cout << war1 << " " << war2 << endl;
//		}
//	}
//	cout << "ilosc par liczb suma ktorych nie wieksza od maxymalney liczby = "<<count << endl;
//}