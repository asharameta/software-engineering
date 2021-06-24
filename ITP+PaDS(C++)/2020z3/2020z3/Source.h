#ifndef H
#define H


struct Sznur
{
private:
	struct Node
	{
		int data;
		Node* pNext;
		Node(int D, Node* pN=nullptr) :data(D),pNext(pN){}
	};
	Node* head = nullptr;
	Node* tail = nullptr;
	unsigned size = 0;
	unsigned counter = 0;
public:
	Sznur() = default;
	~Sznur();
	void wypisz();
	void wstaw(int A);
	void usunPlus(unsigned const K);
	void przeniesParzyste();
};



#endif // !H
