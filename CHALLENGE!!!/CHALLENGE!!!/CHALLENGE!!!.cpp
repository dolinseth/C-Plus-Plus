// CHALLENGE!!!.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int apples;
int _tmain(int argc, _TCHAR* argv[])
{
	cout << "How many apples do you have?" << endl;
	cin >> apples;
	while (apples <= 5)
	{
	cout << "Thats all? You need more! How many do you have now?" << endl;
	cin >> apples;
	}
	cout << "Thats much better, now you have plenty of apples" << endl;
	return 0;
}

