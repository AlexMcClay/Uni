#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

extern void cpyda(double*,double*,int);

int main(int argc,char **argv)
{
	double array1[4] = {4, 3, 2, 1};
	double array2[4];

	//Example 1
	cpyda(array1, array2, 4);

	for (int i = 0; i < 4; ++i)
	{
		cout << array2[i] << endl;
	}

	return 0;
}