// function that returns amount of even numbers between 1 and a number we supplied.
int count_even(int number)
{
	int count = 0;
	if (number <1)
	{
		return 0;
	}
	else
	{
		for (int i = 0; i < number; i++)
		{
			if ((i+1)%2 == 0)
			{

				count++;
			}
		}
		return count;
	}
}