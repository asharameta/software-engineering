#include "sportowiec.h"
#include <vector>

int main()
{
    cout << "Liczba obiektow: " << Sportowiec::getIle() << endl;
    Sportowiec s1;
    Sportowiec s2("Stoch", "skoczek", 56);
    Sportowiec s3 = s2;

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;

    cout << "Liczba obiektow: " << Sportowiec::getIle() << endl;



    vector<Sportowiec*> bazaDanych;

    //    bazaDanych.push_back(new Spo)

    return 0;
}

