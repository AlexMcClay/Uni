#include <iostream>
#include <stdlib.h>
using namespace std;

extern int count_even(int);

int main(int argc,char **argv)
{
	//Numbers
	//num1
	int num1 = 10;
	//num2
	int num2 = 26;
	//num3
	int num3 = 50;

	// Example 1
	cout << "The amount of even numbers betwen 1 and the chosen number is: " << count_even(num1) << endl;

	// Example 2
	cout << "The amount of even numbers betwen 1 and the chosen number is: " << count_even(num2) << endl;

	// Example 3
	cout << "The amount of even numbers betwen 1 and the chosen number is: " << count_even(num3) << endl;

	return 0 ;
}