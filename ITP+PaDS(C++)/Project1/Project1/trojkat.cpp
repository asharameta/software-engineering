//#include<iostream>
//#include<cmath>
//using namespace std;
//
////Napisać program, który pobiera od użytkownika trzy liczby całkowite oznaczające długości odcinków.
////Jeśli z podanych odcinków można zbudować trójkąt,
////to program oblicza pole tego trójkąta (ze wzoru Herona: pole trójkąta o bokach a,b,c to pierwiastek z liczby p(p-a)(p-b)(p-c),
////gdzie p - połowa sumy boków. W przeciwnym razie program wypisuje informację, że podane liczby nie mogą być bokami trójkąta.
//
//int main() {
//
//	int a, b, c, p;
//	float S;
//	cout << "Podaj dlugosc 'a': ";
//	cin >> a;
//	cout << "Podaj dlugosc 'b': ";
//	cin >> b;
//	cout << "Podaj dlugosc 'c': ";
//	cin >> c;
//	p = (a + b + c) / 2;
//	cout << p << endl;
//	if ((a + b) > c || (b+c)>a || (a+c)>b)
//	{
//		cout << "=================================" << endl;
//		cout << "moze byc trojkatem" << endl;
//		S = sqrt(p * ((p - a) * (p - b) * (p - c)));
//		cout << "Pole tego trojkata = " << S << endl;
//		cout << "=================================" << endl;
//
//	}
//	else
//	{
//		cout << "=================================" << endl;
//		cout << "To nie jest trojkat" << endl;
//	}
//	return 0;
//}