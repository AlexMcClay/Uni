#ifndef WIZARD_H
#define WIZARD_H
#include <stdio.h>
#include <string>
#include "Item.h"
#include "Player.h"

// Baic Ckass
class Wizard : public Player
{
public:
	Wizard(std::string Name, std::string Race, int finalstats[2][6]);

	// State variables
	int Wiz_Hitdie;
	int Wizard_Level;
	int Cantrips_Known;
	std::string *Cantrips_Prepaired;
	int Spells_Slots[9];
	int Spells_Known[9];
	std::string *Spells_Prepaired;
	std::string *item_prof[5];

	virtual void Class_Creation();
	~Wizard();
	
};

#endif // ending