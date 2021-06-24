#ifndef H
#define H

struct Sznur
{
private:
	struct Node
	{
		int Data;
		Node* pNext;
		Node(int D, Node*pN=nullptr) :Data(D), pNext(pN) {}
	};

	Node* head = nullptr;
	Node* tail = nullptr;
	unsigned size = 0;
	unsigned counter = 0;
public:
	Sznur() = default;
	~Sznur();
	void wstaw(int);
	void wypisz();
	void usun();
	void przenies();

};


#endif // !H

