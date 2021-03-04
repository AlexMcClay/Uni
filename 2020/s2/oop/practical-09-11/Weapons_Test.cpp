#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>

#include "Item.h"
#include "Weapons.h"

using namespace std;
extern int* roll_stats();
extern int dice_roll(int, int);

int main(void)
{

	// Martail Melee weapons test
	Weapons longsword("Longsword",1, 3, 15,"slashing", 1, 8, false, false, false, false, false, 0, 0, false, false, false, false, true, 1, 10, false, "", 1, 1, 2);
	Weapons halberd("Halberd",1, 6, 20,"slashing", 1, 10, false, false, true, false, false, 0, 0, false, true, false, true, false, 0, 0, false, "", 3, 1, 2);
	Weapons lance("Lance",1, 6, 10,"piercing", 1, 12, false, false, false, false, false, 0, 0, false, true, false, false, false, 0, 0, true, "Special: You have disadvantage when you use a lance to Attack a target within 5 feet of you. Also, a lance requires two hands to wield when you aren't mounted.", 2, 1, 2);

	// Martial Ranged Weapons
	Weapons blowgun("Blowgun",1, 1, 10,"piercing", 1, 1, true, false, false, false, true, 25, 100, true, false, false, false, false, 0, 0, false, "", 2, 1, 2);
	Weapons hand_crossbow("Crossbow, hand",1, 3, 75,"piercing", 1, 6, true, false, false, true, true, 30, 120, true, false, false, false, false, 0, 0, false, "", 3, 1, 2);
	Weapons heavy_crossbow("Crossbow, heavy",1, 18, 50,"piercing", 1, 10, true, false, true, false, true, 30, 120, true, false, false, true, false, 0, 0, false, "", 4, 1, 2);

	// Display test
	longsword.display();
	halberd.display();
	lance.display();
	blowgun.display();



	return 0;
}
