#include <iostream>
#include <stdlib.h>
using namespace std;

extern int identity(int[10][10]);

int main(int argc,char **argv)
{
	int array1[10][10] = {
		{1,0,0,0,0,0,0,0,0,0}, 
		{0,1,0,0,0,0,0,0,0,0}, 
		{0,0,1,0,0,0,0,0,0,0},
		{0,0,0,1,0,0,0,0,0,0}, 
		{0,0,0,0,1,0,0,0,0,0}, 
		{0,0,0,0,0,1,0,0,0,0}, 
		{0,0,0,0,0,0,1,0,0,0}, 
		{0,0,0,0,0,0,0,1,0,0}, 
		{0,0,0,0,0,0,0,0,1,0}, 
		{0,0,0,0,0,0,0,0,0,1}
	};



	//Example 1
	cout << "Check: " << identity(array1) << endl;

	// Example 2
	//cout << "The sum of the diagonal is: " << diagonal(array2) << endl;

	// Example 3
	//cout << "The sum of the diagonal is: " << diagonal(array3) << endl;
	return 0;
}