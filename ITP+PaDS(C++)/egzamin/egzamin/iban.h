#ifndef bank_H
#define bank_H
#include<string>
#include"SList.h"
using namespace std;

struct IBAN
{
private:
	string number;
public:
	IBAN() = default;
	void setNumber(string nr) { number = nr; }
	string getNumber() { return number; }
	string getCode() { return number.substr(4, 4); }
	friend ostream& operator<<(ostream& os, const IBAN& ib)
	{
		os << ib.number <<endl;
		return os;
	}
	bool operator<=(const IBAN& ib) { return number <= ib.number; }
	bool operator<(const IBAN& ib) { return number < ib.number; }

};


#endif // !bank_H

