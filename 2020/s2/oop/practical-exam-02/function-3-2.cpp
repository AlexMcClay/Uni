// function that print out a multiple of a matrix
#include <iostream>
#include <stdlib.h>
#include <string>
#include <cmath>
using namespace std;

int *createArray(int n)
{
	int input;
	int *array;
	array = new int [n];
	for (int i = 0; i < n; ++i)
	{
		cin >> input;
		array[i] = input;
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


void okToEat(int* ratings, int len)
{
	for (int i = 0; i < len; ++i)
	{
		switch (ratings[i])
		{
			case 100:
				cout << i << " " << ratings[i] << " " << "Super clean, Very safe" << endl;
				break;
			case 80:
				cout << i << " " << ratings[i] << " " << "Won't get you sick" << endl;
				break;
			case 60:
				cout << i << " " << ratings[i] << " " << "Make sure it's well-done" << endl;
				break;
			case 40:
				cout << i << " " << ratings[i] << " " << "No" << endl;
				break;
			default:
				cout  << "Sorry, unknown ranking." << endl;
		}
	}
}

void bonus(int *numbers, int length)
{

	for (int i = 0; i < length; ++i)
	{
		numbers[i] = numbers[i] +50.55;
		if (numbers[i] < 0)
		{
			cout << "Negative account: " << numbers[i] << ".45"<< endl;
		}
		else
		{
			cout << "New value: " << numbers[i] << ".55" << endl;
		}
	}
}

bool sortedArray(int *numbers,int length)
{
	if (length < 1)
	{
		return false;
	}
	for (int i = 1; i < length; ++i)
	{
		if (numbers[i] <= numbers[i-1])
		{
			return false;
		}
	}

	return true;
}