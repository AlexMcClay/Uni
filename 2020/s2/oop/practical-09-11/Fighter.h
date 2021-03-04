#ifndef FIGHTER_H
#define FIGHTER_H
#include <stdio.h>
#include <string>
#include "Item.h"
#include "Player.h"

// Baic Class
class Fighter : public Player
{
public:
	Fighter(std::string Name, std::string Race, int finalstats[2][6]);

	// State variables
	int Fighter_Hitdie;
	int Fighter_Level;
	bool Second_Wind;
	std::string *item_prof[5];
	std::string *Fighting_Style;

	virtual void Class_Creation();
	void Class_Creation_Test(int option1, int option2, int option3, int option4, int option5, int option6); // A copy with pre-determined inputs
	void Update_Stats();
	void ShowStats();
	~Fighter();
	
};

#endif // ending