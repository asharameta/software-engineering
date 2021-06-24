#ifndef S_H
#define S_H

struct sznur
{
private:
	struct Node
	{
		int value;
		Node* pNext;
		Node(int v, Node*pN=nullptr) :value(v),pNext(pN) {}
	};
	Node* head = nullptr;
	Node* tail = nullptr;
	int size = 0;
	int counter = 0;
public:
	sznur() = default;
	~sznur();
	void wstaw(int);
	void wypisz();
	void usun(unsigned);
	void clear();
};

#endif // !S_H
