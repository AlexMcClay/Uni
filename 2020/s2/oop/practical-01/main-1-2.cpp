#include <iostream>
#include <stdlib.h>

extern double average(int*, int);

int main(int argc,char **argv)
{
	// defining the arrays
	int array1[5] = { 1, 2, 3, 4, 5 };
	int array2[3] = {1,10,100};
	int array3[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};



	// Example 1
	std::cout << "The average of the first array is is: " << average(array1, 5) << std::endl;

	// Example 2
	std::cout << "The average of the second array is is: " << average(array2, 3) << std::endl;

	// Example 3
	std::cout << "The average of the third array is is: " << average(array3, 10) << std::endl;

	return 0 ;
}

