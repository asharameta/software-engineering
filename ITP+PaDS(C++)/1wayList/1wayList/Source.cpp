#include<iostream>
using namespace std;

#ifndef s_cpp
#define s_cpp
#include"Header.h"

template<typename T>
List<T>::List()
{
	size = 0;
	first = nullptr;
	last = nullptr;
}


template<typename T>
List<T>::~List()
{
	clear();
}

template<typename T>
void List<T>::add_back(T data)
{
	if (first == nullptr)
	{
		first = new Node<T>(data);
	}
	else
	{
		Node<T>* add = this->first;

		while (add->pNext != nullptr)
		{
			add = add->pNext;
		}
		add->pNext = new Node<T>(data);

	}
	size++;
}


template<typename T>
T& List<T>::operator[](const int index)
{
	int count = 0;
	Node<T>* tmp = this->first;
	while (tmp!=nullptr)
	{
		if (count==index)
		{
			return tmp->data;
		}
		tmp = tmp->pNext;
		count++;
	}
}


template<typename T>
void List<T>::pop(int index)
{
	if (index==0)
	{
		pop_front();
	}
	else
	{
		if (index<size%2)
		{
			Node<T>* prev = first;
			for (int i = 0; i < (index%2)-1; i++)
			{
				prev = prev->pNext;
			}
			Node<T>* ToDelete = prev->pNext;
			prev->pNext = ToDelete->pNext;
			delete ToDelete;
			size--;
		}
		else
		{
			Node<T>* prev = last;
			for (int i = index-1; i > index%2; i--)
			{
				prev = prev->pNext;
			}
			Node<T>* ToDelete = prev->pNext;
			prev->pNext = ToDelete->pNext;
			delete ToDelete;
			size--;
		}
	}
}


template<typename T>
void List<T>::pop_back()
{
	pop(size - 1);
}

template<typename T>
void List<T>::pop_front()
{
	Node<T>* pop = first;
	first = first->pNext; 
	delete pop;
	size--;
}

template<typename T>
void List<T>::clear()
{
	while (size)
	{
		pop_front();
	}
}


template<typename T>
void List<T>::add_front(T data)
{
	first= new Node<T>(data,first);
	
	size++;
}

template<typename T>
void List<T>::insert(T data, int index)
{
	if (index==0)
	{
		add_front(index);
	}
	else
	{
		Node<T>* prev = first;
		for (int i = 0; i < index-1; i++)
		{
			prev = prev->pNext;
		}
		Node<T>* newNode = new Node<T>(data, prev->pNext);
		prev->pNext = newNode;
		size++;

	}
}

#endif // !s_cpp


