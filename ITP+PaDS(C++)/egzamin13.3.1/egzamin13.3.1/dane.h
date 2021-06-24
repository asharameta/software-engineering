#ifndef D_H
#define D_H

#include<string>
using namespace std;

struct info
{
private:
	string name;
	string surname;
	string pesel;
public:
	void setName(string);
	void setSurname(string);
	void setPesel(string);
	string getName();
	string getSurname();
	string getPesel();
	string getD();
	string getM();
	string getY();
	bool operator<(info& i);

};

void info::setName(string n)
{
	name = n;
}

void info::setSurname(string s)
{
	surname = s;
}

void info::setPesel(string p)
{
	pesel = p;
}

string info::getName()
{
	return name;
}
string info::getSurname()
{
	return surname;
}
string info::getPesel()
{
	return pesel;
}
string info::getD()
{
	
}
string info::getM()
{
	
}
string info::getY()
{
	
}


bool info::operator<(info& i)
{
	
}

#endif // !D_H

