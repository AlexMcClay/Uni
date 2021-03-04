// function that print out a multiple of a matrix
#include <iostream>
#include <stdlib.h>
#include <string>
#include <cmath>
using namespace std;

void print_as_binary(std::string decimal_number)
{

	long int num = stoi(decimal_number);

	int count = 0;
	int binary[31];
	int remainder;
	for (int i = 0; i < 31; ++i)
	{

		int power = pow(2,(30-i));
		remainder = num % power;
		if (num != 0) 
		{
			
			if (remainder != num)
			{
				binary[i] = 1;
				num = num - power;
			}
			else
			{
				binary[i] = 0;

			}
			//cout << "Power: " <<power << " Num: " << num << " Remainder: " << remainder << endl;
		}
		else
		{
			binary[i] = 0;
			//cout << "Power: " <<power << " Num: " << num << " Remainder: " << remainder << endl;
		}
	}

	// Check for Significant bit
	while (count == 0)
	{
		for (int i = 0; i < 31; ++i)
		{
			count = i;
			if (binary[i] == 1)
			{
				break;
			}
		}
	}

	// Printing
	for (int i = count; i < 31; ++i)
	{
		cout << binary[i];
	}
	cout << endl;
}
