#include"list_H.h"
#include <stdexcept>

queue::queue(const queue &q) // konstrukor kopujacy
{
	Node* walker = q.head;
	while (walker != nullptr)
	{
		Node* creator = new Node(walker->value);
		if (tail != nullptr)
			tail->pNext = creator;
		else
			head = creator;
		tail = creator;
		walker = walker->pNext;
	}
	size = q.size;
}


queue::~queue()
{
	clear();
}


void queue::push(int v)
{
	Node* creator = new Node(v);
	if (tail != nullptr)
		tail->pNext = creator;
	else
		head = creator;
	tail = creator;
	size++;
}



void queue::print()
{
	if (size != 0)
	{
		Node* show = head;
		while (show)
		{
			cout << show->value << "->";
			show = show->pNext;
		}
		cout << "|" << endl;
	}
	else
	{
		cout << "list jest pusty:(" << endl;
		return;
	}
}


int queue::pop()
{
	if (size == 0)
	{
		throw logic_error("list jest pusty:(");
	}
	Node* killer = head;
	int temp = killer->value;
	head = head->pNext;
	delete killer;
	size--;
	return temp;
}


void queue::clear()
{
	while (head!=nullptr)
	{
		Node* killer = head;
		head = head->pNext;
		delete killer;
		size--;
	}
	tail = nullptr;
}


int queue::counter()
{
	return size;
}


queue& queue::operator=(const queue& q)
{
	if (this != &q)
	{
		Node* pred = nullptr;
		Node* succ = head;
		Node* walker = q.head;

		while (walker != nullptr)
		{
			if (succ != nullptr)
			{
				succ->value = walker->value;
			}
			else
			{
				succ = new Node(walker->value);
				if (pred != nullptr)
					pred->pNext = succ;
				else
					head = succ;
			}
			pred = succ;
			succ = succ->pNext;
			walker = walker->pNext;
		}

		while (succ != nullptr)
		{
			Node* killer = succ;
			succ = succ->pNext;
			if (pred != nullptr)
				pred->pNext = succ;
			else
				head = succ;
			delete killer;
		}

		tail = pred;
		size = q.size;
	}
	return *this;
}