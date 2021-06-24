#define _CRT_SECURE_NO_WARNINGS
#include"liczba.h"


int main()
{
	Lista L1;
	string num1;
    cout << "Enter firts number(don't forget about +/-): ";
    cin >> num1;
    char* a1 = new char[num1.size() + 1];
    strcpy(a1, num1.c_str());
    for (unsigned i = 0; i < num1.size(); i++)
    {
        L1.push(a1[i], 0);
    }
    cout << "First Number: "; L1.print();

    //----------------------------------------------------

    Lista L2;
    string num2;
    cout << "Enter second number(don't forget about +/-): ";
    cin >> num2;
    char* a2 = new char[num2.size() + 1];
    strcpy(a2, num2.c_str());  
    for (unsigned i = 0; i < num2.size(); i++)
    {
        L2.push(a2[i], 0);
    }
    cout << "Second number: "; L2.print();

    //----------------------------------------------------

        bool stop = false;
        while (!stop)
        {
            cout << "Menu: " << endl;
            cout << "1.addition\n2.subtraction\n3.multiplication\n4.exit" << endl;
            int z;
            cin >> z;
            if (z != 1 && z != 2 && z != 3 && z!=4)
            {
                cout << "A nonexistent menu item is selected.\nTry again." << endl;
            }
            switch (z)
            {
            case 1:
            {
                cout << "<===================>\n Result of operator + : ";
                Lista Plus = L1 + L2;
                cout << "<===================>" << endl;
                break;
            }
            case 2:
            {
                cout << "<===================>\n Result of operator - : ";
                Lista Minus = L1 - L2;
                cout << "<===================>" << endl;
                break;
            }
            case 3:
            {
                cout << "<===================>\n Result of operator * : ";
                Lista Multiply = L1 * L2;
                cout << "<===================>" << endl;
                break;
            }
            case 4:
            {
                stop = true;
                break;
            }
            default:
                break;
            }
        }

	return 0;
}