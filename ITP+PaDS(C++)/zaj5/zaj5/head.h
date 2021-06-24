#ifndef head_H
#define head_H


struct Stos
{
private:
	int value;
	Stos* pNext;
	int size;

public:

	Stos(int v=0, Stos* pN=nullptr);
	~Stos();
	void show(Stos* sts);
	void add(int A, Stos** sts);
	void pop(int A, Stos** sts);
	int GetSize() { return size; }
	void clear(Stos*sts);
	/*void operator= (const Stos& other);*/
	
};

#endif // !head_H

