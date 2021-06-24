#include<Windows.h>
#include<cstdlib>
#include<ctime>
#include"siatka.h"


int main()
{
    srand(time(NULL));
    for(;;)
    {
        Siatka S(5, 5);
        cout << S << endl;
        Sleep(300);
        S.Cykl();
        system("cls");
    }

   

	return 0;
}