#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>
#include "Player.h"
#include "Wizard.h"

#include "Item.h"
#include "Weapons.h"
#include "Armor.h"

using namespace std;
extern int* roll_stats();
extern int dice_roll(int, int);

int main(void)
{


  	// Stats test
  	int* stats;
  	int lowest = 19;
  		int highest = 0;

  	

  
  	for (int x = 0; x < 10000; ++x)
  	{
  		stats = roll_stats(); // rolls the set of stats
  	  	

  	  	// checks for the minimum and maximum of all of the sets of dice to see if there is an error
	  	for (int i = 0; i < 6; ++i)
	  	{
	  		if (stats[i] < lowest)
	  		{
	  			lowest = stats[i];
	  		}
	  		if (stats[i] > highest)
	  		{
	  			highest = stats[i];
	  		}
	  	}
  	}

  	// the Lowest should be 3, and the heighest should be 18
  	cout << endl << "Stats Roll Test, Min and Max" << endl;
  	cout << "Lowest: " << lowest << endl << "Highest: " << highest << endl;

  	for (int i = 0; i < 6; ++i)
  	{
  		cout << "Stat: " << stats[i] << endl;
  	}
  	cout << endl << endl;

  	// Weapons tests

  	// Martail Melee weapons test
	Weapons longsword("Longsword",1, 3, 15,"slashing", 1, 8, false, false, false, false, false, 0, 0, false, false, false, false, true, 1, 10, false, "", 1);
	Weapons halberd("Halberd",1, 6, 20,"slashing", 1, 10, false, false, true, false, false, 0, 0, false, true, false, true, false, 0, 0, false, "", 3);
	Weapons lance("Lance",1, 6, 10,"piercing", 1, 12, false, false, false, false, false, 0, 0, false, true, false, false, false, 0, 0, true, "Special: You have disadvantage when you use a lance to Attack a target within 5 feet of you. Also, a lance requires two hands to wield when you aren't mounted.", 2);

	// Martial Ranged Weapons
	Weapons blowgun("Blowgun",1, 1, 10,"piercing", 1, 1, true, false, false, false, true, 25, 100, true, false, false, false, false, 0, 0, false, "", 2);
	Weapons hand_crossbow("Crossbow, hand",1, 3, 75,"piercing", 1, 6, true, false, false, true, true, 30, 120, true, false, false, false, false, 0, 0, false, "", 3);
	Weapons heavy_crossbow("Crossbow, heavy",1, 18, 50,"piercing", 1, 10, true, false, true, false, true, 30, 120, true, false, false, true, false, 0, 0, false, "", 4);

	// Display test
	longsword.display();
	halberd.display();
	lance.display();
	blowgun.display();

	return 0;
	delete[] stats;
}