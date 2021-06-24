#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

//GuessGame

int main() {
	srand(time(NULL));
	int range, guess, goal, ilosc=0;
	int start = 0;
	cout << "Dodaj przedial liczb: " << endl;
	cin >> range;
	for (int i = 0; i < range; i++)
	{
		guess = range % 2;
		cout << "Twoja liczba: " << guess << " ?" << endl;
		cout << "1 - mala\n2 - duza" << endl;
		cin >> goal;
		if (goal==1)
		{
			goal = 0;
			start = guess;
			guess = (range - start);
			cout << "Twoja liczba: " << start + guess << " ?" << endl;
			cout << "1 - mala\n2 - duza" << endl;
			cin >> goal;
			if (goal == 1)
			{
				start = guess;
				guess = (range - start);
				cout << "Twoja liczba: " << start + guess << " ?" << endl;
				cout << "1 - mala\n2 - duza" << endl;
				cin >> goal;
				if (goal == 1)
				{
					start = guess;
					guess = (range - start);
					cout << "Twoja liczba: " << start + guess << " ?" << endl;
					cout << "1 - mala\n2 - duza" << endl;
					cout << "POshel naxuy" << endl;
				}
				else
				{
					range = range % 2;
					guess = range % 2;
					cout << "Twoja liczba: " << guess << " ?" << endl;
					cout << "1 - mala\n2 - duza" << endl;
					cout << "POshel naxuy" << endl;

				}
			}
		}
	}


	return 0;
}