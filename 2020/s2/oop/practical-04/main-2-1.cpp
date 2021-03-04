#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

extern void print_sevens(int*,int);

int main(int argc,char **argv)
{
	int array1[4] = {5, 14, 21, 154};
	int *ptr;
	ptr = &array1[0];

	//Example 1
	print_sevens(ptr, 4);
	cout << endl;


	return 0;
}