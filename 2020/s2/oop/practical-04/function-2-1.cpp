// function that will add the diagonals.
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

void print_sevens(int *nums,int length)
{

	for (int i = 0; i < length; ++i)
	{
		if ((*(nums+i))%7 == 0 )
		{
			cout << (*(nums+i)) << endl;
		}
	}

}