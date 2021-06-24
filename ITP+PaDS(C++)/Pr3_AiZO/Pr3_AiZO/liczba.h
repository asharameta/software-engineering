#ifndef Lista_H
#define Lista_H

#include<iostream>
using namespace std;

struct Lista
{
private:
	struct Node
	{
		int value;
		char sign;
		Node* next;
		Node* prev;
	};
	Node* head = nullptr;
	Node* tail = nullptr;
	int size = 0;
public:
	Lista() :head(nullptr), tail(nullptr), size(0) {}
	~Lista()=default;
	void push(char N, int arg);
	void print();
	Lista operator+(const Lista& l);
	Lista operator*(const Lista& l);
	Lista operator-(const Lista& l);

};

#endif // !Lista_H

