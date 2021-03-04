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


float arithmetic_ops(float left, float right, std::string op)
{
	float result = 0;

	if (op == "+")
	{
		result = add_op(left, right);
	}
	else if (op == "-")
	{
		result = subtract_op(left, right);
	}
	else
	{
		// Error
		result = 0.0;
	}

	return result;
}
