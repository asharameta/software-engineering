#include"sport.h"
#include<vector>


int main()
{
    cout << "Liczba obiektow: " << Sportowiec::getIle() << endl;
    vector<Sportowiec> MyVec;
    char nazwisko[20];
    char sport[20];
    float waga = 0;
    int ans;
    while (true)
    {
        cout << "1-add/2-edit/3-delete/4-print/5-exit" << endl;
        cin >> ans;
        switch (ans)
        {
        case 1:
        {
            cout << "Podaj nazwisko sportowca: "; cin >> nazwisko;
            cout << "Podaj sport ktorym on zajmuje sie: "; cin >> sport;
            cout << "Podaj jego wage: "; cin >> waga;
            MyVec.push_back(Sportowiec(nazwisko, sport, waga));
            break;
        }
        case 2:
        {

        }
        case 3:
        {
            int usun;
            for (unsigned i = 0; i < MyVec.size(); i++)
            {
                cout << i << "." << endl;
                cout << MyVec[i] << endl;
            }
            cout << "Wybierz sporotowca do usunencia: "; cin >> usun;
            MyVec.erase(MyVec.begin() + usun);
            break;
        }
        case 4:
        {
            cout << "Liczba obiektow: " << Sportowiec::getIle() << endl;
            for (unsigned i = 0; i < MyVec.size(); i++)
            {
                cout << MyVec[i] << endl;
            }
            break;
        }
        case 5:
        {
            return 1;
        }
        }
    }
	return 0;
}