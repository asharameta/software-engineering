#include<iostream>
#include"Source.h"
using namespace std;



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
		cout << show->data << "->";
		show = show->pNext;
	}
	cout << "|" << endl;
}


void sznur::usun(unsigned const M, float sr)
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
	if (!sr)
	{
		sr = 0;
		int licz = 0, licz2 = 0;
		while (curr != nullptr)
		{
			licz++;
			if (licz % M == 0)
			{
				licz2++;
				sr += curr->data;
			}
			curr = curr->pNext;
		}
		sr = sr / licz2;
		curr = head;
	}

	if (curr->data > sr)
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
	}
	else counter++;
	

	usun(M, sr);
}


void sznur::przeniesTrojki()
{
	if (size < 3)
		return;
	Node* before = nullptr;
	Node* after = nullptr;
	Node* p1 = head;
	Node* p2 = p1->pNext;
	Node* p3 = p2->pNext;
	Node* begin = nullptr;
	Node* end = nullptr;

	while (p3!=nullptr)
	{
		if (p1->data!=p2->data && p2->data!=p3->data)
		{
			if (p1 == head)
			{
				head = p3->pNext;
				before = head;
			}
			else
				before->pNext = p3->pNext;

			//----begin
			p1->pNext = nullptr;
			p2->pNext = nullptr;
			after = p3->pNext;
			p3->pNext = nullptr;

			if (begin == nullptr)
				begin = p3;
			else
				end->pNext = p3;
			end = p3;

			end->pNext = p2;
			end = p2;

			end->pNext = p1;
			end = p1;
			//----
			p1 = after;
			if (p1 != nullptr)
				p2 = p1->pNext;
			else
				p2 = nullptr;
			if (p2 != nullptr)
				p3 = p2->pNext;
			else
				p3 = nullptr;
		}
		else
		{
			before = p3;
			p1 = p3->pNext;
			if (p1 != nullptr)
				p2 = p1->pNext;
			else
				p2 = nullptr;
			if (p2 != nullptr)
				p3 = p2->pNext;
			else
				p3 = nullptr;

		}

	}

	Node* curr = head;
	Node* pred = nullptr;
	while (curr != nullptr)
	{
		pred = curr;
		curr = curr->pNext;
	}
	pred->pNext = begin;
}

