// numerical arrays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int aScores[10];
	int iCount = 0;
	cout << "enter 10 numbers between 1 and 100" << endl;
	while (iCount < 10)
	{
		cin >> aScores[iCount];
		iCount++;
	}
	cout << "here is the list." <<endl;
	for(int i = 0; i < 10; i++)
		cout << aScores[i]<< endl;

	int n = 10;
	int i, j, minIndex, tmp;
	for (i = 0; i < n - 1;i++){
		minIndex = i;
	for (j= i +1; j<n; j++)
		 if (aScores[j] < aScores[minIndex])
	minIndex = j;
	if(minIndex != i){
		tmp = aScores[i];
		aScores[i] = aScores[minIndex];
		aScores[minIndex] =tmp;
	}
	}

	cout << "here is the list."<<endl;
	for(int i = 0; i < 10; i++)
		cout << aScores[i]<< endl;
	cin.get();
	cin.get();

	return 0;
}

