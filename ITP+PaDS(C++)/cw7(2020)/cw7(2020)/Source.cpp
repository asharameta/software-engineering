#include<iostream>
#include"Head.h"
using namespace std;

sznur::~sznur()
{
	Box* killer;
	while (head != nullptr)
	{
		killer = head;
		head = head->pNext;
		delete killer;
	}
}


void sznur::wypisz()
{
	Box* show = head;
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
	if (head==nullptr)
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
	Box* pred = nullptr;
	Box* succ = head;
	while (succ != nullptr)
	{
		pred = succ;
		succ = succ->pNext;
	}
	Box* creator = new Box(A, succ);
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

void sznur::usunFragmenty(unsigned const  P)///эта функция для доделки/переделки
{

	Box* cur = head;
	for (unsigned q = 0; q < counter; ++q) {
		cur = cur->pNext;
	}
	tail = cur;
	if (counter)
		cur = cur->pNext;

	for (unsigned i = 0; i < P; ++i) {
		if (cur != nullptr) {
			tail->pNext = cur->pNext;
			Box* temp = cur;
			cur = cur->pNext;
			delete temp;
			--size;
			continue;
		}
		return;
	}

	if (counter == 0)
		head = cur;

	Box* temp = cur;
	if (temp->pNext->data > temp->data) {
		if (counter)
			++counter;
		while (temp->pNext->data > temp->data) {
			if (head == cur)
				head = temp;
			temp = temp->pNext;
			++counter;
		}
	}

	usunFragmenty(P);

}


void sznur::pop_front()
{
	Box* pop = head;
	head = head->pNext;
	delete pop;
	size--;
}
