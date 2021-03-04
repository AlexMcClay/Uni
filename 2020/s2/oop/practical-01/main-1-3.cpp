#include <iostream>
#include <stdlib.h>
using namespace std;

extern int count(int*, int, int);

int main(int argc,char **argv)
{
	// defining the arrays
	int array1[5] = { 1, 2, 3, 4, 5 };
	int num1 = 3;
	int array2[3] = {1,1,1};
	int num2 = 1;
	int array3[10] = { 2, 2, 2, 2, 2, 2, 2, 8, 9, 10};
	int num3 = 2;



	// Example 1
	cout << "The number of elements in the first array that are equal to a given parameter are: " << count(array1, 0, num1) << endl;

	// Example 2
	cout << "The number of elements in the second array that are equal to a given parameter are: " << count(array2, 3, num2) << endl;

	// Example 3
	cout << "The number of elements in the third array that are equal to a given parameter are: " << count(array3, 10, num3) << endl;

	return 0 ;
}

