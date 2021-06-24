#ifndef pochodna_H
#define pochodna_H

#include<iostream>
using namespace std;

class A
{
	int* wsk;
	bool p;
public:
	A(int w, bool p);
	A(const A& a);
	virtual ~A();
	A& operator=(const A& a);
	virtual void print() const;

};


#endif // !pochodna_H

