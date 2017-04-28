// CliTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
void GetString(char* pOutput, int nLen, char* pInput)
{
	sprintf_s(pOutput, nLen, "Hello %s. Have a nice day!", pInput); 
}

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Hello. What is your name?" << endl;
	
	char input[10];
	cin >> input;

	char arr[100];
	GetString(arr, 100, input);
	cout << arr << endl;

	return 0;
}

