// function that returns the maximum element in an integer array
int maximum(int array[], int n)
{
	//initializing variables
	int max = array[0];
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
			if (array[i]>max)
			{
				max = array[i];
			}
		}
		return max;
	}
}