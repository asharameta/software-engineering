#include<iostream>
using namespace std;
#ifndef H
#define H

struct sznur
{
private:
	struct Node
	{
		int data;
		Node* pNext;
		Node(int D, Node* next = nullptr) :data(D), pNext(next) {}
		
	};
	Node* head = nullptr;
	Node* tail = nullptr;
	unsigned size = 0;
	unsigned counter = 0;

public:
	sznur() = default;
	~sznur();
	void wypisz();
	void wstaw(int A);
	void usun(unsigned const);
	void clear();
	void przenies();

};


#endif // !H


