#include <iostream>
#include <stdlib.h>
using namespace std;

extern int *readNumbers(int);
extern void printNumbers(int*, int);

int main()
{
int *array;
int input1;
	cout << "Input number:";
	cin >> input1;

	array = (readNumbers(input1));
	printNumbers(array, input1);

	return 0;
}