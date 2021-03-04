// function that will check if the given array is fan array.
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

bool fanarray(int array[], int n)
{
	//initializing variables
	int count = 0;
	int mid = floor(float(n/2));
	//checking if the size of the array is less than 1
	if (n < 1)
	{
		return false;
	}
	//executing the rest of the code
	else
	{
		if (n%2 ==0)
		{
			for (int i = (mid); i < n; i++)
			{
				if (array[i] == array[n-i-1])
				{
					count++;
				}
			}
		}	
		else
		{
			for (int i = (mid+1); i < n; i++)
			{
				if (array[i] == array[n-i-1])
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