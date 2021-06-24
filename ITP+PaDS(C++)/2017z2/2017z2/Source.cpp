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
	while (succ!=nullptr && succ->value<A)
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
	int trzeci;
	if (curr->pNext->pNext->pNext != nullptr /*&& curr->pNext->pNext !=nullptr && curr!=nullptr && curr->pNext!=nullptr*/)
	{
		trzeci = curr->pNext->pNext->value;
		if ((trzeci%curr->value)==0 && (trzeci % curr->pNext->value)==0)
		{
			for (int i = 0; i < 4; i++)
			{
				tail->pNext = curr->pNext;
				Node* killer = curr;
				curr = curr->pNext;
				delete killer;
				size--;
			}
				head = curr;
				tail = curr;
		}
		else
		{
			Node* killer = curr->pNext->pNext->pNext;
			curr->pNext->pNext->pNext = curr->pNext->pNext->pNext->pNext;
			delete killer;
			size--;
			counter+=3;
		}
	}
	else return;
	usun();
}

void sznur::przeniesZkroriem(unsigned const K)
{
	Node* pred = nullptr;
	Node* succ = head;
	Node* remember;
	for (int i = 0; i < counter; i++)
	{
		succ = succ->pNext;
	}

	while (K)
	{
		pred = succ;
		succ = succ->pNext;
	}
	remember = succ;
	remember->pNext = nullptr;

	
	
	

	przeniesZkroriem(K);
}