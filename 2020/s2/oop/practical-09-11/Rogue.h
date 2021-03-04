#ifndef ROGUE_H
#define ROGUE_H
#include <stdio.h>
#include <string>
#include "Item.h"
#include "Player.h"

// Baic Class
class Rogue : public Player
{
public:
	Rogue(std::string Name, std::string Race, int finalstats[2][6]);

	// State variables
	int Rogue_Hitdie;
	int Rogue_Level;
	std::string *item_prof[5];

	virtual void Class_Creation();
	~Rogue();
	
};

#endif // ending