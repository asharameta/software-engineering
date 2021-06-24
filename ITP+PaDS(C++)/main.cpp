#include<iostream>
#include"lista.h"
#include<cstring>
#include<stdlib.h>

using namespace std;

int main(int argc, const char * argv[]) {
    Lista st;
    Lista st1;
    string L;
    cin >> L;
    string L1;
    cin >> L1;

    //st1
    char a[L.size()+1];
    strcpy(a,L.c_str());
    for(int i=0; i<L.size();i++)
    {
        st.wstaw(a[i], 0);
    }
    cout<<"LICZBA 1 : ";
    st.wypisz();
    cout<<endl;

    //st2
    char b[L1.size()+1];
    strcpy(b,L1.c_str());
    for(int i=0; i<L1.size();i++)
    {
        st1.wstaw(b[i], 0);
    }

    cout<<"LICZBA 2 : ";
    st1.wypisz();
    cout<<endl;

    cout << "<=========================>" << endl;
    cout << "Operator +" << endl;
    Lista t1 = st + st1;
    cout << "<=========================>" << endl;
    cout << "Operator -" << endl;
    Lista t2 = st - st1;
    cout << "<=========================>" << endl;
    cout << "Operator *" << endl;
    Lista t3 = st * st1;
    cout << "<=========================>" << endl;
    if(st == st1 == true){
        cout << L << " = " << L1 << " TRUE " << endl;
    }
    else{
        cout << L << " = " << L1 << " FALSE " << endl;
    }
    cout << "<=========================>" << endl;
    if(st > st1 == true){
        cout << L << " > " << L1 << " TRUE " << endl;
    }
    else{
        cout << L << " > " << L1 << " FALSE " << endl;
    }
    cout << "<=========================>" << endl;
    if(st < st1 == true){
        cout << L << " < " << L1 << " TRUE " << endl;
    }
    else{
        cout << L << " < " << L1 << " FALSE " << endl;
    }
    cout << "<=========================>" << endl;

    return 0;
}





