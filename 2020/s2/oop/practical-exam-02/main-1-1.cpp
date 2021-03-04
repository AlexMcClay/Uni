#include <iostream>
#include <stdlib.h>
using namespace std;

extern int *createArray(int);
extern void displayArray(int*, int);

int main()
{
int *array;
int input1;
	cout << "Input number:";
	cin >> input1;

	array = (createArray(input1));
	displayArray(array, input1);

	return 0;
}