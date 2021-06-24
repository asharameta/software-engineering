#include"Source.cpp"
#include<iostream>
using namespace std;

#ifndef Head_H
#define Head_H

template<typename T>
struct List
{
public:
	List();
	~List();

	
	void add_back(T data);
	int GetSize() { return size; }
	T& operator[](const int index);
	void pop_front();
	void clear();
	void add_front(T data);
	void insert(T data, int index);
	void pop(int index);
	void pop_back();


private:


	template<typename T>
	struct Node
	{
		Node* pNext;
		T data;

		Node(T data = T(), Node* pNext = nullptr)
		{
			this->data = data;
			this->pNext = pNext;
		}
	};
	int size;
	Node<T>* first;
	Node<T>* last;
};

#include"Source.cpp"
#endif // !Head_H






