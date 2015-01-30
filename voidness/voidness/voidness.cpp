// voidness.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int multiply (int x, int y);
int _tmain(int argc, _TCHAR* argv[])
{
	cout << multiply (100, 233445677) << endl;
	return 0;
}
int multiply(int x,int y)
{
int z=x*y;
	return z;
}

