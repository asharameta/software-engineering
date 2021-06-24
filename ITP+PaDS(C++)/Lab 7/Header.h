#ifndef ADD_H
#define ADD_H

struct Stack
{
	int value;
	Stack *Next;
};
	
void add(int x, Stack **stk);
void show(Stack *stk);
void del(int x, Stack **stk);

#endif