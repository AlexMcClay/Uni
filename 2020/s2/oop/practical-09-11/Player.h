#ifndef PLAYER_H
#define PLAYER_H
#include <stdio.h>
#include <string>
#include "Item.h"

class Player
{
public:
	Player();

	// Basic Stats
	std::string name;
	std::string race;
	std::string size;
	int stats[2][6]; // First roll is the Ability scores, Second row is the ability modifiers
	int hp; // default hitpoints
	int prof; // proficiency bonus
	int level; // Character level
	int movement;
	int AC;
	std::string *proficiencies;
	Item *inventory[50]; // Inventory, for now, the player can carry a maximum of 50 items
	int eq_num; //equipment number
	//Saving Throws
	int Strsave;
	int Dexsave;
	int Consave;
	int Wissave;
	int Intsave;
	int Chrsave;
	// Ability Checks
	int Acrobatics; // Dex based
	int Animal_Handling; // Wisdom based
	int Arcana; // Intelligence based
	int Athletics; // Strenght based
	int Deception; // Charisma based
	int History; // Intelligence based
	int Insight; // Wisdom based
	int Intimidation; // Charisma based
	int Investigation; // Intelligence based
	int Medicine; // Wisdom based
	int Nature; // Intelligence based
	int Perception; // Wisdom based
	int Performance; // Charisma based
	int Persuasion; // Charisma based
	int Religion; // Intelligence based
	int Sleight_of_Hand; // Dex based
	int Stealth; // Dex based
	int Survival; // Wisdom based
	// Senses
	int Passive_Perception;

	 //Behaviours
	virtual void Class_Creation() = 0; // Makes the class abstract

	~Player();
	
};

#endif // ending