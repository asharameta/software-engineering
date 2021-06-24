#include "wzor.h"
#include <vector>

int main()
{

    for (;;)
    {
        int dlugosc;
        cout << "Podaj dlugosc powtarzan(! - konczy): "; cin >> dlugosc;

        char znak;
        cout << "Podaj znak ktory chcesz powtarzac: "; cin >> znak;

        Wzor s2(znak, dlugosc);
        s2.ustaw(znak,dlugosc);
        s2.opis();
        s2.drukuj();
        char co;
        cout << "czy chcesz kontynuowac? N - nie, T - tak" << endl;
        cin >> co;
        if (co == 'N' || co == 'n')break;
        else continue;
    }
    






    return 0;
}
