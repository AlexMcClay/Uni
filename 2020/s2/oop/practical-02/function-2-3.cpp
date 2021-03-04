// function that print out a multiple of a matrix
#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;


int sum_elements(int integers[], int length)
{
	int sum = 0;
	if (length < 1)
	{
		return -1;
	}
	else
	{
		for (int i = 0; i < length; ++i)
		{
		sum = sum +integers[i];
		}
		return sum;
	}
}

bool is_a_palindrome(int integers[], int length)
{
	//initializing variables
	int count = 0;
	int mid = floor(float(length/2));
	//checking if the size of the array is less than 1
	if (length < 1)
	{
		return false;
	}
	//executing the rest of the code
	else
	{
		if (length%2 ==0)
		{
			for (int i = (mid); i < length; i++)
			{
				if (integers[i] == integers[length-i-1])
				{
					count++;
				}
			}
		}	
		else
		{
			for (int i = (mid+1); i < length; i++)
			{
				if (integers[i] == integers[length-i-1])
				{
					count++;
				}
			}

		}
		
		if (count == mid)
		{
			return true;
		}
		else 
		{
			return false;
		}
	}
}


int sum_if_a_palindrome(int integers[], int length)
{
	int sum;
	bool check;

	//check if palindrome
	check = is_a_palindrome(integers, length);

	if (length < 1)
	{
		return -1;
	}
	else
	{
		if (check == false)
		{
			return -2;
		}
		else
		{
			sum = sum_elements(integers, length);
			return sum;
		}
	}
}

