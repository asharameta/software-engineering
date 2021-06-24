#include"bib.h"
int main()
{
    sznur s1;
    int g,k;
	//9, 9, 9, 8, 8, 6, 6, 6, 6, 5, 5, 5, 5, 2, 2, 1, 1
    //3, 3, 2, 2, 1, 1
    // 9,8,7,5,4,3,2
    for (int i : {9, 9, 9, 8, 8, 6, 6, 6, 6, 5, 5, 5, 5, 2, 2, 1, 1})
        s1.print(i);
    s1.wypisz();
  /*  cout<<"funkcyja usun, podaj K"<<endl;
    cin>>k;
    s1.usun(k);
    s1.wypisz();*/

s1.przenies();
cout << endl; 
cout << "funkcyja przenies " << endl;
s1.wypisz();

    return 0;
}
