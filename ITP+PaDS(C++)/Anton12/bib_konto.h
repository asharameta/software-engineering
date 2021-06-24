#ifndef BIB_KONTO_H_INCLUDED
#define BIB_KONTO_H_INCLUDED
#include"bib_list.h"
struct kont{
private:
    string iban;
public:
    kont(string k=""){iban = k;}
    bool operator>=(const kont&k){return iban >= k.iban;}
    bool operator <(const kont&k){return iban < k.iban;}
    string dajkod(){return iban.substr(4,4);}
    string dajbank(){return iban;}
friend ostream& operator<<(ostream &s, const kont&k)
{
    s<<k.iban<<endl;
    return s;
}
};


#endif // BIB_KONTO_H_INCLUDED
