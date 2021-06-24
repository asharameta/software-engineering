#ifndef kistki_H
#define kostki_H

#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<ctime>


static int ileKostek = 0;

class kostka
{
public:
    kostka(int i) : ileOczek(i) { ileKostek++; }
    ~kostka() {}
    virtual void losuj() {
        srand(time(NULL));
        int temp = 1 + rand() % getIleOczek();
        cout << temp << endl;
    }
    static int getIle() { return ileKostek; }
    virtual int getIleOczek() { return ileOczek; }
    kostka& operator=(const kostka& k) {
        if (this == &k) return *this;
        ileOczek = k.ileOczek;
        return *this;
    }
    bool operator==(const kostka& k)
    {
        if (ileOczek == k.ileOczek) return true;
        return false;
    }

private:
    int ileOczek;

};


class KolorowaKostka: public kostka
{
public:
    KolorowaKostka(string k, int i) : kostka(i) { kolor = k; }
    ~KolorowaKostka() {};
    string getKolor() { return kolor; }

    void losuj() {
        int temp = 1 + rand() % getIleOczek();
        cout << getKolor() << ":" << temp << endl;
    }
    KolorowaKostka& operator=(const KolorowaKostka& k)
    {
        if (this == &k) return *this;
        IleOczek = k.IleOczek;
        kolor = k.kolor;
        return *this;
    }

private:
	int IleOczek;
	string kolor;

};

#endif // !kistki_H
