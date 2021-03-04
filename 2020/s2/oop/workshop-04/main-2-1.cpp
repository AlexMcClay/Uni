#include <iostream>
#include <stdlib.h>
using namespace std;

extern float arithmetic_ops(float, float, std::string);

int main()
{
	

	cout << "The result is: " << arithmetic_ops(10, 5, "+") << endl;

	return 0;
}