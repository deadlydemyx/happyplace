// 1-10loop.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	for (int x = 0; x < 11; x++)
	{
				for( int y = 0; y < 11; y++)
		{
			cout << y;
		}
		cout << endl;
	}

	cin.get();
	cin.get();
	return 0;
}

