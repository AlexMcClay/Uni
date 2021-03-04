#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

extern void copy_2d_strings(string[][2], string[][2], int);

int main(int argc,char **argv)
{
	std::string array1[3][2] = {{"bob", "bob2"}, {"alex", "alex2"}, {"duncan", "duncan2"}};
	std::string array2[3][2];


	//Example 1
	copy_2d_strings(array1, array2, 3);

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			cout  << array2[i][j] << " ";
		}
		cout << endl;
	}


	return 0;
}