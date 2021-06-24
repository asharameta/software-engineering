#include<iostream>
#include<vector>
using namespace std;

class Hash
{
	int capacity;
	vector<int>* data;
public:
	Hash(int N) :capacity(N), data(new vector<int>[capacity]) {}

	void add(int x);

	void pop(int x);

	void search(int x);

	int key(int x) {
		return (x % capacity);
	}

	void print();
};


void Hash::add(int x)
{
	int index = key(x);
	for (int k = 0; k < data[index].size(); k++)
	{
		if (data[index][k] == x)
		{
			cout << "ta liczba juz jest w slowniku:)" << endl;
			return;
		}
	}
	data[index].push_back(x);
}


void Hash::search(int x)
{
	int index = key(x);
	for (int k = 0; k < data[index].size(); k++)
	{
		if (data[index][k] == x)
		{
			cout << "ta liczba znajduje sie pod indeksem: " << i << " na pozycji: " << k << endl;
			return;
		}
	}
	cout << "ten slownik nie posiada tej liczby:(" << endl; return;
}


void Hash::pop(int x)
{

	int index = key(x);

	vector<int>::iterator i= data[index].begin();
	while(i != data[index].end()) {
		if (*i == x)
			break;
		i++;
	}


	if (i != data[index].end())
		data[index].erase(i);
}


void Hash::print() {

	for (int i = 0; i < capacity; i++) {
		cout << i;
		for (auto it : data[i])
			cout << " --> " << it;
		cout << endl;
	}
}


int main()
{
	int a[] = { 17, 23, 1, 13, 35, 18, 43, 67, 27, 57 };
	int n = sizeof(a) / sizeof(a[0]);

	int N = 10;
	Hash h(N);

	for (int i = 0; i < n; i++)
		h.add(a[i]);

	h.print();

	h.add(43);

	cout << endl;

	h.search(27);
	cout << endl;
	h.search(12);
	cout << endl;
	h.search(13);
	cout << endl;


	h.pop(57);

	h.print();

	//h.displayHash();

	return 0;
}
