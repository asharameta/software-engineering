#ifndef SPORTOWIEC_H
#define SPORTOWIEC_H

#include <iostream>
using namespace std;

class Sportowiec
{
    static int ile;
    char* nazwisko;
    char* sport;
    double waga;
public:
    Sportowiec();
    Sportowiec(const char* n, const char* s, double w);
    ~Sportowiec();
    Sportowiec(const Sportowiec& S);
    Sportowiec& operator=(const Sportowiec& S);
    static int getIle() { return ile; }
    friend ostream& operator<<(ostream& os, const Sportowiec& S);
};

#endif // SPORTOWIEC_H