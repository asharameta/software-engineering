#ifndef SList_H
#define SList_H

#include<iostream>
#include<string>
#include<fstream>
using namespace std;

template<typename T>
struct SortedList
{
private:
	struct Node
	{
		T value;
		Node* pNext=nullptr;
		Node(T v, Node*pN=nullptr) :value(v), pNext(pN) {}
	};
	Node* head = nullptr;
	int Size = 0;
public:
	SortedList() = default;
	~SortedList();
	void wstaw(T A);
	void wypisz();
	void clear();
	int size();
	T pop();

};


template<typename T>
T SortedList<T>::pop()
{
	T value = head->value;
	Node* killer = head;
	head = head->pNext;
	delete killer;
	Size--;
	return value;
}

template<typename T>
SortedList<T>::~SortedList()
{
	clear();
}

template<typename T>
int SortedList<T>::size()
{
	return Size;
}

template<typename T>
void SortedList<T>::wstaw(T A)
{
	Node* pred = nullptr;
	Node* succ = head;
	while (succ != nullptr && succ->value < A)
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
	Size++;
}


template<typename T>
void SortedList<T>::wypisz()
{
	Node* show = head;
	while (show)
	{
		cout << show->value << "->";
		show = show->pNext;
	}
	cout << "|" << endl;
}


template<typename T>
void SortedList<T>::clear()
{
	while (head != nullptr)
	{
		Node* killer = head;
		head = head->pNext;
		delete killer;
		Size--;
	}
}

#endif // !SList_H

