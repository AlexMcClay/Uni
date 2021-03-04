#include <iostream>
#include <stdlib.h>
using namespace std;

int* add(int num[8], int num2[8])
{
  int result[9];
  for (int i = 0; i < 8; i++)
    {
      if (num[7-i] + num2[7-i] == 0)
	{
	  result[8-i] = 0;
	}
      else if (num[7-i] + num2[7-i] == 1)
	{
	  result[8-i] = 1;
	}
      else if (num[7-i] + num2[7-i] >= 2)
	{
	  result[7-i] = (num[7-i] + num2[7-i])-2;
	  num[6-i] = num[6-i]+1;
	}
      
    }
  
  return result;
}



int main()
{
  int num1[8] = {0, 0, 0, 0, 0, 0, 0, 1};
  int num2[8] = {0, 0, 0, 0, 0, 0, 0, 1};
  cout << "this: " << add(num1, num2) << endl;

	return 0;
}
