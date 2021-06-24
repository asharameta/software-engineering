//#include"Header.h"
//#include<iostream>
//#include<stdexcept>
//#include<cmath>
//using namespace std;
//
//ulamek::ulamek(int l, int m)
//{
//    if (m == 0)         throw invalid_argument("Zle dane - mianownika");
//    licz = l;
//    mian = m;
//    if (m < 0)
//    {
//        licz = -licz;
//        mian = -mian;
//    }
//}
//int ulamek::dajMianownik()
//{
//    return mian;
//}
//void ulamek::zmienMianownik(int m)
//{
//    if (m == 0)         throw invalid_argument("Zle dane - mianownika");
//    mian = m;
//    if (m < 0)
//    {
//        licz = -licz;
//        mian = -mian;
//    }
//}
//
//int nwd(int x, int y)
//{
//    while (x != y)
//    {
//        if (x > y)
//        {
//            x = x - y;
//        }
//        else
//        {
//            y = y - x;
//        }
//    }
//    return x;
//}
//
//void ulamek::skruc()
//{
//    //zwraca licz i mian
//    int d;
//    d = nwd(abs(licz), mian);
//    licz = licz / d;
//    mian = mian / d;
//
//}
//
//bool ulamek::operator==(ulamek& u)
//{
//    ulamek kopia1(licz, mian);
//    ulamek kopia2(u.licz, u.mian);
//    kopia1.skruc();
//    kopia2.skruc();
//    if (kopia1.licz == kopia2.licz && kopia1.mian == kopia2.mian)
//        return true;
//    else
//        return false;
//    /* skruc();
//     u.skruc();
//     if (u.licz==licz && u.mian==mian)
//         return true;
//     else
//         return false;*/
//}
//
//int nww(int a, int b)
//{
//    int ka = a, kb = b;
//    int pom;
//    while (b != 0)
//    {
//        pom = b;
//        b = a % b;
//        a = pom;
//        cout << "*";
//    }
//    return (ka * kb) / a;
//
//}
//ulamek ulamek::operator-(ulamek& x)
//{
//    int wsp_mian = nww(mian, x.mian);
//    int k1 = wsp_mian / mian;
//    int k2 = wsp_mian / x.mian;
//
//
//    ulamek wynik;
//    wynik.mian = wsp_mian;
//    wynik.licz = licz * k1 - x.licz * k2;
//
//    wynik.skruc();
//    return wynik;
//}
//
//
//void ulamek::wypisz()
//{
//    cout << licz << "/" << mian;
//}
