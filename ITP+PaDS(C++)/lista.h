#ifndef liczba_h
#define liczba_h

#include <stdio.h>

struct Lista
{
private:
    struct Node
    {   char znak;
        int dane;
        Node*nast;
        Node*prev;
    };

    Node*pocz=nullptr;
    Node*ogon=nullptr;
    int ileJest;

public:
    Lista();
    ~Lista();
    void wypisz();
    void wstaw(char a, int arg);
    Lista operator+(const Lista& L)const;
    Lista operator-(const Lista& L)const;
    Lista operator*(const Lista& L)const;
    Lista operator/(const Lista& L)const;
    bool operator==(const Lista& L)const;
    bool operator>(const Lista& L)const;
    bool operator<(const Lista& L)const;

};

#endif /* liczba_hpp */
