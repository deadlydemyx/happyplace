#include <iostream>
#include <string>
#include <Windows.h>
#include <ctime>
#include <cstdlib>


using namespace std;

int main()
{
/*
	bool exit = false;
	unsigned char key_status[256];
    GetKeyboardState(key_status);
*/
	
	// fighting parties
	string sDead = " ";
	bool exit = false;
	int aCharacters[5] = {100, 100, 100, 100, 100};
	int aParties[4] = {100, 100, 100, 100};
	int iPick;
	int iPicks;

	while(exit == false)
	{
	// party 1
	iPick = rand() % 4 + 0;
	
	srand((unsigned)time(0));
	int iDamages;
	iDamages = (rand()%6)+1;
	if (iDamages > 100)
		iDamages = 100;

	if (aCharacters[iPick] <= 0)
	cout << sDead << endl;
	else
	aCharacters[iPick] = aCharacters[iPick] - iDamages;
	// party 1

	// party 2
	iPicks = rand() % 3 + 0;
	
	srand((unsigned)time(0));
	int iDamagess;
	iDamagess = (rand()%7)+1;
	if (iDamagess > 100)
		iDamagess = 100;

	if (aCharacters[iPick] <= 0)
	cout << sDead << endl;
	else
	aParties[iPick] = aParties[iPick] - iDamagess;
	// party 2

	//cout << aCharacters[iPick] << endl;
	//cout << aParties[iPick] << endl;
	
	for (int j = 0; j < 4; j++)
	{
		if (aCharacters[j] == 0)
		{
			cout << "Party 2 has won." << endl;
			exit = true;
		}
	}

	for (int y = 0; y < 3; y++)
	{
		if (aParties[y] == 0)
		{
			cout << "Party 1 has won." << endl;
			exit = true;
		}
	}
	
	};
	


/*
	// Pick a character to attack
	int iSelection;
	int iDamage;
	
	while(exit == false)
	{

		cout << "Select a number to attack (1-5). " << endl;
		cin >> iSelection;
		iSelection = iSelection - 1;
		cout << "Type how much damage you want to do." << endl;
		cin >> iDamage;
		if (iDamage > 100)
			iDamage = 100;
		switch(iSelection)
		{
		case 0: if (aCharacters[0] <= 0)
				cout << sDead << endl;
				else
				aCharacters[0] = aCharacters[0] - iDamage;
				cout << "Health left: " << aCharacters[0] << endl;
				break;
		case 1: if (aCharacters[1] <= 0)
				cout << sDead << endl;
				else
				aCharacters[1] = aCharacters[1] - iDamage;
				cout << "Health left: " << aCharacters[1] << endl;
				break;
		case 2: if (aCharacters[2] <= 0)
				cout << sDead << endl;
				else
				aCharacters[2] = aCharacters[2] - iDamage;
				cout << "Health left: " << aCharacters[2] << endl;
				break;
		case 3: if (aCharacters[3] <= 0)
				cout << sDead << endl;
				else
				aCharacters[3] = aCharacters[3] - iDamage;
				cout << "Health left: " << aCharacters[3] << endl;
				break;
		case 4: if (aCharacters[4] <= 0)
				cout << sDead << endl;
				else
				aCharacters[4] = aCharacters[4] - iDamage;
				cout << "Health left: " << aCharacters[4] << endl;
				break;
		default: cout << "Please enter a valid selection." << endl;
				break;
		
		}

		if (GetAsyncKeyState(VK_ESCAPE))
		{
			exit = true;
			break;
		}
		
	}
*/

	cin.get();
	cin.get();
	return 0;

}