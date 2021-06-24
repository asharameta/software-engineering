#ifndef S_H
#define S_H

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
	int size = 0;
public:
	void wstaw(T);
	void wypisz();
	T pop();
	void clear();
	~sznur();
	int Size();
	sznur() = default;

};


template<typename T>
int sznur<T>::Size()
{
	return size;
}

template<typename T>
void sznur<T>::wstaw(T A)
{
	Node* pred = nullptr;
	Node* succ = head;
	while (succ!=nullptr)
	{
		pred = succ;
		succ = succ->pNext;
	}
	Node* creator = new Node(A, succ);
	if (pred != nullptr)
		pred->pNext = creator;
	else
		head = creator;
	size++;
}

template<typename T>
void sznur<T>::wypisz()
{
	if (size==0)
	{
		cout << "sznur jest pusty:(" << endl;
		return;
	}
}

template<typename T>
T sznur<T>::pop()
{
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
	while (head != nullptr)
	{
		Node* killer = head;
		head = head->pNext;
		delete killer;
		size--;
	}
}

template<typename T>
sznur<T>::~sznur()
{
	clear();
}

#endif // !S_H

