#include <iostream>
#include <stdlib.h>

extern int sumtwo(int*, int*, int);

int main(int argc,char **argv)
{
	// defining the arrays
	//array 1
	int array11[5] = {1, 2, 3, 4, 5 };
	int array12[5] = {6, 7, 8, 9, 10};
	// array 2
	int array21[3] = {1,1,1};
	int array22[3] = {2,2,2};
	//array 3
	int array31[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
	int array32[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};


	// Example 1
	std::cout << "The sum of the first two arrays are: " << sumtwo(array11, array12, 5) << std::endl;

	// Example 2
	std::cout << "The sum of the second two arrays are: " << sumtwo(array21, array22, 3) << std::endl;

	// Example 3
	std::cout << "The sum of the third two arrays are: " << sumtwo(array31, array32, 10) << std::endl;

	return 0 ;
}