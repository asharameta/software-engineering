#include<iostream>
#include<fstream>
#include"List.h"
#include"student.h"


int main()
{
	
	const int M = 2;
	string GRA= { "GRA.txt"};
	string SID = { "SID.txt" };
	string kierunki[M]{ "GRA.txt" ,  "SID.txt" };
	sznur<student>sz[M];
	for (unsigned i = 0; i < M; i++)
	{
		ifstream fin(kierunki[i]);
		if (!fin)
		{
			cout << "Nie udalo sie otwarcie pliku:(" << endl;
			fin.close();
			return 1;
		}
		string msg, temp;
		while (!fin.eof())
		{
			string _n, _s;
			int _i;
			float _m;
			fin >> _s;
			fin >> _n;
			while (fin >> temp && !std::isdigit(temp[0])) {
				_n += " " + temp;
			}
			_i = stoi(temp);
			fin >> temp;
			_m = stof(temp);
			try
			{
				student st;
				st.setNames(_n);
				st.setSurname(_s);
				st.setIndex(_i);
				st.setMark(_m);
				sz->wstaw(st);
			}
			catch (const std::exception& e)
			{
				cout << e.what() << endl;
			}
		}
		fin.close();
	}
	
	string wynik = { "INF.txt" };
	ofstream fout(wynik);
	while (sz->counter()>0)
	{
		student st = sz->pop();
		fout << st.getIndex() << ";" << st.getMark() << ";" << st.getSurname() << ";" << st.getNames() << endl;
		fout << "0 znaczy ze ocena jest niepoprawna." << endl;
	}
	fout.close();


	return 0;
}