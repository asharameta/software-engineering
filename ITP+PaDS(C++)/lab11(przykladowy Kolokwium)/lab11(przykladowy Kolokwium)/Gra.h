#ifndef GRA_H
#define GRA_H

#include<iostream>
using namespace std;

class Symbol
{
public:
	virtual ~Symbol() {};
	virtual void print() const = 0;

};

class Kolko :public Symbol
{
public:
	~Kolko() {};
	void print()const { cout << "o"; }
};

class Krzyzyk : public Symbol
{
public:
	~Krzyzyk() {};
	void print()const { cout << "x"; }
};


#endif // !GRA_H
