// function that will check if the matrix is an identity matrix
#include <iostream>
#include <stdlib.h>
using namespace std;

int identity(int array[10][10])
{
	int check = 0;
	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			if (j == i)
			{
				if (array[i][i] == 1)
				{
					check++;

				}
				else
				{
					check = 0;
					return 0;
				}
			}
			else
			{
				if (array[i][j] == 0)
				{
					check++;
				}
				else
				{
					check = 0;
					return 0;
				}
			}
		}
	}
	if (check == 100)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}