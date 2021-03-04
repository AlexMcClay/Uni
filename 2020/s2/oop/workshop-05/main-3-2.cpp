#include <iostream>
#include <stdlib.h>
using namespace std;

extern bool sortedArray(int*,int) ;
extern int *createArray(int);
extern void displayArray(int*, int);
extern void okToEat(int*, int);
extern void bonus(int*, int); 

int main()
{
int *array;
int input1;
	cout << "Input number:";
	cin >> input1;

	array = (createArray(input1));
	cout << sortedArray(array, input1) << endl;;


	return 0;
}

