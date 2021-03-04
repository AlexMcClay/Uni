// function that print out a multiple of a matrix
#include <iostream>
#include <stdlib.h>
#include <string>
#include <cmath>
using namespace std;

int *createArray(int n)
{
	int *array;
	array = new int [n];
	for (int i = 0; i < n; ++i)
	{
		array[i] = i+1;
	}
	return array;

}

void displayArray(int *numbers, int length)
{
	for (int i = 0; i < length; ++i)
	{
		cout << i << " " << numbers[i] << endl;
	}
}