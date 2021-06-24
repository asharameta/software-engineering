#include<iostream>
using namespace std;
#include"Source.h"


sznur::~sznur()
{
	while (head!=nullptr)
	{
		Node* killer = head;
		head = head->pNext;
		delete killer;
		size--;
	}
}
void sznur::wstaw(int A)
{
	Node* pred = nullptr;
	Node* succ = head;
	while (succ!=nullptr && succ->value>A)
	{
		pred = succ;
		succ = succ->pNext;
	}
	Node* creator = new Node(A, succ);
	if (pred!=nullptr)
	{
		pred->pNext = creator;
	}
	else
	{
		head = creator;
	}
	size++;
}
void sznur::wypisz()
{
	if (size==0)
	{
		cout << "Sznur jest pusty:(" << endl;
		return;
	}
	Node* show = head;
	while (show)
	{
		cout << show->value <<"->";
		show = show->pNext;
	}
	cout << "|" << endl;
}
void sznur::usun()
{
	Node* curr = head;
	tail = curr;
	for (unsigned i = 0; i < counter; i++)
	{
		curr = curr->pNext;
		if (i)
		{
			tail = tail->pNext;
		}
	}
	if (curr == nullptr)
		return;
	int remember=0;
	if (curr->pNext != nullptr)
	{
		if (curr->value==curr->pNext->value)
		{
			remember = curr->value;
			for (unsigned i = 0; i < 2; i++)
			{
				tail->pNext = curr->pNext;
				Node* killer = curr;
				curr = curr->pNext;
				delete killer;
				size--;
			}
			if (!counter)
			{
				head = head->pNext;
			}
			//counter++;
		}
		else
		{
			counter+=2;
			//head = head->pNext;
			usun();
		}
		if (curr != nullptr)
		{
			if (remember == curr->value)
			{
				tail->pNext = curr->pNext;
				Node* killer = curr;
				curr = curr->pNext;
				delete killer;
				size--;
				if (!counter)
				{
					head = curr;
				}
				//counter++;
			}
		}
		else
		{
			return;
		}
	}
	else return;
	
	

	usun();
}