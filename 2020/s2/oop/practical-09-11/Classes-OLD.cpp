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

/// Doesnt have any functions for now

// Might add a get stats function, or a basic roll a x sided dice y amount of times.



//Player Abstract

Player::Player()
{
	prof = 2;
	level = 1;
}

Player::~Player()
{
	
}


//Player classes

// Fighter
Fighter::Fighter(std::string Name, std::string Race, int finalstats[2][6])
{
	// Stats Allocating
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 6; ++j)
		{
			stats[i][j] = finalstats[i][j];
		}
	}
	hp = 10 + finalstats[1][2];

	// General Fighter things
	name = Name;
	race = Race;
	Fighter_Level = 1;
	Fighter_Hitdie = 10;
	Second_Wind = true;
	Fighting_Style = new string[1];
	proficiencies = new string[6];
	proficiencies[0] = "Light Armor";
	proficiencies[1] = "Medium Armor";
	proficiencies[2] = "Heavy Armor";
	proficiencies[3] = "Shields";
	proficiencies[4] = "Martial Weapons";
	proficiencies[5] = "Simple Weapons";

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
	Strsave = stats[1][0] + prof;
	Dexsave = stats[1][1];
	Consave = stats[1][2] + prof;
	Wissave = stats[1][3];
	Intsave = stats[1][4];
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

