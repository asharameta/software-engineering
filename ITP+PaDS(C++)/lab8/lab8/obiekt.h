#ifndef object_H
#define object_H
#include<iostream>
using namespace std;

class Obiekt // Klasa abstrakcyjna
{

public:
	virtual ~Obiekt() {}
	virtual void print() const = 0; //metoda czysto wirtualna

};

class A : public Obiekt
{
public:
	~A() { cout << "~A\n"; }
	void print()const { cout << "A" << endl; }

};

class B : public Obiekt
{
public:
	~B() { cout << "~B\n"; }
	void print()const { cout << "B" << endl; }

};

class C : public Obiekt
{
public:
	~C() { cout << "~C\n"; }
	void print()const { cout << "C" << endl; }

};

class D : public Obiekt
{
public:
	~D() { cout << "~D\n"; }
	void print()const { cout << "D" << endl; }

};

#endif // !object_H

