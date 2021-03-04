#include <iostream>
#include <stdlib.h>
using namespace std;

extern bool descending(int*,int);

int main(int argc,char **argv)
{
	// defining the arrays
	//array 1
	int array1[5] = {2, 4, 5, 9, 10 };

	// array 2
	int array2[2] = {2, 1};

	//array 3
	int array3[10] = {2, 2, 5, 2, 2, 5, 2, 2, 5, 9};

	//Example 1
	cout << boolalpha << descending(array1, 5) << endl;

	//Example 2
	cout << boolalpha << descending(array2, 2) << endl;

	//Example 3
	cout << boolalpha << descending(array3, 10) << endl;

	return 0;
}