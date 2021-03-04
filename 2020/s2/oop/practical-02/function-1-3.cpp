// function that will add the diagonals.
#include <iostream>
#include <stdlib.h>
using namespace std;

void count_numbers(int array[4][4])
{
	int num0 = 0;
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	int num5 = 0;
	int num6 = 0;
	int num7 = 0; 
	int num8 = 0;
	int num9 = 0;
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			if (array[i][j] == 0)
			{
				num0++;
			}
			else if (array[i][j] == 1)
			{
				num1++;
			}
			else if (array[i][j] == 2)
			{
				num2++;
			}
			else if (array[i][j] == 3)
			{
				num3++;
			}
			else if (array[i][j] == 4)
			{
				num4++;
			}
			else if (array[i][j] == 5)
			{
				num5++;
			}
			else if (array[i][j] == 6)
			{
				num6++;
			}
			else if (array[i][j] == 7)
			{
				num7++;
			}
			else if (array[i][j] == 8)
			{
				num8++;
			}
			else if (array[i][j] == 9)
			{
				num9++;
			}
			else 
			{
				// Nothing
			}
		}
	}
	cout << "0:" << num0 << ";1:" << num1 << ";2:" << num2 << ";3:" << num3 << ";4:" << num4 << ";5:" << num5 << ";6:" << num6 << ";7:" << num7 << ";8:" << num8 << ";9:" << num9 << ";" << endl;
}
