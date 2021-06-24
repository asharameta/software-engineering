#include"bib_list.h"
#include"bib_konto.h"
int main()
{
 /*   sznur<int> s1;
    for(int i:{4,6,7,2,1})
        s1.print(i);
    s1.push();
    int wynik = s1.pop();
    cout <<"pirszy element: " << wynik<<endl;*/

    string bank[3]={"1020", "1190", "2490"};
    sznur<kont> l[3];
     string nazwa, linia0;
     nazwa = "plik.txt";
     ifstream folder;
     folder.open(nazwa);
     if(!folder)
     {
         cout<<"nie ma takiego pliku" <<endl;
         return 0;
     }
     while(getline(folder,linia0))
     {
         kont z(linia0);
         string sprw = z.dajkod();
         cout<<"kody bankow: " << sprw<<endl;
         for(int i=0; i<3; i++)
         {
             if(bank[i]==sprw)
             {
                 l[i].print(z);
                 break;
             }
         }
     }
     folder.close();

  /*   for(int i=0; i<3; i++)
     {
         if(l[i].counter1()>0)
         {
             l[i].push();
         }
     }*/
         for(int i=0; i<3; i++)
    {
        if(l[i].counter1()>0)
        {
            ofstream zapis;
            zapis.open(bank[i]+".txt");
            while(l[i].counter1()>0)
            {
                kont p=l[i].pop();
                cout<<"zapis w plik " << bank[i] << "to: " <<p.dajbank()<<endl;
                zapis<<p.dajbank()<<endl;
            }
            zapis.close();
        }
    }




    return 0;
}
