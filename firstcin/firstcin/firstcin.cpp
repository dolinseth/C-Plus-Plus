// firstcin.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int duck;
int _tmain(int argc, _TCHAR* argv[])
{
	cout << "how many ducks do you have?" << endl;
	cin >> duck;
	cout << "you have " << duck << " ducks" << endl;
	return 0;
}

