#ifndef WEAPONS_H
#define WEAPONS_H
#include <stdio.h>
#include <string>
#include "Item.h"

class Weapons : public Item
{
public:
	Weapons(std::string Name,int weapontype, float Weight, int Price, std::string dmgtype, int dmg_ammount,int dmg_size, bool ammo, bool fin, bool heavy, bool light, bool loading, int Range1, int Range2, bool ranged_weapon, bool reach, bool thrown, bool TH, bool versatile, int Versatile1, int Versatile2, bool special, std::string special_Des, int prop_total, int Ammount, int ClassType);

	// State variables
	int weapon_type;
	int damage[2];
	std::string DMGtype;
	bool Ammunition;
	bool Finesse;
	bool Heavy;
	bool Light;
	bool Loading;
	int Range[2];
	bool Range_weapon;
	bool Reach;
	bool Thrown;
	bool Two_Handed;
	bool Versatile;
	int Ver[2];
	bool Special;
	std::string Special_Des;
	int total_properties;

	// Behaviours
	void display();
	virtual void Is_Abstract();

	~Weapons();
	
};

#endif // ending