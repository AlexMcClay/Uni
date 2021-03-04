// function that returns the sum of all elements in an int array.
int sum_array(int array[], int n)
{
	int sum = 0;
	if (n < 1)
	{
		return 0;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			sum += array[i];
		}
		return sum;
	}
}