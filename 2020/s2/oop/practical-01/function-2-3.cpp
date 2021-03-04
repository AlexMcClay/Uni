// function that will count the amount of times the numbers 2, 5 and 9 appear using a switch statement and print them out.
#include <iostream>
#include <stdlib.h>
using namespace std;

void twofivenine(int array[], int n)
{
	//initializing variables
	int finalarray[3] = {0, 0, 0};
	//checking if the size of the array is less than 1
	if (n <1)
	{
		cout << "2:" << finalarray[0] << ";5:" << finalarray[1] << ";9:" << finalarray[2] << ";" << endl;
	}
	//executing the rest of the code
	else
	{
		for (int i = 0; i < n; i++)
		{
			switch(array[i])
			{
				case 2 :
					finalarray[0]++;
					break;
				case 5 :
					finalarray[1]++;
					break;
				case 9 :
					finalarray[2]++;
					break;
				default :
					break;
			}
		}
		cout << "2:" << finalarray[0] << ";5:" << finalarray[1] << ";9:" << finalarray[2] << ";" << endl;
	}
}