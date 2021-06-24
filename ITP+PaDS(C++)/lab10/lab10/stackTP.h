#ifndef stackTP_H
#define stackTP_H

#include<iostream>
using namespace std;
#include<stdexcept>

template<typename T>
class StackTP
{
public:
	StackTP();
	//~StackTP();
	StackTP<T>& operator+(const T& v);
	T operator--();
	T operator[];
	void print();
private:
	template<typename V>
	struct Node
	{
		V value;
		Node<V>* pNext;
		Node(const V& v, Node<V>* pN) :value(v), pNext(pN) {}
	};
	Node<T>* top;
	int counter;
};

#endif // !stackTP_H

template<typename T>
inline StackTP<T>::StackTP()
{
	top = nullptr;
	counter = 0;
}

template<typename T>
inline StackTP<T>& StackTP<T>::operator+(const T& v)
{
	top = new Node<T>(v, top);
	counter++;
	return *this;
}

template<typename T>
inline T StackTP<T>::operator--()
{
	Node<T>* killer = top;
	T value = killer->value;
	top = killer->pNext;
	delete killer;
	counter--;
	return value;
}

template<typename T>
inline void StackTP<T>::print()
{
	Node<T>* iterator = top;
	while (iterator != nullptr)
	{
		cout << iterator->value << " ";
		iterator = iterator->pNext;
	}
	cout << "|" << endl;
}
