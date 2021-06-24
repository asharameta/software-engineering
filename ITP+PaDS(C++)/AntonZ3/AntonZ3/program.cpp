#include"Bib.h"
int main()
{
   int g;
   sznur s1;
 /*  while(true)
   {
       cout<<"Pobieram liczby, 0-exit..."<<endl;
       cin>>g;
       if(g==0)break;
       s1.push(g);
       s1.print();
   }*/


   /*(przykład: dla K=2 sznur
7,7,6,5, 3,3,3,2,1,1,1,1, zostanie przekształcony do postaci 6,5,1, dla K=3 sznur 9,9,8,7,6,5,5 stanie się
pusty, dla K=1 sznur 9,7,6,5,4,4,4,2,1 zostanie przekształcony do postaci 9,7,6,5,4,2,1).*/

   /* Przykład: dla sznura przechowującego liczby
9, 8, 7, 6, 5, 4, 3, 2, 1, 0, -1 dostaniemy wynik 9, 7, 5, 8, 2, 4, 0, 6, 3, 1, -1, sznur 9, 8, 8, 7, 6, 6, 5, 4 uzyska postać
    9, 7, 8, 6, 4, 6, 8, 5, sznur 8, 6, 4, 2 przekształci się do 8, 4, 2, 6. */

  for (int i : { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, -1 })
       s1.push(i);
   s1.print();

   /*for (int i : { 1, 5, 6, 1, 3, 7, 2, 7, 3, 1, 3, 1 })
       s1.push(i);
   s1.print();*/

  /* for (int i : { 9, 9, 8, 7, 6, 5, 5 })
       s1.push(i);
   s1.print();*/

  /* for (int i : { 9, 7, 6, 5, 4, 4, 4, 2, 1 })
       s1.push(i);
   s1.print();*/

// cout<<"Funkcyja usunPlus, podaj K"<<endl;
//cin>>g;
//s1.usunPlus(g);
//cout<<"Wynik:"<<endl;
//s1.print();

 cout <<"Funkcyja przeniesParzyste" << endl;
 s1.przeniesParzyste();
 cout << "Wynik:" << endl;
 s1.print();
    return 0;
}
