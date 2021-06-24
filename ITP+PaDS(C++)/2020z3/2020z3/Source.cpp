#include<iostream>
using namespace std;
#include"Source.h"

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
		cout << show->data << "->";
		show = show->pNext;
	}
	cout << "|" << endl;
}
void Sznur::wstaw(int A)
{
	Node* pred = nullptr;
	Node* succ = head;
	while (succ!=nullptr && succ->data>A)
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
void Sznur::usunPlus(unsigned const K)
{
	Node* curr = head;
	tail = curr;
	int q = 0;
	if (curr == nullptr)
		return;
	while (curr->data != curr->pNext->data)
	{
		curr = curr->pNext;
		if (q)
		{
			tail = tail->pNext;
		}
		q++;
		if (curr->pNext == nullptr)
			return;
	}
	
	int remember=0;
	if (curr != nullptr && curr->pNext != nullptr)
	{
		remember = curr->data;
		for (int i = 0; i < 2; i++)
		{
			tail->pNext = curr->pNext;
			Node* killer = curr;
			curr = curr->pNext;
			delete killer;
			size--;
		}
		if (tail->pNext != curr)
		{
			head = curr;
		}
		if (counter == 0 && head->pNext==curr)
		{
			head = curr;
			tail = curr;
		}
		if (tail->pNext == nullptr)
		{
			head = curr;
		}
		counter++;
	}
	else return;
	int count = 0,i=0;
	Node* temp = curr;
	if (temp != nullptr && temp->pNext != nullptr && temp->pNext->pNext != nullptr)
	{
		while (i != 3)
		{
			i++;
			if (temp->data >= remember-K)
			{
				count++;
				temp = temp->pNext;
			}
			else
			{
				temp = temp->pNext;
			}
		}
		if (3 == count)
		{
			while (i != 0)
			{
				i--;
				tail->pNext = curr->pNext;
				Node* killer = curr;
				curr = curr->pNext;
				delete killer;
				size--;
			}
			//head = curr;
			/*if (head != curr)
			{
				head = curr;
			}*/
		}
		else
		{
			tail = curr;
			//head = tail;
			usunPlus(K);
		}
		
	}
	else return;

	usunPlus(K);
}



void Sznur::przeniesParzyste()
{
	if (size < 3)
		return;

	Node* begin1 = nullptr;
	Node* end1 = nullptr;
	Node* begin3 = nullptr;
	Node* end3 = nullptr;
	Node* Popary = nullptr;
	Node* przedpary = nullptr;
	Node* p1 = head;
	Node* p2 = p1->pNext;

	while (p1 != nullptr && p2 != nullptr)
	{
		if (p1->data != p2->data)
		{
			p1->pNext = nullptr;
			if (begin3 == nullptr)
				begin3 = p1;
			else
				end3->pNext = p1;
			end3 = p1;


			//sznur 9,8,7,5,4,3,2  uzyska postać 9, 7, 4 || 8, 5, 3, 2

			if (head == p1)
				head = p2;
			else
				przedpary->pNext = p2;

			przedpary = p2;
			Popary = p2->pNext;
			p1 = Popary;
			if (p1 != nullptr)
				p2 = p1->pNext;
			else
				p2 = nullptr;

		}
		else
		{
			Popary = p2->pNext;
			if (p1 == head)
				head = Popary;
			else
				przedpary->pNext = Popary;

			p2->pNext = begin1;
			begin1 = p1;
			p1 = Popary;
			if (p1 != nullptr)
				p2 = p1->pNext;
			else
				p2 = nullptr;
		}
	}

	//------------- dla ostani elementa----------------
	Node* zabeg = nullptr;
	if (p1 != nullptr)
		zabeg = p1;
	else
		zabeg = przedpary;
	//----------------------------------------------------


	//--------------------Sprawdzenie----------------------
	Node* wolker = begin1;
	cout << endl;
	//9,9,9,8,8,6,6,6,6,5,5,5,5,2,2,1,1    ==  9,8,6,5,2,8,6,5,2,1,1,5,5,6,6,9,9
	cout << "begin 1" << endl;   //5,5,6,6,9,9
	while (wolker != nullptr)
	{
		cout << "->" << wolker->data;
		wolker = wolker->pNext;
	}
	cout << endl;
	cout << "begin 2" << endl; //8,6,5,2,1,1,
	Node* wolker2 = head;
	while (wolker2 != nullptr)
	{
		cout << "->" << wolker2->data;
		wolker2 = wolker2->pNext;
	}
	cout << endl;
	cout << "begin 3" << endl; //9,8,6,5,2
	Node* wolker3 = begin3;
	while (wolker3 != nullptr)
	{
		cout << "->" << wolker3->data;
		wolker3 = wolker3->pNext;
	}

	//----------------swiazek jednego sznura--------------------

	if (begin3 != nullptr)
	{

		//Przykład: dla sznura przechowującego liczby
//9,9,9,8,8,6,6,6,6,5,5,5,5,2,2,1,1 dostaniemy wynik 9,8,6,5,2,8,6,5,2,1,1,5,5,6,6,9,9, sznur 9,8,7,5,4,3,2
//uzyska postać 9,7,4,8,5,3,2, a sznur 3,3,2,2,1,1 postać 1,1,2,2,3,3.
		end3->pNext = head;
		head = begin3;
	}

	if (begin1 != nullptr)
	{
		//------MODIFIKACYJA------
		if (zabeg != nullptr)
			zabeg->pNext = begin1;
		else
			head = begin1;
	}
}