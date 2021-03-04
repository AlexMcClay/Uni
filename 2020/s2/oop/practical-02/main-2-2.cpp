#include <iostream>
#include <stdlib.h>
using namespace std;

extern int binary_to_number(int*, int);

int main(int argc,char **argv)
{

	int bin1[4] = {1, 0, 1, 1};
	int bin2[15] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};

	//Example 1
	cout << "num: " << binary_to_number(bin1, 4) << endl;
	// Example 2
	cout << "num: " << binary_to_number(bin2, 15) << endl;
	//cout << endl;
	// Example 3
	//print_as_binary(array3, array32);
	//cout << endl;
	return 0;
}