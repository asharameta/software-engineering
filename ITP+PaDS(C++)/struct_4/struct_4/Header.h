#ifndef ADD_H
#define ADD_H

struct Queue
{
	char value;
	Queue* Next;
};


int Create(int i, char val, char val1, Queue** first, Queue** last);
void show(Queue* first);
void Delete(Queue** first);

#endif
