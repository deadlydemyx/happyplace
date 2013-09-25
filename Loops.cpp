// Loops.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>

using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{

    bool exit = false;
	unsigned char key_status[256];
	GetKeyboardState(key_status);
    while(exit == false)
    {
        if (GetAsyncKeyState(VK_ESCAPE)|| GetAsyncKeyState('Q'))
        {
            exit = true;
        }
        std::cout<<"press esc to exit!!!!!!! "<<std::endl;
    }

    std::cout<<"exited: "<<std::endl;

    return 0;
}