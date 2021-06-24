#include <iostream>
#include <stdexcept>
#include "bib_lista.h"
using namespace std;

int main()
{
    Sznur S1;
    cout << " - S1 - " << endl;
    cout << "S = 10, K=2 -> " << endl;
    for(int i: {1,5,6,1,3,7,2,7,3,1,3,1}) // 7->7->6->5->3->3->3->2->1->1->1->1->|
        S1.wstaw(i);
    S1.wypisz();
    S1.size();
    S1.usunCiagi(10,2);
    S1.wypisz();
    S1.clear(); // —пециальна€ функци€ ал€ деструктор, дл€ того чтобы после каждого шнура чистить его иначе деструктор будет чистить только последний шнур.




    cout << "---------------" << endl;
    Sznur S2;
    cout << " - S2 - " << endl;
    cout << "S = 5, K=1 -> " << endl;
    for(int i: {9,7,6,5,4,4,4,2,1})
        S2.wstaw(i);
    S2.wypisz();
    S2.size();
    S2.usunCiagi(5,1);
    S2.wypisz();
    S2.clear();




    cout << "---------------" << endl;
    Sznur S3;
    cout << " - S3 - " << endl;
    cout << "S = 100, K=1 -> " << endl;
    for(int i: {9,9,8,7,6,5,5})
        S3.wstaw(i);
    S3.wypisz();
    S3.size();
    S3.usunCiagi(100,1);
    S3.wypisz();



    return 0;
}
