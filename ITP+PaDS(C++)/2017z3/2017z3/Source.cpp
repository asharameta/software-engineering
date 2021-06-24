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
	Node* curr = head;
	tail = curr;

	for (int i = 0; i < counter; i++)
	{
		curr = curr->pNext;
		if (i)
		{
			tail = tail->pNext;
		}
	}
	if (curr == nullptr)
		return;

	if (curr->pNext->pNext != nullptr)
	{
		if ((curr->value-1)==curr->pNext->value)
		{
			tail->pNext = curr->pNext;
			Node* killer = curr;
			curr = curr->pNext;
			delete killer;
			size--;
			if (!counter)
			{
				head = curr;
				tail = curr;
			}
			counter+=2;
		}
		else
		{
			for (unsigned i = 0; i < 3; i++)
			{
				if (i==0 || i==2)
				{
					if (head==tail && !counter)
					{
						tail->pNext = curr->pNext;
						Node* killer = curr;
						curr = curr->pNext;
						delete killer;
						size--;
						if (!counter)
						{
							head = curr;
							tail = curr;
						}
					}
					else
					{
						tail->pNext = curr->pNext;
						Node* killer = curr;
						curr = curr->pNext;
						delete killer;
						size--;
						if (tail->pNext !=curr)
						{
							head = curr;
						}
						if (curr == nullptr)
							return;
						curr = curr->pNext;
						tail = tail->pNext;
					}
					
				}
			}
			counter++;
		}
	}
	else return;

	usun();
}