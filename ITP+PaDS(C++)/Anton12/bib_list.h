#ifndef BIB_LIST_H_INCLUDED
#define BIB_LIST_H_INCLUDED
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
template<typename T>
struct sznur{
 private:
     struct box{
     T value;
     box* next = nullptr;
     box(T a, box* b = nullptr)
     {
         value = a;
         next = b;
     }
     };

      int counter = 0;
     box* head = nullptr;
 public:
    void print(T a);
    void push();
    int counter1();
    ~sznur();
     T pop();
};
template<typename T>
int sznur<T>::counter1()
{
    return counter;
}

template<typename T>
T sznur<T>::pop()
{
   // if(head==nullptr) return 0;
    T wynik = head->value;
    box* killer = head;
    head = head->next;
    delete killer;
    counter -- ;
    return wynik;
}
template<typename T>
sznur<T>::~sznur()
{
    while(head != nullptr)
    {
        box* killer = head;
        cout<<" delete: " << killer->value;
        head = head -> next;
        delete killer;
    }
}
template<typename T>
void sznur<T>::print(T a)
{
    box* creator = new box(a);
    if(head == nullptr)
        head = creator;
    else if (head->value>=a)
    {
        creator->next = head;
        head=creator;
    }
    else
    {
        box* zaszuk=nullptr;
        box* szuk=head;
        while(szuk!= nullptr && szuk->value<a)
        {
            zaszuk=szuk;
            szuk=szuk->next;
        }
        zaszuk->next= creator;
        creator->next =szuk;
    }
    counter++;
}
template<typename T>
void sznur<T>::push()
{
    if(head == nullptr) return;
    box*wolker = head;
    while(wolker != nullptr)
    {
        cout<<"->"<<wolker->value;
        wolker=wolker->next;
    }
    cout<<endl;
}

#endif // BIB_LIST_H_INCLUDED
