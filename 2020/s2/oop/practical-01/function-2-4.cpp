// function that will check if the given array is in accending order.
#include <iostream>
#include <stdlib.h>
using namespace std;

bool ascending(int array[], int n)
{
	//initializing variables
	int count = 1;
	//checking if the size of the array is less than 1
	if (n <= 0)
	{
		return false;
	}
	// if theres is only one element, then it returns true
	else if (n == 1) 
	{
		return true;
	}
	//executing the rest of the code
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (i == 0) 
			{
				// does nothing when i == 0 because its the first element, so theres noting to compare
			}
			else
			{
				if (array[i] >= array[i-1])
				{
					count++;
				}
			}
		}
		if (count == n)
		{
			return true;
		}
		else 
		{
			return false;
		}
	}
}