#include <iostream>
#include <stdlib.h>
using namespace std;

extern void displayArraySubsets(int*,int) ; 
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
	displayArraySubsets(array, input1);


	return 0;
}

