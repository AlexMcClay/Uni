#include <iostream>
#include <stdlib.h>
using namespace std;

extern void print_summed_matrices(int[3][3],int[3][3]);

int main(int argc,char **argv)
{

	int array1[3][3] = {{0,1,2}, {0,1,2}, {0,1,2}};
	int array12[3][3] = {{0,1,2}, {0,1,2}, {0,1,2}};

	int array2[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
	int array22[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

	int array3[3][3] = {{0,1,2}, {0,1,2}, {0,1,2}};
	int array32[3][3] = {{0,1,2}, {0,1,2}, {0,1,2}};


	//Example 1
	print_summed_matrices(array1, array12);
	cout << endl;
	// Example 2
	print_summed_matrices(array2, array22);
	cout << endl;
	// Example 3
	print_summed_matrices(array3, array32);
	cout << endl;
	return 0;
}