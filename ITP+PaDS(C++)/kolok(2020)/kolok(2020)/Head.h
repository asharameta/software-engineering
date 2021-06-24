#include<iostream>
using namespace std;
#ifndef H
#define H

struct sznur
{
private:
	struct Box
	{
		int data;
		Box* pNext;
		Box(int D, Box* next = nullptr) :data(D), pNext(next) {}
	};
	Box* head = nullptr;
	Box* tail = nullptr;
	unsigned size = 0;
	unsigned counter = 0;

public:
	sznur() = default;
	~sznur();
	void wypisz();
	void wstaw(int A);
	void usunFragmenty(unsigned const P);
	void pop_front();

};


#endif // !H
