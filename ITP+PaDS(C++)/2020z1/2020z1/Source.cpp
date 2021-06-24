#include<iostream>
#include"Header.h"
using namespace std;

sznur::~sznur()
{
	clear();
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
	/*Box* add = new Box(A);
	if (head == nullptr)
	{
		head = add;
		tail = add;
	}
	else
	{
		tail->pNext = add;
		tail = add;
	}
	size++;*/
	Node* pred = nullptr;
	Node* succ = head;
	while (succ != nullptr && succ->data>A)
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

void sznur::usun(unsigned const K)
{
	Node* curr = head;
	tail = curr;
	for (unsigned q = 0; q < counter; ++q) {
		curr = curr->pNext;
		if (q)
		{
			tail = tail->pNext;
		}
	}

	if (counter==1) {
		tail = tail->pNext;
		//curr = curr->pNext;
	}

	float sr;
	if (size>=3 && curr->pNext != nullptr && curr->pNext->pNext != NULL)
	{
		sr = (float)(((float)curr->data + (float)curr->pNext->data + (float)curr->pNext->pNext->data) / 3);
	}
	else
	{
		return;
	}

	if (sr >= K)
	{
		curr = curr->pNext;
		for (unsigned k = 0; k < 2; k++)
		{
			if (curr == nullptr)
				return;
			tail->pNext = curr->pNext;
			Node* killer = curr;
			curr = curr->pNext;
			delete killer;
			size--;
		}
		counter++;
	}
	else
	{
		if (curr == nullptr)
			return;
		tail->pNext = curr->pNext;
		Node* killer = curr;
		curr = curr->pNext;
		delete killer;
		size--;
		if (counter == 0)
			head = curr;
		counter++;
	}
	
	
	if (curr == nullptr)
		return;

	if (sr < K)
	{
		counter++;
	}

	usun(K);

	/*Box* curr = head;
	for (unsigned i = 0; i < counter; i++)
	{
		curr = curr->pNext;
		if (i)
		{
			tail = tail->pNext;
		}
	}
	if (counter<2)
	{
		tail = curr;
	}
	if (counter)
	{
		curr = curr->pNext;
	}
	if (tail->pNext==nullptr)
	{
		return;
	}
	if (curr == nullptr)
		return;
	float sr;
		sr = (float)(((float)curr->data + (float)curr->pNext->data + (float)curr->pNext->pNext->data) / 3);
	if (sr>=K)
	{
		curr = curr->pNext;
		for (unsigned k = 0; k < 2; k++)
		{
			if (curr == nullptr)
				return;
			tail->pNext = curr->pNext;
			Box* killer = curr;
			curr = curr->pNext;
			delete killer;
			size--;
		}
		if (counter)
		{
			curr = curr->pNext;
		}
		counter++;
	}
	else
	{
		if (curr == nullptr)
			return;
		tail->pNext = curr->pNext;
		Box* killer = curr;
		curr = curr->pNext;
		delete killer;
		size--;
		if (counter == 0) {
			head = curr;
			counter++;
		}
		else
		{
			counter=counter+2;
		}
	}
	

	if (curr == nullptr)
		return;

	usun(K);*/
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
	if (size < 3)
		return;
	int sr = 0;
	if (size%2!=0)
	{
		sr = (size / 2);
	}
	cout << "sr = " << sr << endl;
	Node* srodkowy = head;
	for (unsigned i = 0; i < sr; i++)
	{
		srodkowy = srodkowy->pNext;
	}
	cout << "srodkowy: " << srodkowy->data << endl;
	
	/*if (size < 2)
		return;
	Node* after = nullptr;
	Node* before = nullptr;
	Node* begin = nullptr;
	Node* end = nullptr;
	Node* begin2 = nullptr;
	Node* end2 = nullptr;
	Node* p1 = head;
	Node* p2 = p1->pNext;
	
	while (p1!=nullptr && p2!=nullptr)
	{
		if (p1->data!=p2->data)
		{
			before = p1;
			before->pNext = p2->pNext;

			after = p2->pNext;

			p2->pNext = begin2;
			begin2 = p2;
			
			p1 = after;
			if (p1 != nullptr)
				p2 = p1->pNext;
			else
				p2 = nullptr;
		}
		else
		{
			if (p1 == head)
			{
				head = p2->pNext;
				before = head;
			}
			else
				before->pNext = p2->pNext;

			after = p2->pNext;

			if (begin == nullptr)
				begin = p1;
			else
				end->pNext = p1;

			end = p1;
			end = end->pNext;

			p1 = after;
			if (p1 != nullptr)
				p2 = p1->pNext;
			else
				p2 = nullptr;
		}
	}

	if (begin!=nullptr)
	{
		Node* curr;
		end->pNext = head;
		curr = begin;
		Node* pred = nullptr;
		Node* succ = begin;
		while (succ != nullptr)
		{
			pred = succ;
			succ = succ->pNext;
		}
		pred->pNext = begin2;
		head = begin;
	}
	else
	{
		Node* succ = head;
		Node* pred = nullptr;
		while (succ != nullptr)
		{
			pred = succ;
			succ = succ->pNext;
		}
		pred->pNext = begin2;
	}*/
}

