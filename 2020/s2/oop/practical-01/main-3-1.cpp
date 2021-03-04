#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

extern bool fanarray(int*,int);

int main(int argc,char **argv)
{
	// defining the arrays
	//array 1
	int array1[5] = {1, 2, 3, 2, 1};

	// array 2
	int array2[2] = {2,2};

	//array 3
	int array3[10] = {1, 2, 3, 4, 5, 5, 4, 3, 2, 1};

	//Example 1
	cout << boolalpha << fanarray(array1, 5) << endl;

	//Example 2
	cout << boolalpha << fanarray(array2, 2) << endl;

	//Example 3
	cout << boolalpha << fanarray(array3, 10) << endl;

	return 0;
}