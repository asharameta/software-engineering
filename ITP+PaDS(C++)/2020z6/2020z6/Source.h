#ifndef H
#define H

struct Sznur
{
private:
	struct Node
	{
		int value;
		Node* pNext;
		Node(int v,Node*pN=nullptr) :value(v), pNext(pN){}
	};
	unsigned size = 0;
	unsigned counter = 0;
	Node* head = nullptr;
	Node* tail = nullptr;
public:
	Sznur() = default;
	~Sznur();
	void wstaw(int A);
	void wypisz();
	void usun(unsigned const M, unsigned const N);
};

#endif // !H

