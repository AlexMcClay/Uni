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
	eq_num = 0; //equipment number

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
			cout << "-> ";
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
	cout << "Choose your equipment" << endl;
	while(verify == false) // Armor
	{
		cout << "(1) Chain Mail or (2) Leather Armor, Longbow, and 20 Arrows" << endl << "-> ";
		cin >> option;
		switch (option)
		{
			case 1:
				inventory[eq_num] = new Armor("Chain Mail", 55, 75, 16, "Heavy Armor", 1, "Made of interlocking metal rings, chain mail includes a layer of quilted fabric worn underneath the mail to prevent chafing and to cushion the impact of blows. The suit includes gauntlets.", 1);
				eq_num++;
				verify = true;
				break;
			case 2:
				inventory[eq_num] = new Armor("Leather Armor", 10, 10, 11, "Light Armor", 1, "The Breastplate and shoulder protectors of this armor are made of leather that has been stiffened by being boiled in oil. The rest of the armor is made of softer and more flexible materials.", 1);
				eq_num++;
				inventory[eq_num] = new Weapons("Longbow", 1, 2, 50, "Piercing", 1, 8, true, false, true, false, false, 150, 600, true, false, false, true, false, 0, 0, false, "", 4, 1, 2);
				eq_num++;
				inventory[eq_num] = new Misc_Item("Arrows", 1, 1, 20, "Arrows are used with a weapon that has the ammunition property to make a ranged attack. Each time you attack with the weapon, you expend one piece of ammunition. Drawing the ammunition from a quiver, case, or other container is part of the attack (you need a free hand to load a one-handed weapon). At the end of the battle, you can recover half your expended ammunition by taking a minute to search the battlefield.", 3);
				eq_num++;
				verify = true;
				break;
			default:
				cout << "please choose a valid option" << endl;
		}

	}
	verify = false;
	while(verify == false) // Weapons
	{
		cout << "(1) a longsword and a Shield or (2) two longswords" << endl << "-> ";
		cin >> option;
		switch (option)
		{
			case 1:
				inventory[eq_num] = new Weapons("Longsword",1, 3, 15,"slashing", 1, 8, false, false, false, false, false, 0, 0, false, false, false, false, true, 1, 10, false, "", 1, 1, 2);
				eq_num++;
				inventory[eq_num] = new Armor("Shield", 6 , 10, 2, "Shield", 1, "A shield is made from wood or metal and is carried in one hand. Wielding a shield increases your Armor Class by 2. You can benefit from only one shield at a time.", 1);
				eq_num++;
				verify = true;
				break;
			case 2:
				inventory[eq_num] = new Weapons("Longsword",1, 3, 15,"slashing", 1, 8, false, false, false, false, false, 0, 0, false, false, false, false, true, 1, 10, false, "", 1, 1, 2);
				eq_num++;
				inventory[eq_num] = new Weapons("Longsword",1, 3, 15,"slashing", 1, 8, false, false, false, false, false, 0, 0, false, false, false, false, true, 1, 10, false, "", 1, 1, 2);
				eq_num++;
				verify = true;
				break;
			default:
				cout << "please choose a valid option" << endl;
		}
			
	}
	verify = false;
	while(verify == false) // Ranged weapons
	{
		cout << "(1) a Hand Crossbow and 20 bolts or (2) two halberds" << endl << "-> ";
		cin >> option;
		switch (option)
		{
			case 1:
				inventory[eq_num] = new Weapons("Hand Crossbow",1, 3, 75,"piercing", 1, 6, true, false, false, true, true, 30, 120, true, false, false, false, false, 0, 0, false, "", 3, 1, 2);
				eq_num++;
				inventory[eq_num] = new Misc_Item("Crossbow Bolts", 1.5, 1, 20, "Crossbow bolts are used with a weapon that has the ammunition property to make a ranged attack. Each time you attack with the weapon, you expend one piece of ammunition. Drawing the ammunition from a quiver, case, or other container is part of the attack (you need a free hand to load a one-handed weapon). At the end of the battle, you can recover half your expended ammunition by taking a minute to search the battlefield.", 3);
				eq_num++;
				verify = true;
				break;
			case 2:
				inventory[eq_num] = new Weapons("Halberd",1, 6, 20,"slashing", 1, 10, false, false, true, false, false, 0, 0, false, true, false, true, false, 0, 0, false, "", 3, 1, 2);
				eq_num++;
				inventory[eq_num] = new Weapons("Halberd",1, 6, 20,"slashing", 1, 10, false, false, true, false, false, 0, 0, false, true, false, true, false, 0, 0, false, "", 3, 1, 2);
				eq_num++;
				verify = true;
				break;
			default:
				cout << "please choose a valid option" << endl;
		}

	}
	verify = false;
	while(verify == false) //backpack
	{
		cout << "(1) a Dungeoneer's Pack or (2) an Explorer's Pack" << endl << "-> ";
		cin >> option;
		switch (option)
		{
			case 1:
				verify = true;
				inventory[eq_num] = new Misc_Item("Dungeoneer's Pack", 10, 10, 1, "Includes:\n \n• a Backpack \n• a Crowbar \n• a Hammer \n• 10 pitons \n• 10 torches \n• a Tinderbox \n• 10 days of Rations \n• a Waterskin \n• 50 feet of Hempen rope", 3);
				eq_num++;
				break;
			case 2:
				inventory[eq_num] = new Misc_Item("Explorer's Pack", 10, 10, 1, "Includes:\n \n• a Backpack \n• a Crowbar \n• a Hammer \n• 10 pitons \n• 10 torches \n• a Tinderbox \n• 10 days of Rations \n• a Waterskin \n• 50 feet of Hempen rope", 3);
				eq_num++;
				verify = true;
				break;
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

void Fighter::Class_Creation_Test(int option1, int option2, int option3, int option4, int option5, int option6)
{
	//cout << name << ", " << race << " Fighter" << endl;
	//cout << "STR  DEX  CON  INT  WIS  CHA" << endl << " ";
	for (int i = 0; i < 6; ++i)
	{
		//cout << stats[0][i] << "   ";
	}
	//cout << endl << "";
	for (int i = 0; i < 6; ++i)
	{
		if (stats[1][i] < 0)
		{
			//cout <<  stats[1][i] << "   ";
		}
		else if (stats[1][i] >= 0)
		{
			//cout << "+"<<  stats[1][i] << "   ";
		}	
	}

	bool verify = false;
	int option;
	//cout << endl << endl;

	// Choosing Skill proficiencies
	//cout << "Skill proficiencies" << endl;
	//cout << "Choose two Skills to be proficient in from: \n1) Acrobatics \n2) Animal Handling \n3) Athletics \n4) History \n5) Insight \n6) Intimidation \n7) Perception\n8) Survival";
	//cout << endl << endl; 
	
	option = option1;

	int check = 0;
	for (int i = 0; i < 2; ++i)
	{
		while(verify==false)
		{
			//cout << "-> ";
			

			if (option == check)
			{
				//cout << "please choose another option" << endl << endl;
			}
			else if (option == 1)
			{
				//cout << "You chose Acrobatics." << endl << endl;
				Acrobatics += prof;
				verify = true;
			}
			else if (option == 2)
			{
				//cout << "You chose Animal Handling." << endl << endl;
				Animal_Handling += prof;
				verify = true;
			}
			else if (option == 3)
			{
				//cout << "You chose Athletics." << endl << endl;
				Athletics += prof;
				verify = true;
			}
			else if (option == 4)
			{
				//cout << "You chose History." << endl << endl;
				History += prof;
				verify = true;
			}
			else if (option == 5)
			{
				//cout << "You chose Insight." << endl << endl;
				Insight += prof;
				verify = true;
			}
			else if (option == 6)
			{
				//cout << "You chose Intimidation." << endl << endl;
				Intimidation += prof;
				verify = true;
			}
			else if (option == 7)
			{
				//cout << "You chose Perception."<< endl << endl;
				Perception += prof;
				verify = true;
			}
			else if (option == 8)
			{
				//cout << "You chose Survival." << endl << endl;
				Survival += prof;
				verify = true;
			}
			
			else
			{
				///cout << "please choose a valid option" << endl << endl;
			}
		}
		verify = false;
	}


	verify = false;
	// Choose equipment
	//cout << "Choose your equipment" << endl;

	option = option2;
	while(verify == false) // Armor
	{
		//cout << "(1) Chain Mail or (2) Leather Armor, Longbow, and 20 Arrows" << endl << "-> ";
		switch (option)
		{
			case 1:
				inventory[eq_num] = new Armor("Chain Mail", 55, 75, 16, "Heavy Armor", 1, "Made of interlocking metal rings, chain mail includes a layer of quilted fabric worn underneath the mail to prevent chafing and to cushion the impact of blows. The suit includes gauntlets.", 1);
				eq_num++;
				verify = true;
				break;
			case 2:
				inventory[eq_num] = new Armor("Leather Armor", 10, 10, 11, "Light Armor", 1, "The Breastplate and shoulder protectors of this armor are made of leather that has been stiffened by being boiled in oil. The rest of the armor is made of softer and more flexible materials.", 1);
				eq_num++;
				inventory[eq_num] = new Weapons("Longbow", 1, 2, 50, "Piercing", 1, 8, true, false, true, false, false, 150, 600, true, false, false, true, false, 0, 0, false, "", 4, 1, 2);
				eq_num++;
				inventory[eq_num] = new Misc_Item("Arrows", 1, 1, 20, "Arrows are used with a weapon that has the ammunition property to make a ranged attack. Each time you attack with the weapon, you expend one piece of ammunition. Drawing the ammunition from a quiver, case, or other container is part of the attack (you need a free hand to load a one-handed weapon). At the end of the battle, you can recover half your expended ammunition by taking a minute to search the battlefield.", 3);
				eq_num++;
				verify = true;
				break;
			default:
				break;
				//cout << "please choose a valid option" << endl;
		}

	}
	verify = false;

	option = option3;
	while(verify == false) // Weapons
	{
		//cout << "(1) a longsword and a Shield or (2) two longswords" << endl << "-> ";
		switch (option)
		{
			case 1:
				inventory[eq_num] = new Weapons("Longsword",1, 3, 15,"slashing", 1, 8, false, false, false, false, false, 0, 0, false, false, false, false, true, 1, 10, false, "", 1, 1, 2);
				eq_num++;
				inventory[eq_num] = new Armor("Shield", 6 , 10, 2, "Shield", 1, "A shield is made from wood or metal and is carried in one hand. Wielding a shield increases your Armor Class by 2. You can benefit from only one shield at a time.", 1);
				eq_num++;
				verify = true;
				break;
			case 2:
				inventory[eq_num] = new Weapons("Longsword",1, 3, 15,"slashing", 1, 8, false, false, false, false, false, 0, 0, false, false, false, false, true, 1, 10, false, "", 1, 1, 2);
				eq_num++;
				inventory[eq_num] = new Weapons("Longsword",1, 3, 15,"slashing", 1, 8, false, false, false, false, false, 0, 0, false, false, false, false, true, 1, 10, false, "", 1, 1, 2);
				eq_num++;
				verify = true;
				break;
			default:
			break;
				//cout << "please choose a valid option" << endl;
		}
			
	}
	verify = false;
	option = option4;
	while(verify == false) // Ranged weapons
	{
		//cout << "(1) a Hand Crossbow and 20 bolts or (2) two halberds" << endl << "-> ";
		switch (option)
		{
			case 1:
				inventory[eq_num] = new Weapons("Hand Crossbow",1, 3, 75,"piercing", 1, 6, true, false, false, true, true, 30, 120, true, false, false, false, false, 0, 0, false, "", 3, 1, 2);
				eq_num++;
				inventory[eq_num] = new Misc_Item("Crossbow Bolts", 1.5, 1, 20, "Crossbow bolts are used with a weapon that has the ammunition property to make a ranged attack. Each time you attack with the weapon, you expend one piece of ammunition. Drawing the ammunition from a quiver, case, or other container is part of the attack (you need a free hand to load a one-handed weapon). At the end of the battle, you can recover half your expended ammunition by taking a minute to search the battlefield.", 3);
				eq_num++;
				verify = true;
				break;
			case 2:
				inventory[eq_num] = new Weapons("Halberd",1, 6, 20,"slashing", 1, 10, false, false, true, false, false, 0, 0, false, true, false, true, false, 0, 0, false, "", 3, 1, 2);
				eq_num++;
				inventory[eq_num] = new Weapons("Halberd",1, 6, 20,"slashing", 1, 10, false, false, true, false, false, 0, 0, false, true, false, true, false, 0, 0, false, "", 3, 1, 2);
				eq_num++;
				verify = true;
				break;
			default:
				break;
			//	cout << "please choose a valid option" << endl;
		}

	}
	verify = false;

	option = option5;
	while(verify == false) //backpack
	{
		//cout << "(1) a Dungeoneer's Pack or (2) an Explorer's Pack" << endl << "-> ";
		switch (option)
		{
			case 1:
				verify = true;
				inventory[eq_num] = new Misc_Item("Dungeoneer's Pack", 10, 10, 1, "Includes:\n \n• a Backpack \n• a Crowbar \n• a Hammer \n• 10 pitons \n• 10 torches \n• a Tinderbox \n• 10 days of Rations \n• a Waterskin \n• 50 feet of Hempen rope", 3);
				eq_num++;
				break;
			case 2:
				inventory[eq_num] = new Misc_Item("Explorer's Pack", 10, 10, 1, "Includes:\n \n• a Backpack \n• a Crowbar \n• a Hammer \n• 10 pitons \n• 10 torches \n• a Tinderbox \n• 10 days of Rations \n• a Waterskin \n• 50 feet of Hempen rope", 3);
				eq_num++;
				verify = true;
				break;
			default:
				break;
				//cout << "please choose a valid option" << endl;
		}

	}
	verify = false;

	// Fighting Style
/*	cout << endl << endl;
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
	cout << "When you engage in Two-Weapon Fighting, you can add your ability modifier to the damage of the second Attack." << endl << endl;*/

	verify = false;
	option = option6;
	while (verify == false) // The option of choosing the fighting style
	{
	//	cout << "Your Choice: ";

		switch (option)
		{
			case 1:
				verify = true;
				Fighting_Style[0] = "Archery";
				//cout << "You chose Archery." << endl << endl;
				break;
			case 2:
				verify = true;
				Fighting_Style[0] = "Defense";
			//	cout << "You chose Defense." << endl << endl;
				break;
			case 3:
				verify = true;
				Fighting_Style[0] = "Dueling";
				cout << "You chose Dueling." << endl << endl;
				break;
			case 4:
				verify = true;
				Fighting_Style[0] = "Great Weapon Fighting";
				//cout << "You chose Great Weapon Fighting." << endl << endl;
				break;
			case 5:
				verify = true;
				Fighting_Style[0] = "Protection";
			//	cout << "You chose Protection." << endl << endl;
				break;
			case 6:
				verify = true;
				Fighting_Style[0] = "Two-Weapon Fighting";
			//	cout << "You chose Two-Weapon Fighting." << endl << endl;
				break;
			default:
				//cout << endl << "Please choose a valid option" << endl;
				break;
		}
		
	}

}

void Fighter::Update_Stats()
{
	
	for (int i = 0; i < (eq_num); ++i)
	{
		if (inventory[i]->class_type == 1)
		{
			Armor *Temp = dynamic_cast<Armor*>(inventory[i]);
			
			if (Temp->Armor_Type == "Heavy Armor")
			{
				AC = Temp->BaseAC;
			}
			else if (Temp->Armor_Type == "Medium Armor")
			{
				AC = Temp->BaseAC;
				if (stats[1][1]<= 2)
				{
					AC = AC + 2;
				}
				else
				{
					AC = AC + stats[1][1];
				} 
			}
			else if (Temp->Armor_Type == "Light Armor")
			{
				AC = Temp->BaseAC +  stats[1][1];
			}
			if (Temp->name == "Shield")
			{
				AC = AC +2;
			}
		}
	}
}

void Fighter::ShowStats()
{
	cout << endl;
	cout << name << ", " << race << " Fighter" << endl;
	cout << "------------------------------------------------------------" << endl;
	cout << "Armor Class: " << AC << endl;
	cout << "Hit Points: " << hp << endl; 
	cout << "Speed: " << movement << endl;
	cout << "------------------------------------------------------------" << endl;
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
	cout << endl <<  "------------------------------------------------------------" << endl;
	cout << "Saving throws: STR ";
	if (Strsave >= 0)
	{
		cout << "+" <<Strsave << " DEX ";
	}
	else
	{
		cout << Strsave << " DEX ";
	}
	if (Dexsave >= 0)
	{
		cout << "+" <<Dexsave << " CON ";
	}
	else
	{
		cout << Dexsave << " CON ";
	}
	if (Consave >= 0)
	{
		cout << "+" <<Consave << " INT ";
	}
	else
	{
		cout << Consave << " INT ";
	}
	if (Intsave >= 0)
	{
		cout << "+" <<Intsave << " WIS ";
	}
	else
	{
		cout << Intsave << " WIS ";
	}
	if (Wissave >= 0)
	{
		cout << "+" <<Wissave << " CHA ";
	}
	else
	{
		cout << Wissave << " CHA ";
	}
	if (Chrsave >=0)
	{
		cout << "+" <<Chrsave << endl;
	}
	else
	{
		cout << Chrsave << endl;
	}

	cout << "Skills: N/A ";

	cout << endl;
	cout << "Inventory: ";
	for (int i = 0; i < eq_num; ++i)
	{
		if (inventory[i]->ammount > 1)
		{
			cout << inventory[i]->ammount << " " <<inventory[i]->name << ", ";
		}
		else
		{
			cout << inventory[i]->name << ", ";
		}
	}
	cout << endl <<  "------------------------------------------------------------" << endl;
	cout << endl;
}

Fighter::~Fighter()
{
	delete[] proficiencies;
	delete Fighting_Style;
}