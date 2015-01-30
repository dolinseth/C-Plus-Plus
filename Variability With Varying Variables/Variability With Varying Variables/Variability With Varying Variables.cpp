// Variability With Varying Variables.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int duck;
string chicken;
char turkey;
int _tmain(int argc, _TCHAR* argv[])
{
	cout << "how many ducks do you have?" << endl;
	cin >> duck;
	cout << "you have " << duck << " ducks" << endl;

	cout << "what is your chicken's name?" << endl;
	cin >> chicken;
	cout << "your chicken's name is " << chicken << endl;

	cout << "what is the first letter of your turkey's name?" << endl;
	cin >> turkey;
	cout << "the first letter of your turkey's name is " << turkey << endl;
	return 0;
}

