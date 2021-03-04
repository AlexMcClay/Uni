#include <iostream>
#include <stdlib.h>
#include <string>
#include "Player.h"
#include "Wizard.h"
#include "Fighter.h"

#include "Item.h"
#include "Misc_Item.h"
#include "Weapons.h"
#include "Armor.h"



using namespace std;



Wizard::Wizard(std::string Name, std::string Race, int finalstats[2][6])
{
	
	// Stats Allocating
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 6; ++j)
		{
			stats[i][j] = finalstats[i][j];
		}
	}
	hp = 6 + finalstats[1][2];

	// General Fighter things
	name = Name;
	race = Race;
	Wizard_Level = 1;
	Wiz_Hitdie = 6;
	Cantrips_Known = 3;
	Spells_Slots[0] = 2;
	proficiencies = new string[5];
	proficiencies[0] = "Dagger";
	proficiencies[1] = "Dart";
	proficiencies[2] = "Sling";
	proficiencies[3] = "Quarterstaff";
	proficiencies[4] = "Light Crossbow";




	// Race
	if (race == "Dwarf")
	{
		movement = 25;
		size == "Medium";
	}
	else if (race == "Human")
	{
		movement = 30;
		size = "Medium";
	}
	else if (race == "Elf")
	{
		movement = 35;
		size = "Medium";
	}

	// Saving throws
	Strsave = stats[1][0];
	Dexsave = stats[1][1];
	Consave = stats[1][2];
	Wissave = stats[1][3] + prof;
	Intsave = stats[1][4] + prof;
	Chrsave = stats[1][5];

	// Skills
	Acrobatics = stats[1][1]; // Dex based
	Animal_Handling = stats[1][4]; // Wisdom based
	Arcana = stats[1][3]; // Intelligence based
	Athletics = stats[1][0]; // Strenght based
	Deception = stats[1][5]; // Charisma based
	History = stats[1][3]; // Intelligence based
	Insight = stats[1][4]; // Wisdom based
	Intimidation = stats[1][5]; // Charisma based
	Investigation = stats[1][3]; // Intelligence based
	Medicine = stats[1][4]; // Wisdom based
	Nature = stats[1][3]; // Intelligence based
	Perception = stats[1][4]; // Wisdom based
	Performance = stats[1][5]; // Charisma based
	Persuasion = stats[1][5]; // Charisma based
	Religion = stats[1][3]; // Intelligence based
	Sleight_of_Hand = stats[1][1]; // Dex based
	Stealth = stats[1][1]; // Dex based
	Survival = stats[1][4]; // Wisdom based*/

}

void Wizard::Class_Creation()
{
	
}

Wizard::~Wizard()
{
	delete[] proficiencies;
}
