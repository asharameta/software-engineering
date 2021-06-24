#include <iostream>
#include <string>
#include<ctime>
#include <map>
using namespace std;

int counter = 0;

bool matchesAt(string T, int p, string  W)
{
    for (int i = 0; i < W.length(); i++)
    {
        counter++;
        if (W[i] != T[p + i]) return false;
    }
    return true;
}

void algorytmNaiwny(string T, string W)
{
    for (int i = 0; i <= T.length() - W.length(); i++)
    {
        if (matchesAt(T, i, W) == true) cout << "I found it:" << W <<" "<<i<< endl;
    }
}


void algorytmSundaya(string T, string W)
{
    map<char, int> lastp;
    for (int i = W.length()-1; i >= 0; i--)
    {
       lastp.emplace(W[i], i);
    }
    int i = 0;
    while (i <= T.length() - W.length())
    {
        if (matchesAt(T, i, W) == true)
        {
            cout << "I found it:" << W << " " << i << endl;
        }
        i += W.length();
        int lastpa=0;
        if (i < T.length())
        {
            lastp.at(T[i]) == NULL ? lastpa = -1 : lastpa = lastp.at(T[i]);
            lastp.erase(T[i]);
            i -= lastpa;
        }
    }
}

int main()
{
    srand(time(NULL));
    string A = "abcdefghijklmnopqrstuvwxyz";
    string T;
    string W;
    int N = 2;
    int G = 100;
    for (int i = 0; i < N; i++)
    {
        W.push_back(A[rand() % (A.length())]);
    }
    for (int i = 0; i < N; i++) cout << W[i];
    cout << "\nText is: " << endl;
    for (int i = 0; i < G; i++)
    {
        T.push_back(A[rand() % (A.length())]);
    }
    for (int i = 0; i < G; i++) cout << T[i];
    cout << endl;
    //algorytmNaiwny(T, W);
    algorytmSundaya(T,W);
    //cout << counter << endl;
    return 0;
}
