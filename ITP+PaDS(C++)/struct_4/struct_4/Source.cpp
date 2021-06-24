#include <iostream>
#include "Header.h"
using namespace std;


int Create(int i, char val, char val1, Queue** first, Queue** last)
{
	bool check;
	Queue* t = new Queue;
	t->Next = NULL;
	if (*first == NULL)
	{
		*first = *last = t;
	}
	t->value = val;
	(*last)->Next = t;
	*last = t;
	if (i != 0 && t->value == val1)
	{
		check = true;
	}
	else
	{
		check = false;
	}
	return check;
}

void show(Queue* first)
{
	Queue* show = first;
	while (show != NULL)
	{
		cout << show->value << " ";
		show = show->Next;
	}
	cout << endl;
}

void Delete(Queue** first)
{
	Queue* del = new Queue;
	del = *first;
	*first = (*first)->Next;
	delete del;
}