#include <iostream>
#include <stdlib.h>

extern int sum_array(int*, int);

int main(int argc,char **argv)
{
	// defining the arrays
	int array1[5] = { 1, 2, 3, 4, 5 };
	int array2[3] = {1,10,100};
	int array3[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};



	// Example 1
	std::cout << "The sum of the first array is is: " << sum_array(array1, 5) << std::endl;

	// Example 2
	std::cout << "The sum of the second array is is: " << sum_array(array2, 3) << std::endl;

	// Example 3
	std::cout << "The sum of the third array is is: " << sum_array(array3, 10) << std::endl;

	return 0 ;
}

