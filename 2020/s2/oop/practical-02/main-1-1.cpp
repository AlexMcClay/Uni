#include <iostream>
#include <stdlib.h>
using namespace std;

extern int diagonal(int[4][4]);

int main(int argc,char **argv)
{
	int array1[4][4] = {{0,1,2,3}, {4,5,6,7}, {8,9,10,11}, {12,13,14,15}};
	int array2[4][4] = {{0,2,4,6}, {8,10,12,14}, {16,18,20,22}, {24,26,28,30}};
	int array3[4][4] = {{0,1,3,5}, {7,9,11,13}, {15,17,19,21}, {23,25,27,29}};


	//Example 1
	cout << "The sum of the diagonal is: " << diagonal(array1) << endl;

	// Example 2
	cout << "The sum of the diagonal is: " << diagonal(array2) << endl;

	// Example 3
	cout << "The sum of the diagonal is: " << diagonal(array3) << endl;
	return 0;
}