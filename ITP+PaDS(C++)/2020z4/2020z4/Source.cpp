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
	while (succ !=nullptr && succ->value>A)
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
void Sznur::usunCiagi(unsigned const S, unsigned const K)
{
	int sum = 0;
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
	sum = sum + curr->value;
	while (sum<=S)
	{
		if (curr!=nullptr)
		{
			tail->pNext = curr->pNext;
			Node* killer = curr;
			curr = curr->pNext;
			delete killer;
			size--;
			if (counter == 0)
				head = curr;
			if (curr==nullptr)
				return;
			sum = sum + curr->value;
		}
		else
		{
			head = curr;
			return;
		}
	}
	for (int i = 0; i < K; i++)
	{
		if (curr==nullptr || curr->pNext==nullptr)
		{
			return;
		}
		curr = curr->pNext;
		counter++;
	}

	if (counter==0)
	{
		head = curr;
	}
	usunCiagi(S,K);
}