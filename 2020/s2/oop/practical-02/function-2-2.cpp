// function that print out a multiple of a matrix
#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;

int binary_to_number(int binary_digits[], int number_of_digits)
{

	int num = 0;
	int remainder;

	for (int i = 0; i < 31; ++i)
	{
		int power = pow(2,(number_of_digits-i-1));
		num = num + binary_digits[i]*(power);
	}

	return num;
}
