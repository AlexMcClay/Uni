#include <iostream>
#include <stdlib.h>
using namespace std;

extern float arithmetic_ops(float, float, float (float,float));
extern float add_op(float , float );

int main()
{
	float(*add)(float,float);
	add = &add_op;

	cout << "The result is: " << arithmetic_ops(10,2,add) << endl;

	return 0;
}