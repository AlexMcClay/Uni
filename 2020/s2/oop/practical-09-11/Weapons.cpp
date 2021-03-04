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



Weapons::Weapons(std::string Name,int weapontype, float Weight, int Price, std::string dmgtype, int dmg_ammount,int dmg_size, bool ammo, bool fin, bool heavy, bool light, bool loading, int Range1, int Range2, bool ranged_weapon, bool reach, bool thrown, bool TH, bool versatile, int Versatile1, int Versatile2, bool special, std::string special_Des, int prop_total, int Ammount, int ClassType)
{
	weight = Weight;
	weapon_type = weapontype;
	name = Name;
	price = Price;
	damage[0] = dmg_ammount;
	damage[1] = dmg_size;
	DMGtype = dmgtype;
	Ammunition = ammo;
	Finesse = fin;
	Heavy = heavy;
	Light = light;
	Loading = loading;
	Range[0] = Range1;
	Range[1] = Range2;
	Range_weapon = ranged_weapon;
	Reach = reach;
	Thrown = thrown;
	Two_Handed = TH;
	Versatile = versatile;
	Ver[0] = Versatile1;
	Ver[1] = Versatile2;
	Special = special;
	Special_Des = special_Des;
	total_properties = prop_total;
	ammount = Ammount;
	class_type = ClassType;
}

void Weapons::Is_Abstract()
{
	cout << "" << endl;
}

void Weapons::display() // Shows the weapons stats
{
	cout << name << endl;
	if ((Range_weapon == true) && (weapon_type == 1))
	{
		cout << "Martial ranged weapon" << endl;
	}
	else if((Range_weapon == false) && (weapon_type == 1))
	{
		cout << "Martial melee weapon" << endl;
	}
	else if ((Range_weapon == true) && (weapon_type == 0))
	{
		cout << "Simple ranged weapon" << endl;
	}
	else if ((Range_weapon == false) && (weapon_type == 0))
	{
		cout << "Simple melee weapon" << endl;
	}


	cout << "Price: " << price << "gp" << endl;
	if ((damage[0]  == 1) && (damage[1]  == 1))
	{
		cout << "Damage: " << damage[1] << " " << DMGtype << endl;
	}
	else if ((damage[0]  == 0) && (damage[1]  == 0))
	{
		cout << "Damage: " << "—" << " " << DMGtype << endl;
	}
	else
	{
		cout << "Damage: " << damage[0] << "d" << damage[1] << " " << DMGtype << endl;
	}
	cout << "Weight: " << weight << " lb." << endl;
	cout << "Properties: ";

	if (Ammunition == true)
	{
		cout << "Ammunition (range " << Range[0] << "/" << Range[1]<< ")";
		if ((total_properties - 1)>0)
		{
			total_properties = total_properties-1;
			cout << ", ";
		}
	}
	if (Finesse == true)
	{
		cout << "Finesse";
		if ((total_properties - 1)>0)
		{
			total_properties = total_properties-1;
			cout << ", ";
		}
	}
	if (Heavy == true)
	{
		cout << "Heavy";
		if ((total_properties - 1)>0)
		{
			total_properties = total_properties-1;
			cout << ", ";
		}
	}
	if (Light == true)
	{
		cout << "Light";
		if ((total_properties - 1)>0)
		{
			total_properties = total_properties-1;
			cout << ", ";
		}
	}
	if (Loading == true)
	{
		cout << "Loading";
		if ((total_properties - 1)>0)
		{
			total_properties = total_properties-1;
			cout << ", ";
		}
	}
	if (Reach == true)
	{
		cout << "Reach";
		if ((total_properties - 1)>0)
		{
			total_properties = total_properties-1;
			cout << ", ";
		}
	}
	if (Special == true)
	{
		cout << "Special";
		if ((total_properties - 1)>0)
		{
			total_properties = total_properties-1;
			cout << ", ";
		}
	}
	if (Thrown == true)
	{
		cout << "Thrown (range " << Range[0] << "/" << Range[1]<< ")";
		if ((total_properties - 1)>0)
		{
			total_properties = total_properties-1;
			cout << ", ";
		}
	}
	if (Two_Handed == true)
	{
		cout << "Two-handed";
		if ((total_properties - 1)>0)
		{
			total_properties = total_properties-1;
			cout << ", ";
		}
	}
	if (Versatile == true)
	{
		cout << "Versatile (" << Ver[0] << "d" << Ver[1]<< ")";
		if ((total_properties - 1)>0)
		{
			total_properties = total_properties-1;
			cout << ", ";
		}
	}

	if (Special == true)
	{
		cout << endl << Special_Des;
	}

	cout << endl << endl;
}

Weapons::~Weapons()
{

}