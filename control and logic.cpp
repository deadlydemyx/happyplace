// control and logic.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	char cal = 'a';
	int aCnt = 0;
	int eCnt = 0;
	int iouCnt = 0;

	switch (cal)
	{
	case 'a': aCnt++;
	break;
	case 'e': eCnt++;
	break;
	default: iouCnt++;
	break;
	}
	std::cout<< aCnt;
	return 0;
}

