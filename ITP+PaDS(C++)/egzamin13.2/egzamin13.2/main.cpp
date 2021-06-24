#include<iostream>
#include<fstream>
#include"SL.h"
#include"student.h"
using namespace std;


int main()
{
	const int M = 2;
	string file[M]{ "GRA.txt","SID.txt" };
	sznur<student> sz;
	for (unsigned i = 0; i < M; i++)
	{
		ifstream fin(file[i]);
		if (!fin)
		{
			cout << "Nie udalo sie otwarcie pliku:(" << endl;
			fin.close();
			return 0;
		}
	
		while (!fin.eof())
		{
			//string names, surname;
			//int index;
			//float mark;
			//fin >> surname;
			//fin.ignore();
			string line;
			getline(fin, line);
			cout << line.substr(' ', line.rfind(' ')-1) << endl;

		}
		fin.close();
	}

	return 0;
}