void Fighter::Class_Creation()
{
	cout << name << ", " << race << " Fighter" << endl;
	cout << "STR  DEX  CON  INT  WIS  CHA" << endl << " ";
	for (int i = 0; i < 6; ++i)
	{
		cout << stats[0][i] << "   ";
	}
	cout << endl << "";
	for (int i = 0; i < 6; ++i)
	{
		if (stats[1][i] < 0)
		{
			cout <<  stats[1][i] << "   ";
		}
		else if (stats[1][i] >= 0)
		{
			cout << "+"<<  stats[1][i] << "   ";
		}	
	}

	bool verify = false;
	int option;
	cout << endl << endl;

	// Choosing Skill proficiencies
	cout << "Skill proficiencies" << endl;
	cout << "Choose two Skills to be proficient in from: \n1) Acrobatics \n2) Animal Handling \n3) Athletics \n4) History \n5) Insight \n6) Intimidation \n7) Perception\n8) Survival";
	cout << endl << endl; 
	
	int check = 0;
	for (int i = 0; i < 2; ++i)
	{
		while(verify==false)
		{
			cin >> option;

			if (option == check)
			{
				cout << "please choose another option" << endl << endl;
			}
			else if (option == 1)
			{
				cout << "You chose Acrobatics." << endl << endl;
				Acrobatics += prof;
				check = 1;
				verify = true;
			}
			else if (option == 2)
			{
				cout << "You chose Animal Handling." << endl << endl;
				Animal_Handling += prof;
				check = 2;
				verify = true;
			}
			else if (option == 3)
			{
				cout << "You chose Athletics." << endl << endl;
				Athletics += prof;
				check = 3;
				verify = true;
			}
			else if (option == 4)
			{
				cout << "You chose History." << endl << endl;
				History += prof;
				check = 4;
				verify = true;
			}
			else if (option == 5)
			{
				cout << "You chose Insight." << endl << endl;
				Insight += prof;
				check = 5;
				verify = true;
			}
			else if (option == 6)
			{
				cout << "You chose Intimidation." << endl << endl;
				Intimidation += prof;
				check = 6;
				verify = true;
			}
			else if (option == 7)
			{
				cout << "You chose Perception."<< endl << endl;
				Perception += prof;
				check = 7;
				verify = true;
			}
			else if (option == 8)
			{
				cout << "You chose Survival." << endl << endl;
				Survival += prof;
				check = 8;
				verify = true;
			}
			
			else
			{
				cout << "please choose a valid option" << endl << endl;
			}
		}
		verify = false;
	}

	verify = false;
	// Choose equipment
	while(verify == false) // Armor
	{
		cout << "(1) Chain Mail or (2) Leather Armor, Longbow, and 20 Arrows" << endl;
		cin >> option;
		switch (option)
		{
			case 1:
				verify = true;
			case 2:
				verify = true;
			default:
				cout << "please choose a valid option" << endl;
		}

	}
	verify = false;
	while(verify == false) // Weapons
	{
		cout << "(1) a martial weapon and a Shield or (2) two Martial Weapons" << endl;
		cin >> option;
		switch (option)
		{
			case 1:
				verify = true;
			case 2:
				verify = true;
			default:
				cout << "please choose a valid option" << endl;
		}
			
	}
	verify = false;
	while(verify == false) // Ranged weapons
	{
		cout << "(1) a Light Crossbow and 20 bolts or (2) two handaxes" << endl;
		cin >> option;
		switch (option)
		{
			case 1:
				verify = true;
			case 2:
				verify = true;
			default:
				cout << "please choose a valid option" << endl;
		}

	}
	verify = false;
	while(verify == false) //backpack
	{
		cout << "(1) a Dungeoneer's Pack or (2) an Explorer's Pack" << endl;
		cin >> option;
		switch (option)
		{
			case 1:
				verify = true;
				inventory[3] = new Misc_Item("Dungeoneer's Pack", 10, 10, "Includes:\n \n• a Backpack \n• a Crowbar \n• a Hammer \n• 10 pitons \n• 10 torches \n• a Tinderbox \n• 10 days of Rations \n• a Waterskin \n• 50 feet of Hempen rope");
			case 2:
				verify = true;
			default:
				cout << "please choose a valid option" << endl;
		}

	}
	verify = false;

	// Fighting Style
	cout << endl << endl;
	cout << "Fighting Style" << endl;
	cout << "You adopt a particular style of fighting as your specialty. Choose a Fighting Style from the list of optional features. You can't take the same Fighting Style option more than once, even if you get to choose again." << endl << endl;

	cout << "1 Archery" << endl;
	cout << "You gain a +2 bonus to Attack rolls you make with Ranged Weapons." << endl << endl;

	cout << "2 Defense" << endl;
	cout << "While you are wearing armor, you gain a +1 bonus to AC." << endl << endl;

	cout << "3 Dueling" << endl;
	cout << "When you are wielding a melee weapon in one hand and no other Weapons, you gain a +2 bonus to Damage Rolls with that weapon." << endl << endl;

	cout << "4 Great Weapon Fighting" << endl;
	cout << "When you roll a 1 or 2 on a damage die for an Attack you make with a melee weapon that you are wielding with two hands, you can reroll the die and must use the new roll, even if the new roll is a 1 or a 2. The weapon must have the Two-Handed or Versatile property for you to gain this benefit." << endl << endl;

	cout << "5 Protection" << endl;
	cout << "When a creature you can see attacks a target other than you that is within 5 feet of you, you can use your Reaction to impose disadvantage on the Attack roll. You must be wielding a Shield.." << endl << endl;

	cout << "6 Two-Weapon Fighting" << endl;
	cout << "When you engage in Two-Weapon Fighting, you can add your ability modifier to the damage of the second Attack." << endl << endl;

	verify = false;
	option = 0;
	while (verify == false) // The option of choosing the fighting style
	{
		cout << "Your Choice: ";
		cin >> option;

		switch (option)
		{
			case 1:
				verify = true;
				Fighting_Style[0] = "Archery";
				cout << "You chose Archery." << endl << endl;
				break;
			case 2:
				verify = true;
				Fighting_Style[0] = "Defense";
				cout << "You chose Defense." << endl << endl;
				break;
			case 3:
				verify = true;
				Fighting_Style[0] = "Dueling";
				cout << "You chose Dueling." << endl << endl;
				break;
			case 4:
				verify = true;
				Fighting_Style[0] = "Great Weapon Fighting";
				cout << "You chose Great Weapon Fighting." << endl << endl;
				break;
			case 5:
				verify = true;
				Fighting_Style[0] = "Protection";
				cout << "You chose Protection." << endl << endl;
				break;
			case 6:
				verify = true;
				Fighting_Style[0] = "Two-Weapon Fighting";
				cout << "You chose Two-Weapon Fighting." << endl << endl;
				break;
			default:
				cout << endl << "Please choose a valid option" << endl;
				break;
		}
		
	}

}

Fighter::~Fighter()
{
	delete[] proficiencies;
	delete Fighting_Style;
}

// Wizard

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





// Items
Item::Item()
{
	
	
}

Item::~Item()
{
	
}

Misc_Item::Misc_Item(std::string Name, float Weight, int Price, std::string Description)
{
	name = Name;
	weight = Weight;
	price = Price;
	description = Description;
}

Misc_Item::~Misc_Item()
{
	
}

void Misc_Item::Is_Abstract()
{
	cout << "" << endl;
}

//Martial Weapons
Weapons::Weapons(std::string Name,int weapontype, float Weight, int Price, std::string dmgtype, int dmg_ammount,int dmg_size, bool ammo, bool fin, bool heavy, bool light, bool loading, int Range1, int Range2, bool ranged_weapon, bool reach, bool thrown, bool TH, bool versatile, int Versatile1, int Versatile2, bool special, std::string special_Des, int prop_total)
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


// Light Armor
Armor::Armor()
{

}

void Armor::Is_Abstract()
{
	cout << "" << endl;
}

Armor::~Armor()
{

}