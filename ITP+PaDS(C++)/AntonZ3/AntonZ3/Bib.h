#ifndef BIB_H_INCLUDED
#define BIB_H_INCLUDED
#include<iostream>
using namespace std;
struct sznur{
private:
    struct box{
    int value;
    box* next=nullptr;
    box(int g, box* j = nullptr)
    {
        value=g;
        next = j;
    }
    };
box* head=nullptr;
int counter=0;
public:
    void print();
    void push(int a);
    void usunPlus(int k);
    void przeniesParzyste();
    ~sznur(); 
};


#endif // BIB_H_INCLUDED
