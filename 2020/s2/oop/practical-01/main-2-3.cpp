#include <iostream>
#include <stdlib.h>
using namespace std;

extern void twofivenine(int*,int);

int main(int argc,char **argv)
{
	// defining the arrays
	//array 1
	int array1[5] = {2, 2, 5, 9, 5 };

	// array 2
	int array2[3] = {2, 2, 5};

	//array 3
	int array3[10] = {2, 2, 5, 2, 2, 5, 2, 2, 5, 9};

	//Example 1
	twofivenine(array1, 5);

	//Example 2
	twofivenine(array2, 3);

	//Example 3
	twofivenine(array3, 10);

	return 0 ;
}