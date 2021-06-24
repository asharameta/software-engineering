//Разработать функцию, которая по одному стеку Stack строит 2 новых: Stack1 из четных элементов, Stack2 из нечетных.

#include <iostream>
#include "Header.h"
#include <fstream>
using namespace std;

void add(int x, Stack **stk)
{
	Stack *add = new Stack;
	add->value = x;
	add->Next = *stk;
	*stk = add;
}

void show(Stack *stk)
{
	Stack *show = stk;
	while (show)
	{
		cout << show->value << " ";
		show = show->Next;
	}
}

void del(int x, Stack **stk)
{
	Stack *del = *stk;
	if (del->value == x)
	{
		*stk = del->Next;
		delete del;
		return;
	}
	Stack *del1 = del->Next;

	while (del1)
	{
		if (del1->value == x)
		{
			del->Next = del1->Next;
			delete del1;
			return;
		}
		del = del1;
		del1 = del1->Next;
	}


}