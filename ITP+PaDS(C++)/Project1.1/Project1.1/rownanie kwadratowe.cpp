//#include<iostream>
//#include<cmath>
//using namespace std;
//
////Napisać program rozwiązujący równanie kwadratowe (postaci ax2+bx+c=0) o podanych przez użytkownika współczynnikach całkowitych. 
//
//int main() {
//
//	int a, b, c;
//	float D, x1, x2;
//	cout << "dodaj liczbu 'a': ";
//	cin >> a;
//	cout << "dodaj liczbu 'b': ";
//	cin >> b;
//	cout << "dodaj liczbu 'c': ";
//	cin >> c;
//
//	D = pow(b, 2) - (4 * a * c);
//	cout << "D = " << D << endl;
//	if (D<0)
//	{
//		cout << "To rownanie nie ma rozwazania :(\nbo D<0" << endl;
//	}
//	else if (D ==0)
//	{
//		x1 = -b / 2 * a;
//		cout << "D = 0, on ma tylko 1 pierwiastek = " << x1 << endl;
//	}
//	else
//	{
//		x1 = (-b + pow(D, 1.0 / 2)) / 2 * a;
//		x2 = (-b - pow(D, 1.0 / 2)) / 2 * a;
//		cout << "D>0, on ma 2 pierwiastka: " << endl;
//		cout << "x1 = " << x1 << "\nx2 = " << x2 << endl;
//	}
// return 0;
//}