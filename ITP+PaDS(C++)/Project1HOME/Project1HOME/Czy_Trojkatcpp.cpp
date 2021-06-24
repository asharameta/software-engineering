//#include<iostream>
//using namespace std;
//
//
//
//void Czy_Trojkat(int tab[], int Pole, int count, bool &CzyTrojkat, int &a, int &b, int &c);
//void Pole_Trojkata(bool CzyTrojkat, int a, int b, int Pole);
//void Obwod_Trojkata(bool CzyTrojkat, int a, int b, int c, int Obwod);
//
//
//
//int main() {
//	int num, a=0,b=0,c=0;
//	int Pole = 0, Obwod=0;
//	bool CzyTrojkat=false;
//	int* tab = new int[1];
//	int count = 0;
//	cout << "Podaj liczby" << endl;
//	for (int i = 0; ; i++)
//	{
//		cin >> num;
//		if (num == 0)break;
//		tab[i] = num;
//		int* tabtemp = new int[i + 1];
//		for (int k = 0; k < i+1; k++)
//		{
//			tabtemp[k] = tab[k];
//		}
//		delete[]tab;
//		tab = new int[i + 2];
//		for (int k = 0; k < i+1; k++)
//		{
//			tab[k] = tabtemp[k];
//		}
//		delete[]tabtemp;
//		count++;
//	}
//
//	Czy_Trojkat(tab,Pole, count, CzyTrojkat,a,b,c);
//	Obwod_Trojkata(CzyTrojkat, a, b, c, Obwod);
//
//
//}
//
//
//
//
//void Czy_Trojkat(int tab[], int Pole, int count, bool &CzyTrojkat,int &a, int &b, int &c) {
//
//
//	if (count<3)
//	{
//		cout << "Sprobuj ponownie:)" << endl;
//	}
//
//	for (int i = 0; i < count; i++)
//	{
//		if (i == 3&&i!=0)
//		{
//			a = tab[i - 1];
//			cout << "a=(" << a << ")" << endl;
//		}
//		if (i == 6 && i != 0)
//		{
//			b = tab[i - 1];
//			cout << "b=(" << b << ")" << endl;
//		}
//		if (i == 9 && i != 0)
//		{
//			c = tab[i - 1];
//			cout << "c=(" << c << ")" << endl;
//		}
//	}
//	if (a < (b + c) &&
//		b < (a + c) &&
//		c < (a + b))
//	{
//		cout << "Z podanych bokow mozna zbudowac trojkat." << endl;
//		CzyTrojkat = true;
//	}
//	else
//	{
//		cout << "Z podanych bokow nie mozna zbudowac trojkata" << endl;
//		CzyTrojkat = false;
//	}
//	Pole_Trojkata(CzyTrojkat, a, b, Pole);
//}
//
//
//
//
//void Pole_Trojkata(bool CzyTrojkat,int a, int b, int Pole) {
//
//	if (CzyTrojkat==true)
//	{
//		Pole = (a * b) / 2;
//		cout << "Pole trojkata = " << Pole << endl;
//	}
//	else
//	{
//		cout<<"Z podanych bokow nie mozna obliczyc pole trojkata" << endl;
//	}
//}
//
//
//
//
//void Obwod_Trojkata(bool CzyTrojkat, int a, int b, int c, int Obwod) {
//
//
//
//	if (CzyTrojkat == true)
//	{
//		Obwod = a+b+c;
//		cout << "Pole trojkata = " << Obwod << endl;
//	}
//	else
//	{
//		cout << "Z podanych bokow nie mozna obliczyc obwod trojkata" << endl;
//	}
//
//
//}