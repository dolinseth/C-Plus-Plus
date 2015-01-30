// Array 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int score [8];
int i;
int _tmain(int argc, _TCHAR* argv[])
{
	for (i = 1; i <9; i++)
	{
	cout << "what is the next score?" << endl;
	cin >> score [i];
	}
	for (i = 1; i <9; i++)
	{
	cout << "student " << i << "'s score is: " << score [i] << endl;
	}
	return 0;
}

