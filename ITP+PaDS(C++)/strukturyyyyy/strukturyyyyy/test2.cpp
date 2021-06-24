#include<stdexcept>
#include<iostream>
#include"Header2.h"
using namespace std;


Stos::Stos(int maxR)
{
    if (maxR <= 0) throw invalid_argument("Zly rozmiar stosu");
    max_rozmiar = maxR;
    dane = new int[maxR];
    ileJest = 0;
}


Stos:: ~Stos()
{
    delete[]dane;
    cout << "Zniszczylem stos" << endl;
}

//void Stos::wypisz()
//{
//
//}
//
//void Stos::wloz(int A)
//{
//
//}
//
//int Stos::zdejmij()
//{
//
//
//}

