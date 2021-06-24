#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;

bool isEmpty(std::ifstream& fin);
void MergeLaczenie(int h);
void ZapisW3Pliki( int h);


void ZapisW3Pliki(int h)
{
    ifstream fin("tab.txt");
    ifstream fin2("wyniki.txt");
    ofstream fout1("1.txt");
    ofstream fout2("2.txt");
    ofstream fout3("3.txt");
    string msg1, msg2, msg3;
    while (!fin2.eof() && h!=1)
    {
        for (int i = 0; i < h; i++)
        {
            fin2 >> msg1;
            if (msg1 != "")
                fout1 << msg1 << " ";
            msg1.clear();
        }
        for (int i = 0; i < h; i++)
        {
            fin2 >> msg2;
            if (msg2 != "")
                fout2 << msg2 << " ";
            msg2.clear();
        }
        for (int i = 0; i < h; i++)
        {
            fin2 >> msg3;
            if (msg3 != "")
                fout3 << msg3 << " ";
            msg3.clear();
        }
        cout << endl;
    }
    while (!fin.eof() && h == 1)
    {
        for (int i = 0; i < h; i++)
        {
            fin >> msg1;
            fout1 << msg1 << " ";
            msg1.clear();
        }
        for (int i = 0; i < h; i++)
        {
            fin >> msg2;
            fout2 << msg2 << " ";
            msg2.clear();
        }
        for (int i = 0; i < h; i++)
        {
            fin >> msg3;
            fout3 << msg3 << " ";
            msg3.clear();
        }
        cout << endl;
    }
    fin.close();
    fin2.close();
    fout1.close();
    fout2.close();
    fout3.close();
//---------------------------
    MergeLaczenie(h);
}
bool isEmpty(std::ifstream& pFile)
{
    return pFile.peek() == std::ifstream::traits_type::eof();
}


void MergeLaczenie(int h)
{
    ifstream fin1("1.txt");
    ifstream fin2("2.txt");
    ifstream fin3("3.txt");
    if (isEmpty(fin2) && isEmpty(fin3))
    {
        return;
    }
    ofstream fout("wyniki.txt");
    string msg1, msg2, msg3;
    bool a1 = true, a2 = true, a3 = true;
    int licz1 = 0, licz2 = 0, licz3 = 0;
    while (true)
    {
        // pobieranie dannych
        if (a1 == true && !isEmpty(fin1) && licz1 < h)
        {
            msg1.clear();
            fin1 >> msg1;
            if (msg1 == "")
                continue;
            else
                a1 = false;
            licz1++;

        }
        if (a2 == true && !isEmpty(fin2) && licz2 < h)
        {
            msg2.clear();
            fin2 >> msg2;
            if (msg2 == "")
                continue;
            else
                a2 = false;
            licz2++;

        }
        if (a3 == true && !isEmpty(fin3) && licz3 < h)
        {
            msg3.clear();
            fin3 >> msg3;
            if (msg3 == "")
                continue;
            else
                a3 = false;
            licz3++;
        }
    //----------------------------
    if (a1 == true && a2 == false && a3 == false)
    {
        if (stoi(msg2) < stoi(msg3))
        {
            if (msg2 != "")
            {
                fout << msg2 << " ";
                //cout << " " << msg2;
                a2 = true;
            }
            else
                a2 = false;
            
        }
        else
        {
            if (msg3 != "")
            {
                fout << msg3 << " ";
                //cout << " " << msg3;
                a3 = true;
            }
            else
                a3 = false;
        }
    }
    if (a2 == true && a1 == false && a3 == false)
    {
        if (stoi(msg1) < stoi(msg3))
        {
            if (msg1 != "")
            {
                fout << msg1 << " ";
                //cout << " " << msg1;
                a1 = true;
            }
            else
                a1 = false;
        }
        else
        {
            if (msg3 != "")
            {
                fout << msg3 << " ";
                //cout << " " << msg3;
                a3 = true;
            }
            else
                a3 = false;
        }
    }
    if (a3 == true && a1 == false && a2 == false)
    {
        if (stoi(msg1) < stoi(msg2))
        {
            if (msg1 != "")
            {
                fout << msg1 << " ";
                //cout << " " << msg1;
                a1 = true;
            }
            else
                a1 = false;
        }
        else
        {
            if (msg2 != "")
            {
                fout << msg2 << " ";
                //cout << " " << msg2;
                a2 = true;
            }
            else
                a2 = false;
        }
    }
    //------------------------------
    if (a1 == false && a2 == false && a3 == false) {
        if (stoi(msg1) <= stoi(msg2) && stoi(msg1) < stoi(msg3))
        {
            if (msg1 != "")
            {
                fout << msg1 << " ";
               // cout << " " << msg1;
                a1 = true;
            }
            else
                a1 = false;
        }
        else if (stoi(msg2) < stoi(msg3))
        {
            if (msg2 != "")
            {
                fout << msg2 << " ";
                //cout << " " << msg2;
                a2 = true;
            }
            else
                a2 = false;
        }
        else
        {
            if (msg3 != "")
            {
                fout << msg3 << " ";
                //cout << " " << msg3;
                a3 = true;
            }
            else
                a3 = false;
            
        }
    }
    //----------------------------
    if (isEmpty(fin1) && a1 == true) licz1 = h;
    if (isEmpty(fin2) && a2 == true) licz2 = h;
    if (isEmpty(fin3) && a3 == true) licz3 = h;
    //-----------------------------
    if (licz1 == h && licz1 == licz2 && licz1 == licz3 && a2 == true && a1 == true && a3 == true)
    {
        licz1 = 0; licz2 = 0; licz3 = 0;
        msg1.clear();
        msg2.clear();
        msg3.clear();

    }
    //------------------------------
    if (a1 == false && a2 == true && a3 == true && licz3 == h && licz2 == h)
    {
        if (msg1 != "")
        {
            fout << msg1 << " ";
            //cout << " " << msg1;
            msg1.clear();
            a1 = true;
        }
        else
            a1 = false;
    }
    if (a2 == false && a1 == true && a3 == true && licz1 == h && licz3 == h)
    {
        if (msg2 != "")
        {
            fout << msg2 << " ";
            //cout << " " << msg2;
            msg2.clear();
            a2 = true;
        }
        else
            a2 = false;
    }
    if (a3 == false && a2 == true && a1 == true && licz1 == h && licz2 == h)
    {
        if (msg3 != "")
        {
            fout << msg3 << " ";
            //cout << " " << msg3;
            msg3.clear();
            a3 = true;
        }
        else
            a3 = false;
    }
    ///----------------------
    if (isEmpty(fin1) && isEmpty(fin2) && isEmpty(fin3))
    {
        break;
    }
}
        //-------------------------
    h *= 3;
    fin1.close();
    fin2.close();
    fin3.close();
    fout.close();
    //-------------------------
    ZapisW3Pliki(h);
    
}



int main()
{

    //-------------------------------------
    ZapisW3Pliki(1);
    //---------------------------------------
    cout << "Runtime : " << clock() << " ms" << endl;

	return 0;
}