#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <string>
using namespace std;

int *readNumbers()
{

	int *array;
	array = new int[10];

	for (int i = 0; i < 10; ++i)
	{
		cin >> array[i];
	}
	
	return array;
}

void printNumbers(int *numbers,int length)
{
	for (int i = 0; i < length; ++i)
	{
		cout << i << " " << numbers[i] << endl;
	}
}

void hexDigits(int *numbers,int length)
{
	string *hex;
	hex = new string[length];

	for (int i = 0; i < length; ++i)
	{
		switch (numbers[i])
		{
			case 0:
				hex[i] = "0";
				break;
			case 1:
				hex[i] = "1";
				break;
			case 2:
				hex[i] = "2";
				break;
			case 3:
				hex[i] = "3";
				break;
			case 4:
				hex[i] = "4";
				break;
			case 5:
				hex[i] = "5";
				break;
			case 6:
				hex[i] = "6";
				break;
			case 7:
				hex[i] = "7";
				break;
			case 8:
				hex[i] = "8";
				break;
			case 9:
				hex[i] = "9";
				break;
			case 10:
				hex[i] = "A";
				break;
			case 11:
				hex[i] = "B";
				break;
			case 12:
				hex[i] = "C";
				break;
			case 13:
				hex[i] = "D";
				break;
			case 14:
				hex[i] = "E";
				break;
			case 15:
				hex[i] = "F";
				break;
		}
	}
	for (int i = 0; i < length; ++i)
	{
		cout << i << " " << numbers[i] << " " << hex[i] << endl;
	}

	delete[] hex;
}