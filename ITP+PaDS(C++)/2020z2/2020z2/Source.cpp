#include<iostream>
using namespace std;
#include"Source.h"



Sznur::~Sznur()
{
	while (head != nullptr)
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
	while (succ!=nullptr && succ->Data>A)
	{
		pred = succ;
		succ = succ->pNext;
	}
	Node* creator = new Node(A, succ);
		if (pred!=nullptr)
		{
			pred->pNext=creator;
		}
		else
		{
			head = creator;
		}
		size++;
}
void Sznur::wypisz()
{
	Node* show = head;
	if (size==0)
	{
		cout << "Sznur jest pusty:(" << endl;
		return;
	}
	while (show)
	{
		cout << show->Data << "->";
		show = show->pNext;
	}
	cout << "|" << endl;

}
void Sznur::usun()
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
	if (curr == nullptr)
		return;
	int sum1, sum2;
	if (curr->pNext != nullptr && curr->pNext->pNext != nullptr && curr->pNext->pNext->pNext != nullptr)
	{
		sum1 = curr->Data + curr->pNext->pNext->pNext->Data;
		sum2 = curr->pNext->Data + curr->pNext->pNext->Data;
	}
	else return;
	
	//cout << "Sum1: " << sum1 << "\nSum2: " << sum2 << endl;
	if (sum1 == sum2)
	{
		for (int i = 0; i < 4; i++)
		{
			tail->pNext = curr->pNext;
			Node* killer = curr;
			curr = curr->pNext;
			delete killer;
			size--;
		}
		if (counter == 0)
			head = curr;
	}
	else
	{
		for (int i = 0; i < 4; i++)
		{
			if (curr == nullptr)
				return;
			tail->pNext = curr->pNext;
			Node* killer = curr;
			curr = curr->pNext;
			delete killer;
			size--;
			if (counter == 0) {
				head = curr;
				tail = curr;
			}
			counter++;
			while (i<2)
			{
				curr = curr->pNext;
				i++;
			}
			if (counter==3)
			{
				tail = tail->pNext;
			}
			tail = tail->pNext;
		}
		
		
	}
	
	
	usun();
}

void Sznur::przenies()
{
	Node* before = nullptr;
	Node* after = nullptr;
	Node* begin1 = nullptr;
	Node* end1 = nullptr;
	Node* begin2 = nullptr;
	Node* end2 = nullptr;
	Node* p1 = head;
	Node* p2 = p1->pNext;
	while (p1 != nullptr && p2 != nullptr)
	{
		if (p1->Data == p2->Data)
		{
			if (p1 == head)
			{
				head = p2->pNext;
				before = p2->pNext;
			}
			else
				before->pNext = p2->pNext;

			after = p2->pNext;

			p1->pNext = nullptr;
			p2->pNext = nullptr;

			if (begin1==nullptr)
			{
				begin1 = p1;
				begin1->pNext = p2;
				end1 = p2;
			}
			else
			{
				end1->pNext = p1;
				end1 = end1->pNext;
				end1->pNext = p2;
				end1 = end1->pNext;
			}

			//Node* curr = end1;

			p1 = after;
			if (p1 != nullptr)
				p2 = p1->pNext;
			else
				p2 = nullptr;
		}
		else
		{
			before = p2;
			before->pNext = p2->pNext;

			after = p2->pNext;

			p1->pNext = begin2;
			begin2 = p1;

			p1 = after;
			if (p1 != nullptr)
				p2 = p1->pNext;
			else
				p2 = nullptr;
		}


	}
	Node* prev = nullptr, * next = nullptr;
	while (begin1 != nullptr)
	{
		next = begin1->pNext;
		begin1->pNext = prev;
		prev = begin1;
		begin1 = next;
	}
	begin1 = prev;
	while (end1 != nullptr)
	{
		next = end1;
		end1 = end1->pNext;
	}
	end1 = next;

	Node* prev2 = nullptr, * next2 = nullptr;
	while (begin2 != nullptr)
	{
		next2 = begin2->pNext;
		begin2->pNext = prev2;
		prev2 = begin2;
		begin2 = next2;
	}
	begin2 = prev2;

	cout<< "begin1 = ";
	while (begin1!=nullptr)
	{
		cout << begin1->Data <<"->";
		begin1 = begin1->pNext;
	}
	cout << "|" << endl;
	cout << endl;
	cout << "begin2 = ";
	while (begin2!=nullptr)
	{
		cout << begin2->Data <<"->";
		begin2 = begin2->pNext;
	}
	cout << "|" << endl;


	/*if (begin1 != nullptr)
	{
		Node* curr;
		end1->pNext = head;
		curr = begin1;
		Node* pred = nullptr;
		Node* succ = begin1;
		while (succ != nullptr)
		{
			pred = succ;
			succ = succ->pNext;
		}
		pred->pNext = begin2;
		head = begin1;
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

