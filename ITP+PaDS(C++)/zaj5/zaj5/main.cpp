#include<iostream>
#include"head.h"
using namespace std;



int main()
{
	Stos st;
	Stos* sts = nullptr;
	int n;
	cout << "Podaj granice stosu: "; cin >> n;
	int A;
	for (int i = 0; i < n; i++)
	{
		cout << "Podaj " << i + 1 << " liczbe stosu: "; cin>>A;
		st.add(A, &sts);
	}
	cout << endl;
	/// 
	cout << "Stack: " << endl;
	st.show(sts);
	cout << "Elementow stosa: " << st.GetSize() << endl;
	/// ///////////
	int B;
	cout << "Podaj element do usuwania: "; cin >> B;
	st.pop(B, &sts);
	cout << "Stack: " << endl;
	st.show(sts);
	cout << endl;

	return 0;
}