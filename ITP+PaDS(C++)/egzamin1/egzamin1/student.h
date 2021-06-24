#ifndef S_H
#define S_H

#include<string>
using namespace std;

struct student
{
private:
	string surname;
	string names;
	int index;
	float mark;
public:
	string getNames() { return names; }
	string getSurname() { return surname; }
	int getIndex() { return index; }
	float getMark() { return mark; }
	void setNames(string n)
	{
		for (int i = 0; i < n.size(); i++)
		{
			if (n[i]>='A' && n[i]<='Z')
			{
				names += n[i];
				names += ".";
			}
		}
		//names = n;
	}
	void setSurname(string s) { surname = s; }
	void setIndex(int i) { index = i; }
	void setMark(float m)
	{
		if (m > 2 && m < 5)
		{
			mark = m;
		}
		else
		{
			mark = 0;
		}
	}
};


#endif // !S_H

