#include<iostream>
#include<unordered_map>
#include<ctime>
#include<fstream>
#include<string>
using namespace std;

int counter = 0;


bool matchesAt(string T, int p, string  W)
{
	for (int i = 0; i < W.length(); i++)
	{
		counter++;
		if (W.at(i) != T.at(p + i)) return false;
	}
	return true;
}

void algorytmNaiwny(string T, string W)
{
	//cout << "Naiwny:  " << endl;
	for (int i = 0; i < T.length() - W.length() + 1; i++)
	{
		if (matchesAt(T, i, W)) cout << "That is:  " << i << endl;
	}
}

void algorytmSundaya(string T, string W)
{
	unordered_map<char, int> lastp;
	for (int i = 0; i < W.length(); i++)
	{
		lastp.insert({ W[i], i });
	}
	//cout << "Sundaya:  " << endl;
	int p = 0;
	while (p < T.length() - W.length())
	{
		if (matchesAt(T, p, W))
		{
			cout << "That is:  " << p << endl;
		}
		p += W.length();
		int last_pos = 0;
		if (p < T.length())
		{
			if (lastp.find(T[p]) == lastp.end()) last_pos = (-1);
			else last_pos = lastp.at(T[p]);
			p -= last_pos;
		}
	}
}

int main()
{
	srand(time(NULL));
	string A = "abcdefghijklmnopqrstuvwxyz";
	string A2, T, W;
	int N = 3;
	int B = 10000;
	for (int i = 0; i < N; i++)
	{
		W.push_back(A[rand() % (A.length())]);
	}
	for (int i = 0; i < N; i++) cout << W[i];
	for (int i = 0; i < N; i++)
	{
		T.push_back(A[rand() % (A.length())]);
	}
	cout << endl;
	for (int i = N; i < B; i++)
	{
		counter = 0;
		T.push_back(A[rand() % (A.length())]);
		cout << "Dlugosc |T| = " << i << endl;
		cout << " Alg.Naiwny: " << endl;
		algorytmNaiwny(T, W);
		cout << "Counter = " << counter << endl;
		ofstream out1("text1_naiv.txt", ios_base::app);
		out1 << counter << endl;
		out1.close();
		counter = 0;
		cout << " Alg.Sundaya: " << endl;
		algorytmSundaya(T, W);
		cout << "Counter = " << counter << endl;
		ofstream out2("text1_sund.txt", ios_base::app);
		out2 << counter << endl;
		out2.close();
		cout << endl;
	}
	counter = 0;
	//cout << "W = " << W << endl;
	//cout << "T = " << T << endl;
	cout << "============================================================================================" << endl;
	W.clear();
	T.clear();
	int C = 40;
	for (int i = 0; i < B; i++)
	{
		T.push_back(A[rand() % (A.length())]);
	}
	for (int i = 0; i < C; i++)
	{
		counter = 0;
		W.push_back(A[rand() % (A.length())]);
		cout << "Dlugosc |W| = " << W.length() << endl;
		cout << W << endl;
		cout << "algorytmNaiwny: " << endl;
		algorytmNaiwny(T, W);
		cout << "Counter = " << counter << endl;
		ofstream out3("text2_naiv.txt", ios_base::app);
		out3 << counter << endl;
		out3.close();
		cout << endl;
		counter = 0;
		cout << "algorytmSundaya: " << endl;
		algorytmSundaya(T, W);
		cout << "Counter = " << counter << endl;
		ofstream out4("text2_sund.txt", ios_base::app);
		out4 << counter << endl;
		out4.close();
		cout << endl;
	}
	counter = 0;
	//cout << "W = " << W << endl;
	//cout << "T = " << T << endl;
	cout << "============================================================================================" << endl;
	W.clear();
	T.clear();
	cout << "Dlugosc |T| = B" << endl;
	cout << "Dlugosc |W| = C" << endl;
	for (int i = 0; i < 20; i++)
	{
		counter = 0;
		A2.push_back(A[i]);
		cout << "Dlugosc |A| = " << A2.length() << endl;
		for (int i = 0; i < B; i++)
		{
			T.push_back(A2[rand() % (A2.length())]);
		}
		for (int i = 0; i < C; i++)
		{
			W.push_back(A2[rand() % (A2.length())]);
		}
		cout << "algorytmNaiwny: " << endl;
		algorytmNaiwny(T, W);
		cout << "Counter = " << counter << endl;
		ofstream out5("text3_naiv.txt", ios_base::app);
		out5 << counter << endl;
		out5.close();
		cout << endl;
		counter = 0;
		cout << "algorytmSundaya: " << endl;
		algorytmSundaya(T, W);
		cout << "Counter = " << counter << endl;
		ofstream out6("text3_sund.txt", ios_base::app);
		out6 << counter << endl;
		out6.close();
		cout << endl;
		counter = 0;
		//cout << "W = " << W << endl;
		//cout << "T = " << T << endl;
		W.clear();
		T.clear();
	}
	return 0;
}