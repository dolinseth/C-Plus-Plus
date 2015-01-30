// if and or.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int x;
char yorn;
int y;
int _tmain(int argc, _TCHAR* argv[])
{
	cout << "do you know how old you will be in 23 years? say y for yes, or n for no." << endl;
	cin >> yorn;
	if (yorn = 'n')
	{
	cout << "Ok, how old are you?" << endl;
	cin >> x;
	cout << "In 23 years you will be " << x+23 << " years old!" << endl;
	}
	cout << "Now you know!!!" << endl;
	return 5;
}