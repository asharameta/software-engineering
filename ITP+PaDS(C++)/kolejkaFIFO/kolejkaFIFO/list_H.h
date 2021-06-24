#ifndef K_H
#define K_H

#include<iostream>
using namespace std;

class queue
{
	class Node
	{
	public:
		int value;
		Node* pNext;
		Node(int v, Node*pN=nullptr) :value(v),pNext(pN) {}
	};
	Node* head = nullptr;
	Node* tail = nullptr;
	int size = 0;
public:
	queue() = default;
	queue(const queue&); // konstrukor kopujacy
	virtual ~queue();
	void push(int);
	void print();
	int pop();
	void clear();
	int counter();
	queue& operator=(const queue&);


};

#endif // !K_H
