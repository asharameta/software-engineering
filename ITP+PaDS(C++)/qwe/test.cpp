#include"header.h"
#include<iostream>
#include<stdexcept>
using namespace std;

stos::stos(int maxR = 10)
{
    if(maxR<=0) throw invalid_argument("Zly rpzmiar stosu");
    max_rozmiar=maxR;
    dane=new int[maxR];
    ileJest=0;

}

stos::~stos()
{
    delete[]dane;
    cout<<"Zniszczylem stos"<<endl;
}
