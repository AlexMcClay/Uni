#include <iostream>
#include <stdlib.h>
using namespace std;

extern int minimum(int*, int);

int main(int argc,char **argv)
{
	// defining the arrays
	//array 1
	int array1[5] = {1, 2, 3, 4, 5 };

	// array 2
	int array2[3] = {0,1,-10};

	//array 3
	int array3[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};


	// Example 1
	cout << "The minimun number in the array is: " << minimum(array1, 5) << endl;

	// Example 2
	cout << "The minimun number in the array is: " << minimum(array2, 3) << endl;

	// Example 3
	cout << "The minimun number in the array is: " << minimum(array3, 10) << endl;

	return 0 ;
}