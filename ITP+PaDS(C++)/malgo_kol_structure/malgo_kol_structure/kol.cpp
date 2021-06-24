#include<iostream>
#include"kol.h"
using namespace std;

sznur::~sznur()
{
	while (head != NULL)
	{
		Node* killer = head;
		head = head->pNext;
		delete killer;
		size--;
	}
}


void sznur::wypisz()
{
	Node* show = head;
	if (size == 0)
	{
		cout << "sznur pusty" << endl;
		return;
	}
	while (show)
	{
		cout << show->data << "->";
		show = show->pNext;
	}
	cout << "|" << endl;
}

void sznur::wstaw(int A)
{
	Node* pred = nullptr;
	Node* succ = head;
	while (succ != nullptr && succ->data > A)
	{
		pred = succ;
		succ = succ->pNext;
	}
	Node* creator = new Node(A, succ);
	if (pred != nullptr)
	{
		pred->pNext = creator;
	}
	else
	{
		head = creator;
	}
	size++;
}

