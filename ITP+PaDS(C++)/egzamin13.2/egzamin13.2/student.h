#ifndef S_H
#define S_H

#include"SL.h"
#include<string>
using namespace std;

struct student
{
private:
	string name;
	string surname;
	int index;
	float mark;
	//student(string im,string nz, int ind, float oc) :name(im), surname(nz), index(ind), ocena(oc) {}
public:
	void setNames(string _name) { name = _name; }
	void setSurname(string _surname) { surname = _surname; }
	void setIndex(int _index)
	{
		if (_index<0)
		{
			cout << "zly index!" << endl;
			return;
		}
		else
		{
			index = _index;
		}
	}
	void setMark(float _mark)
	{
		if (_mark<2||_mark>5)
		{
			cout << "Zla ocena!" << endl;
			return;
		}
		else
			mark = _mark;
	}
	string getName() const { return name; }
	string getSurname() const { return surname; }
	int getIndex() const { return index; }
	float getMark() const { return mark; }
	bool operator<(const student& st) const { return index < st.index; }
	bool operator<=(const student& st) const { return index <= st.index; }
	friend ostream& operator<<(ostream& os, const student& st)
	{
		os << st.index << ";" << st.mark << ";" << st.surname << " " << st.name << endl;
		return os;
	}
};

#endif // !S_H

