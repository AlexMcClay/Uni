// function that returns the number of elements in an array that are equal to a given parameter
int count(int array[], int n, int number)
{
	int count = 0;
	if (n <1)
	{
		return 0;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (array[i] == number)
			{
				count++;
			}
		}
		return count;
	}
}