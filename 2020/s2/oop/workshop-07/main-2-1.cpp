#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <string>
using namespace std;

extern int *readNumbers();
extern void printNumbers(int*,int);
extern void hexDigits(int*,int );

int main()
{

	int *array;
	array = readNumbers();


	hexDigits(array, 10);



	delete[] array;
	return 0;
}