#include<iostream>
#include<fstream>
#include<string>
using namespace std;


int main()
{
	string path="tt.txt";
	/*cout << "Podaj nazwe pliku: "; cin >> path;
	fout.open(path, ofstream::app);


	if (!fout.is_open())
	{
		cout << "Blad otwarcia pliku!" << endl;
	}
	else
	{
		fout << "wiedzy ze ten napis jest zapisany do pliku.\n";
	}*/
	ifstream fin;
	fin.open(path);
	if (!fin.is_open())
	{
		cout << "Blad otwarcia pliku!" << endl;
	}
	else
	{
		cout << "Plik otwarty!\n__________________" << endl;
		string str;
		while (!fin.eof())
		{
			str = "";
			getline(fin, str);
			cout << str << endl;
		}
	}


	fin.close();
	return 0;
}