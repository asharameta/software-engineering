#include<iostream>
using namespace std;
#include"Header.h"

int main()
{
	List lst;
	lst.push(1);
	lst.push(3);
	lst.push(2);
	lst.push(5);
	lst.push(4);

	lst.print(); // 1 2 3 4 5
	cout << "Size: "<<lst.GetSize() << endl; //5
	cout << "Pop: " << lst.pop_front() << endl; //1
	lst.print(); //2 3 4 5
	cout << "Size: " << lst.GetSize() << endl; //4

	List lst2 = lst;

	lst2.print(); //2 3 4 5
	cout << "Size2: " << lst2.GetSize() << endl; //4
	lst2.push(1);
	lst2.print(); //1 2 3 4 5
	cout << "Size2: " << lst2.GetSize() << endl;

	lst = lst2;
	cout << "Size: " << lst.GetSize() << endl;
	/*int A;
	for  (int i = 0; ;i++)
	{
		cout << "Podaj liczby do listy:     0 konczy" << endl;
		cin >> A;
		if (A == 0)break;
		lst.push_back(A);
	}
	cout << "List: " << endl;
	lst.print();
	cout << endl;
	cout << "Pop_front: " << lst.pop_front() << endl;
	cout << "List after pop_front: " << endl;
	lst.print();
	cout <<"\nRozmiar: "<< lst.GetSize() << endl;
	cout << endl;
	int index;
	cout << "which one for delete?" << endl;
	cin >> index;
		lst.removeAt(index);
	cout << "List after removeAt all: " << endl;
	lst.print();*/

	/*cout << "funkcja removeAt() dziala" << endl;
	lst.removeAt();

	cout << "Po funkcji removeAt() List: " << endl;
	lst.print();*/


	return 0;
}