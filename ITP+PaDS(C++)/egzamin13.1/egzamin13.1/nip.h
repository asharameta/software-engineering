#ifndef N_H
#define N_H

#include<string>
using namespace std;

struct NIP
{
private:
	string nip;
	string podatnik;
	string urzad;
public:
	void setUrzad(string n) { urzad = n.substr(0, 3); }
	void setNip(string n) { nip = n; }
	void setPodatnik(string p) { podatnik = p; }
	string getNip() { return nip; }
	string getUrzad() { return urzad; }
	string getPodatnik() { return podatnik; }
	bool operator<(NIP& n)
	{
		return nip < n.nip;
	}

};


#endif // !N_H

