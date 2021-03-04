#include <iostream>
#include <stdlib.h>
using namespace std;

extern void count_numbers(int[4][4]);

int main(int argc,char **argv)
{
	int array1[4][4] = {{0,1,2,3}, {0,1,2,3}, {0,1,2,3}, {0,1,2,3}};
	int array2[4][4] = {{0,2,4,6}, {0,2,4,6}, {10,1,3,5}, {0,1,3,5}};
	int array3[4][4] = {{9,9,9,9}, {9,9,9,9}, {9,9,9,9}, {9,9,9,9}};


	//Example 1
	count_numbers(array1);

	// Example 2
	count_numbers(array2);

	// Example 3
	count_numbers(array3);
	return 0;
}