// function that print out a multiple of a matrix
#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;



float add_op(float left, float right)
{
	float result = 0;
	result = left + right;
	return result;
}


float subtract_op(float left, float right)
{
	float result = 0;
	result = left - right;
	return result;
}

float multiply_op(float left, float right)
{
	float result = 0;
	result = left * right;
	return result;
}


float arithmetic_ops(float left, float right, float (*op)(float,float))
{

	float result = 0;
	result = op(left, right);

	return result;

}
