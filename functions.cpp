#include <iostream>

void menu();
void add(float num, float numTwo);
void sub(float num, float numTwo);
void multi(float num, float numTwo);
void division(float num, float numTwo);
void mod(int num, int numTwo);
using namespace std;

int main()
{
	bool bExit = false;
	int iChoice;
	float numOne, numTwo;
	while(bExit == false)
	{
		cout << "Enter in two numbers." << endl;
		cin >> numOne;
		cin >> numTwo;
		
		menu();
		cin >> iChoice;
		iChoice = iChoice - 1;
		switch(iChoice)
		{
		case 0: add(numOne, numTwo);
				break;
		case 1: sub(numOne, numTwo);
				break;
		case 2: multi(numOne, numTwo);
				break;
		case 3: division(numOne, numTwo);
				break;
		case 4: mod(numOne, numTwo);
				break;
		case 5: bExit = true;
				break;
		}
	}

	cin.get();
	cin.get();
	return 0;
}

void menu()
{
	cout << "1. Add	     2. Subtract" << endl
		<<	"3. Multiply  4.Division" << endl
		<<	"5. Mod		6. Exit" << endl;
	return;
}

void add(float numOne, float numTwo)
{
	float total = numOne + numTwo;
	cout << total << endl;
	return;
}

void sub(float numOne, float numTwo)
{
	float total = numOne - numTwo;
	cout << total << endl;
	return;
}

void multi(float numOne, float numTwo)
{
	float total = numOne * numTwo;
	cout << total << endl;
	return;
}

void division(float numOne, float numTwo)
{
	if (numOne == 0 || numTwo == 0)
	{
		cout << "Please do not enter a zero. " << endl;
		return;
	}
	float total = numOne / numTwo;
	cout << total << endl;
	return;
}

void mod((int)numOne, (int)numtwo)
{
	int total = numOne % numTwo;
	cout << total << endl;
	return;
}