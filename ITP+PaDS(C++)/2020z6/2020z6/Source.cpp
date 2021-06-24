#include<iostream>
#include"Source.h"
using namespace std;


Sznur::~Sznur()
{
	while (head!=nullptr)
	{
		Node* killer = head;
		head = head->pNext;
		delete killer;
		size--;
	}
}
void Sznur::wstaw(int A)
{
	Node* pred = nullptr;
	Node* succ = head;
	while (succ!=nullptr)
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
void Sznur::wypisz()
{
	if (size==0)
	{
		cout << "Sznur jest pusty:(" << endl;
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
void Sznur::usun(unsigned const M, unsigned const N)
{
	Node* curr = head;
	tail = curr;
	for (int i = 0; i < counter; i++)
	{
		curr = curr->pNext;
		tail = tail->pNext;
	}
	if (curr==nullptr)
	{
		return;
	}
	
	if (M==1)
	{
		tail->pNext = curr->pNext;
		Node* killer = curr;
		curr = curr->pNext;
		delete killer;
		size--;
	}
	else
	{
		for (int k = 1; k < M; k++)
		{
			if (curr == nullptr)
				return;
			curr = curr->pNext;
			if (k == (M - 1))
			{
				tail->pNext = curr->pNext;
				Node* killer = curr;
				curr = curr->pNext;
				delete killer;
				size--;
			}
			counter++;
		}
	}
	if (counter==0)
	{
		head = curr;
		tail = curr;
	}
	if (N==1)
	{
		if (curr == nullptr)
			return;
		tail->pNext = curr->pNext;
		Node* killer = curr;
		curr = curr->pNext;
		delete killer;
		size--;
	}
	else
	{
		for (int j = 1; j < N; j++)
		{
			if (curr == nullptr)
				return;
			curr = curr->pNext;
			tail = tail->pNext;
			if (j == (N - 1))
			{
				tail->pNext = curr->pNext;
				Node* killer = curr;
				curr = curr->pNext;
				delete killer;
				size--;
			}
			counter++;
		}
	}
	if (counter == 0)
	{
		head = curr;
		tail = curr;
	}
	if (curr == nullptr)
	{
		return;
	}
	usun(M,N);

}