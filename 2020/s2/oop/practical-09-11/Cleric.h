#ifndef CLERIC_H
#define CLERIC_H
#include <stdio.h>
#include <string>
#include "Item.h"
#include "Player.h"

// Baic Class
class Cleric : public Player
{
public:
	Cleric(std::string Name, std::string Race, int finalstats[2][6]);

	// State variables
	int Cleric_Hitdie;
	int Cleric_Level;
	int Spells_Ammount[9];
	Item *item_prof[5];

	virtual void Class_Creation();
	~Cleric();
	
};

#endif // ending