#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

extern void print_as_binary(std::string);

int main(int argc,char **argv)
{

	std::string string1 ("16");


	//Example 1
	print_as_binary(string1);
	cout << endl;
	// Example 2
	//print_as_binary(array2, array22);
	//cout << endl;
	// Example 3
	//print_as_binary(array3, array32);
	//cout << endl;
	return 0;
}