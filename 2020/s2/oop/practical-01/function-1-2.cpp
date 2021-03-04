// function that returns the average of all elements in an integer array
double average(int array[], int n)
{
	int sum = 0;
	double average = 0;
	if (n <1)
	{
		return 0.0;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			sum += array[i];
		}
		average = (double)sum/n;
		return average;
	}
}