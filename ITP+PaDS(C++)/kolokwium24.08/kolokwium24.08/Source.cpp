#include<iostream>
using namespace std;
#include"Source.h"


sznur::~sznur()
{
	clear();
}
void sznur::wstaw(int A)
{
	Node* succ = head;
	Node* pred = nullptr;
	while (succ!=nullptr &&succ->value>A)
	{
		pred = succ;
		succ = succ->pNext;
	}
	Node* creator = new Node(A, succ);
	if (pred != nullptr)
		pred->pNext = creator;
	else
		head = creator;
	size++;
}
void sznur::wypisz()
{
	if (size==0)
	{
		cout << "sznur jest pusty:(" << endl;
		return;
	}
	Node* show = head;
	while (show)
	{
		cout << show->value << "->";
		show = show->pNext;
	}
	cout << "|" << endl;
}
void sznur::usun()
{
	if (size < 3)
		return;
	Node* curr = head;
	tail = curr;
	float sr = 0;
	for (unsigned i = 0; i < counter; i++)
	{
		curr = curr->pNext;
		if (i)
		{
			tail = tail->pNext;
		}
		
	}
	/*if (curr == nullptr)
		return;*/
	if (curr!=nullptr && curr->pNext!=nullptr && curr->pNext->pNext != nullptr)
	{
		sr = (((float)curr->value + (float)curr->pNext->pNext->value) / 2);
	}
	else return;

	if (sr!=curr->pNext->value)
	{
		curr = curr->pNext;
		if (counter)
		{
			tail = tail->pNext;
		}
		tail->pNext = curr->pNext;
		Node* killer = curr;
		curr = curr->pNext;
		delete killer;
		size--;
		counter += 2;
	}
	else
	{
		for (unsigned i = 0; i < 3; i++)
		{
			tail->pNext = curr->pNext;
			Node* killer = curr;
			curr = curr->pNext;
			delete killer;
			size--;
		}
		if (!counter)
		{
			head = curr;
		}
	}



	usun();
}
void sznur::clear()
{
	while (head!=nullptr)
	{
		Node* killer = head;
		head = head->pNext;
		delete killer;
		size--;
	}
}