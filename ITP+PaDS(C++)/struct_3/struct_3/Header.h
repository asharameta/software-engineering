#ifndef ADD_H
#define ADD_H

struct Stack
{
private:
	int data;
	Stack* pNext;
	int size = 0;
public:
	Stack(Stack* pNext = nullptr, int data=0);
	~Stack();
	void add(int n, Stack** stk);
	void show(Stack* stk);
	void pop(int n, Stack** stk);
	void clear(Stack* stk);
	int GetSize() { return size; }
};


#endif