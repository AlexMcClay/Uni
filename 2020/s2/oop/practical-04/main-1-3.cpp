#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

extern void cpyia(int*,int*,int );

int main(int argc,char **argv)
{
	int array1[4] = {4, 3, 2, 1};
	int array2[4];

	//Example 1
	cpyia(array1, array2, 4);

	for (int i = 0; i < 4; ++i)
	{
		cout << array2[i] << endl;
	}

	return 0;
}