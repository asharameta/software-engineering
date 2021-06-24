#include<iostream>

using namespace std;

class A
{
	string msg;
public:
	//A() { cout << "Po umolczaniju!" << endl; }
	A(string str) :msg(str){}
	virtual string getMSG() { return msg; }
};

class B : public A
{
public:
	B(string msg):A(msg) {}
	string getMSG() { return "*"+::A::getMSG()+"*"; }
};

class printer
{
public:
	void print(A *msg) { cout << msg->getMSG() << endl; }
};

int main()
{
	B b("PIDARASI");
	printer p;
	p.print(&b);
	

	
	

	return 0;
}