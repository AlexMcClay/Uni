#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <string>
using namespace std;

extern int *readNumbers();
extern void printNumbers(int*,int);
extern void hexDigits(int*,int );
extern bool equalsArray(int*,int*,int);
extern int *reverseArray(int*,int) ;

int main()
{

	int *array1, *array2;

	array1 = new int[5];

	for (int i = 0; i < 5; ++i)
	{
		array1[i] = i+1;
	}

	array2 = reverseArray(array1, 5);

	printNumbers(array2, 5);



	delete[] array1;
	delete[] array2;
	return 0;
}