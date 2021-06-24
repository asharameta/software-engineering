#include<iostream>
#include"Header.h"
using namespace std;

int main()
{
	List<int>lst;
	lst.add_back(1);
	lst.add_back(2);
	lst.add_back(3);
	lst.add_back(4);
	lst.add_back(5);
	
	cout << "Elements of List: " << endl;
	for (int i = 0; i < lst.GetSize(); i++)
	{
		cout << lst[i] << endl;
	}
	cout << endl;
	cout << "Amount elements: " << lst.GetSize() << endl;
	cout << endl;

	lst.pop(3);
	cout << "Elements of List after pop: " << endl;
	for (int i = 0; i < lst.GetSize(); i++)
	{
		cout << lst[i] << endl;
	}
	cout << endl;

	cout << "Amount elements after pop_back: " << lst.GetSize() << endl;
	/*cout << endl;
	cout << "Elements of List after pop: " << endl;
	for (int i = 0; i < lst.GetSize(); i++)
	{
		cout << lst[i] << endl;
	}*/

	return 0;
}