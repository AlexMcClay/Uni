#include <iostream>
#include <stdlib.h>
using namespace std;

extern int sum_if_a_palindrome(int*, int);

int main(int argc,char **argv)
{

	int bin1[4] = {1, 0, 0, 0};
	int bin2[15] = {1,2,3,4,5,6,7,8,7,6,5,4,3,2,1};

	//Example 1
	cout << "sum: "  << sum_if_a_palindrome(bin1, 4) << endl;
	// Example 2
	cout << "Sum: "  << sum_if_a_palindrome(bin2, 15) << endl;
	//cout << endl;
	// Example 3
	//print_as_binary(array3, array32);
	//cout << endl;
	return 0;
}