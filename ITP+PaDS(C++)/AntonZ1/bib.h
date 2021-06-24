#ifndef BIB_H_INCLUDED
#define BIB_H_INCLUDED
#include<iostream>
using namespace std;
struct sznur{
private:
    struct box{
    int value;
    box* next;
    box(int v, box* m = nullptr)
    {
        value = v;
        next = m;
    }
    };
    int counter=0;
    box* head=nullptr;
//    box* tail=nullptr;
     public:
    void print(int a);
    void wypisz();
    void usun(int a);
    void przenies();
};


#endif // BIB_H_INCLUDED
