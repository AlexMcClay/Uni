#include <iostream>
#include <stdlib.h>
using namespace std;

extern void print_scaled_matrix(int[3][3], int);

int main(int argc,char **argv)
{
	int scale1 = 3;
	int scale2 = 5;
	int scale3 = 10;
	int array1[3][3] = {{0,1,2}, {0,1,2}, {0,1,2}};
	int array2[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
	int array3[3][3] = {{0,1,2}, {0,1,2}, {0,1,2}};


	//Example 1
	print_scaled_matrix(array1, scale1);
	cout << endl;
	// Example 2
	print_scaled_matrix(array2, scale2);
	cout << endl;
	// Example 3
	print_scaled_matrix(array3, scale3);
	cout << endl;
	return 0;
}