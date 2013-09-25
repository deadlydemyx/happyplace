int _tmain(int argc, _TCHAR* argv[])
#include "stdafx.h"
#include <iostream>
using namespace std;


int main ()
{
   int a = 10;

   while( a <= 20 )
   {
	   int b;
       cout << "Enter a value ";
	   cin>> b;
	   a = a + b;
    
   }
 
   return 0;
}