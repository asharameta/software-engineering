#ifndef L_H
#define L_H


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
	int size = 0;
public:
	sznur() = default;
	~sznur();
	void wstaw(T);
	void wypisz();
	void clear();
	int counter();
	T pop();
};

template<typename T>
sznur<T>::~sznur()
{
	clear();
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
	{
		pred->pNext = creator;
	}
	else
		head = creator;
	size++;
}


template<typename T>
void sznur<T>::wypisz()
{
	if (size==0)
	{
		cout << "sznur jest pusty." << endl;
		return;
	}
	Node* show = head;
	while (show)
	{
		cout << show->value << "->";
		show = show->value;
	}
	cout << "|" << endl;
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
int sznur<T>::counter()
{
	return size;
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


#endif // !L_H

