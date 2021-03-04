#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>
#include <time.h>
using namespace std;


int dice_roll(int Ammount, int Size) // Rolls 4 six sided dice, adds them togeather and drops the lowest of them, repeat 6 times for full range of stats
{
	int total = 0;
	/* initialize random seed: */
  	srand (time(NULL));
	for (int i = 0; i < Ammount; ++i)
	{
		total = total + (rand() % Size + 1);
	}

	return total;
}

int* roll_stats() // Rolls 4 six sided dice, adds them togeather and drops the lowest of them, repeat 6 times for full range of stats
{
	int* stats;
	stats = new int[6];
	int lowest = 7;
	int dice[4];
	for (int i = 0; i < 6; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			dice[j] = (rand() % 6 + 1);
			// Check for lowest
			if (dice[j] < lowest)
			{
				lowest = dice[j];
			}
		}
		stats[i] = dice[0] + dice[1] + dice[2] + dice[3] - lowest;

		// resets the value of lowest so that it can always be replaced
		lowest = 7;
	}

	return stats;
}