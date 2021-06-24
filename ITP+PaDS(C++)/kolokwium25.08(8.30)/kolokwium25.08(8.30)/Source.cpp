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
	while (succ != nullptr /*&& succ->value > A*/)
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
	if (size == 0)
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

void sznur::clear()
{
	while (head != nullptr)
	{
		Node* killer = head;
		head = head->pNext;
		delete killer;
		size--;
	}
}

void sznur::przenies()
{

}

void sznur::usun(int K)
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
	int temp1 = 0;
	int temp4 = 0;
	if (curr != nullptr && curr->pNext != nullptr && curr->pNext->pNext != nullptr)
	{
		if (curr->value==curr->pNext->value&&curr->pNext->value==curr->pNext->pNext->value)
		{
			temp4 = curr->pNext->pNext->pNext->value;
			temp1 = curr->value;
			for (unsigned i = 0; i < 3; i++)
			{
				tail->pNext = curr->pNext;
				Node* killer = curr;
				curr = curr->pNext;
				delete killer;
				size--;
			}
			if ((temp1 - temp4) < K)
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
		else
		{
			counter += 3;
			usun(K);
		}
		
	}
	else return;

	usun(K);
}