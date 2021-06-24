#ifndef SL_H
#define SL_H


#include<stdexcept>
using namespace std;



template<typename T>
struct sznur
{
private:
	struct Node
	{
		T value;
		Node* pNext;
		Node(T v, Node* pN=nullptr) :value(v), pNext(pN) {}
	};
	Node* head = nullptr;
	int Size = 0;
public:
	void wstaw(T);
	void wypisz();
	T pop();
	void clear();
	int size() const;
	~sznur();
	sznur() = default;
};

template<typename T>
void sznur<T>::wstaw(T A)
{
	Node* pred = nullptr;
	Node* succ = head;
	while (succ!=nullptr && succ->value<A)
	{
		pred = succ;
		succ = succ->pNext;
	}
	Node* creator = new int(A, succ);
	if (pred!=nullptr)
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
void sznur<T>::wypisz()
{
	if (Size == 0)
	{
		cout << "sznur jest pusty:(" << endl;
		return;
	}
	Node* show = head;
	while (show)
	{
		cout << show->value << "->";
		show = show->data;
	}
	cout << "|" << endl;
}


template<typename T>
T sznur<T>::pop()
{
	if (Size == 0)
	{
		cout << "sznur jest pusty:(" << endl;
		return;
	}
	T value = head->value;
	Node* killer = head;
	head = head->pNext;
	delete killer;
	size--;
	return value;
}




template<typename T>
void sznur<T>::clear()
{
	while (head!=nullptr)
	{
		Node* killer = head;
		head = head->pNext;
		delete killer;
		Size--;
	}
}


template<typename T>
int sznur<T>::size() const
{
	return Size;
}


template<typename T>
sznur<T>::~sznur()
{
	clear();
}

#endif // !SL_H

