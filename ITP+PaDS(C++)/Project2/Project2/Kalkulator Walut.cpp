#include<iostream>
using namespace std;

int main() {
	//Napisać program zamieniający kwotę w złotówkach pobraną od użytkownika na dolary, euro i franki szwajcarskie.
	//Wyniki wypisać z dokładnością do dwóch miejsc po przecinku.
	//*na 11.10.19 kurs euro do zlota "0,232". dolara do zlota "0,255". franka szwajcarskiego do zlota "0,255"
	int zlot;
	cout << "Ile zlotych chcesz zmienic?" << endl;
	cout << "1. ";
	cin >> zlot;
	system("cls");
	cout << zlot << " zlotych" << endl;
	cout << zlot << " zlotych w euro = " << zlot * 0.23 << endl;
	cout << zlot << " zlotych w dolarach = " << zlot * 0.25 << endl;
	cout << zlot << " zlotych w frankach szwajcarskich = " << zlot * 0.25 << endl;
  return 0;
}