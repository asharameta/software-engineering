#ifndef H
#define H


struct sznur
{
private:
	struct Node
	{
		int data;
		Node* pNext;
		Node(int D,Node*pN=nullptr) :data(D),pNext(pN){}
	};
	unsigned size = 0;
	unsigned counter = 0;
	Node* head = nullptr;
	Node* tail = nullptr;
public:
	sznur() = default;
	~sznur();
	void wstaw(int A);
	void wypisz();
	void usun(unsigned const M, float);
	void przeniesTrojki();

};

#endif // !H

