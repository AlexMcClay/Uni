#include <iostream>
#include <stdlib.h>
using namespace std;

extern int *readNumbers();
extern void printNumbers(int*,int);

int main()
{

	int *array;
	array = readNumbers();


	printNumbers(array, 10);

	delete[] array;
	return 0;
}