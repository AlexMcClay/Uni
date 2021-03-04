// function that returns the ninimun number in a array
int minimum(int array[], int n)
{
	//initializing variables
	int min = array[0];
	//checking if the size of the array is less than 1
	if (n <1)
	{
		return 0;
	}
	//executing the rest of the code
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (array[i]<min)
			{
				min = array[i];
			}
		}
		return min;
	}
}