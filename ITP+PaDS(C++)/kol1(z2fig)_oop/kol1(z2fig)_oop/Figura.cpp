#include "Figura.h"


void Zbior::push(Figura& v)
{
    MyVec.push_back(&v);
}

void Zbior::print()
{
    cout << "Twoj zbior to: " << endl;
    for (unsigned i = 0; i < MyVec.size(); i++)
    {
        cout << "----------------------" << endl;
        MyVec[i]->Wypisz();
        cout << "----------------------" << endl;
    }
}


void Zbior::usun()
{
    MyVec.erase(MyVec.end() - 1, MyVec.end());
}


void Zbior::clear()
{
    MyVec.clear();
}

//Zbior& Zbior::tylkopunkty()
//{
//    Zbior temp;
//    int i = 0;
//    auto iter = MyVec.begin();
//    while (!MyVec.empty())
//    {
//        if (iter[i]->gett() == 'p')
//            temp.push(*iter[i]);
//        i++;
//    }
// 
//    return *this;
//}