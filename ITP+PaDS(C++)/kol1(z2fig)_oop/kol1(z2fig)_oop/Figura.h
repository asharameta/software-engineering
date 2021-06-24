#ifndef FIGURA_H_INCLUDED
#define FIGURA_H_INCLUDED
#include <iostream>
#include <string>
#include<vector>

using namespace std;

class Figura
{
    string nazwa;
public:
    Figura() = default;
    virtual ~Figura() {}
    virtual void Wypisz() = 0;
    virtual char gett() = 0;
    void setname(string n) { nazwa = n; }
    string getname() { return nazwa; }
};



class Punkt : public Figura
{
    int x;
    int y;
public:
    // Punkt() = default;
    Punkt(string n, int _x, int _y) : x(_x), y(_y) { setname(n); }
    virtual ~Punkt() {}
    void Wypisz() { cout << "Punkt " << getname() << ":(" << x << "," << y << ")"; cout << endl; }
    int getx() { return x; }
    int gety() { return y; }
    char gett() { return 'p'; }
};


class Odcinek : public Figura
{
    Punkt start;
    Punkt end;
public:
    Odcinek(string n, Punkt s, Punkt e) : start(s), end(e) { setname(n); }
    virtual ~Odcinek() {}
    void Wypisz() { cout << "Odcinek " << getname() << " o koncach (" << start.getx() << "," << start.gety() << "),(" << end.getx() << "," << end.gety() << ")"; cout << endl; }
    char gett() { return 'o'; }
};

class Zbior
{
    vector<Figura*>MyVec;
public:
    Zbior() = default;
    void clear();
    ~Zbior() { clear(); }
    void push(Figura& v);
    void print();
    void usun();
    friend Zbior operator<<(ostream& os, Zbior& z)
    {
        auto iter = z.MyVec.begin();
        int i = 0;
        while (iter != z.MyVec.end())
        {
            iter[i]->Wypisz();
            i++;
        }
        //z.MyVec[0]->Wypisz();
    }
    //Zbior& tylkopunkty();
};





#endif // FIGURA_H_INCLUDED
