#ifndef WZOR_H
#define WZOR_H

#include <iostream>
using namespace std;

class Wzor
{
    char znak;
    int dlugosc;
public:
    Wzor(char z = '?', int d = 3) : znak(z), dlugosc(d) {}
    virtual ~Wzor();
    void opis() const;
    void drukuj() const;
    void ustaw(char z, int d);
};

#endif // WZOR_H
