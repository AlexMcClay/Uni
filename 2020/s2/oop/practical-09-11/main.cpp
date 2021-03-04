#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>
#include <cmath>
#include <time.h>

#include "Player.h"
#include "Wizard.h"
#include "Fighter.h"

#include "Item.h"
#include "Misc_Item.h"
#include "Weapons.h"
#include "Armor.h"

using namespace std;
extern int* roll_stats();
extern int dice_roll(int, int);



int main(void)
{
	srand (time(NULL)); // random 
	string name;
	string race = "";
	string end = "Y";
	int score = 0;
 	int x = 0;
	int* stats;
	int finalstats[2][6];


	stats = roll_stats(); // rolls the set of stats

	while (end == "Y") 	// Section of code that prompts the player if they want to reroll their stats
	{
		cout << "your rolls are: ";
		for (int i = 0; i < 6; ++i)
		{
			cout << stats[i] << ", ";
		}
		cout << endl << "Do you wish to reroll the stats? Y/N" << endl;
		cin >> end;
		if (end == "Y")
		{
			stats = roll_stats();
		}
		else if (end == "N")
		{
				// nothing
		}
		else
		{
			cout << "Please select a valid option";
			end = "Y";
		}
		cout << endl << endl;
	}

	end = "Y"; // Resets to Y, so the variable can be used again for another option

 	// Section of code that asks the player to assign their stats
	cout << "Now you are going to assign your rolls to ability scores" << endl;
	while (end == "Y") 
	{
		for (int i = 0; i < 6; ++i)
		{
			while (end == "Y")
			{
				cout << "your rolls are: ";
				for (int i = 0; i < 6; ++i)
				{
					cout << stats[i] << ", ";
				}
				cout << endl;

				switch(i)
				{
					case 0:
						cout << "Which roll do you want to be your Strength ability score: ";
						break;
					case 1:
						cout << "Which roll do you want to be your Dexterity ability score: ";
						break;
					case 2:
						cout << "Which roll do you want to be your Constitution ability score: ";
						break;
					case 3:
						cout << "Which roll do you want to be your Intelligence ability score: ";
						break;
					case 4:
						cout << "Which roll do you want to be your Wisdom ability score: ";
						break;
					case 5:
						cout << "Which roll do you want to be your Charisma ability score: ";
					break;
				}

				cin >> score;
				if ((score >= 3) && (score <= 18))
				{
					if ((score == stats[0]) || (score == stats[1]) || (score == stats[2]) || (score == stats[3]) || (score == stats[4]) || (score == stats[5]))
					{
						if (score == stats[0])
						{
								finalstats[0][i] = score;
								stats[0] = 0;
								end == "N";
								cout << endl;
								break;
						}
						else if (score == stats[1])
						{
								finalstats[0][i] = score;
								stats[1] = 0;
								end == "N";
								cout << endl;
								break;
						}
						else if (score == stats[2])
						{
								finalstats[0][i] = score;
								stats[2] = 0;
								end == "N";
								cout << endl;
								break;
						}
						else if (score == stats[3])
						{
								finalstats[0][i] = score;
								stats[3] = 0;
								end == "N";
								cout << endl;
								break;
						}
						else if (score == stats[4])
						{
								finalstats[0][i] = score;
								stats[4] = 0;
								end == "N";
								cout << endl;
								break;
						}
						else if (score == stats[5])
						{
								finalstats[0][i] = score;
								stats[5] = 0;
								end == "N";
								cout << endl;
								break;
						}
						else
						{
								cout << "Please choose a valid option" << endl << endl;
						}
					}
					else
					{
						cout << "Please choose a valid option" << endl << endl;
					}
				}
				else
				{
					cout << "Please choose a valid option" << endl << endl;
				}
			}
		}
		end == "N";
		break;
	}

	cout << endl;
	cout << "your stats are: " << endl;
	cout << "STR  DEX  CON  INT  WIS  CHA" << endl << " ";
	for (int i = 0; i < 6; ++i)
	{
		cout << finalstats[0][i] << "   ";
	}
	cout << endl << endl;

	while (race == "") // Section of code that asks the player for their race
	{
		cout << "Chose your race:" << endl;
		cout << "Dwarf: +2 STR, +2 CON" << endl;
		cout << "Elf: +2 DEX, +2 WIS" << endl;
		cout << "Human: +1 to all stats" << endl;
		cin >> race;

		if ((race == "Dwarf") || (race == "dwarf"))
		{
			finalstats[0][0] += 2;
			finalstats[0][2] += 2;
			race = "Dwarf";
		}
		else if ((race == "Elf") || (race == "elf"))
		{
			finalstats[0][1] += 2;
			finalstats[0][4] += 2;
			race = "Elf";
		}
		else if ((race == "Human") || (race == "human"))
		{
			finalstats[0][0] += 1;
			finalstats[0][1] += 1;
			finalstats[0][2] += 1;
			finalstats[0][3] += 1;
			finalstats[0][4] += 1;
			finalstats[0][5] += 1;
			race = "Human";
		}
		else
		{
			cout << endl << "Please Choose a valid option" << endl << endl;
			race = "";
		}
	}

	// Calculating Abiltiy score Bonuses
	for (int i = 0; i < 6; ++i)
	{
		finalstats[1][i] = (std::floor(finalstats[0][i]/2)-5);
	}


	cout << endl;
	cout << "your final stats are: " << endl;
	cout << "STR  DEX  CON  INT  WIS  CHA" << endl << " ";
	for (int i = 0; i < 6; ++i)
	{
		cout << finalstats[0][i] << "   ";
	}
	cout << endl << "";
	for (int i = 0; i < 6; ++i)
	{
		if (finalstats[1][i] < 0)
		{
			cout <<  finalstats[1][i] << "   ";
		}
		else if (finalstats[1][i] >= 0)
		{
			cout << "+"<<  finalstats[1][i] << "   ";
		}	
	}

	cout << endl <<  endl; // Looks cleaner 
	//Should produce error when compiling, since you cant make a abstact class
	
	name =  "alex";

	Fighter *player;
	player = new Fighter(name, race, finalstats);

	//cout << player->Strsave << endl;

	player->Class_Creation();
	player->Update_Stats();


	// Martail Melee weapons test
	/*Weapons longsword("Longsword",1, 3, 15,"slashing", 1, 8, false, false, false, false, false, 0, 0, false, false, false, false, true, 1, 10, false, "", 1, 1);
	Weapons halberd("Halberd",1, 6, 20,"slashing", 1, 10, false, false, true, false, false, 0, 0, false, true, false, true, false, 0, 0, false, "", 3, 1);
	Weapons lance("Lance",1, 6, 10,"piercing", 1, 12, false, false, false, false, false, 0, 0, false, true, false, false, false, 0, 0, true, "Special: You have disadvantage when you use a lance to Attack a target within 5 feet of you. Also, a lance requires two hands to wield when you aren't mounted.", 2, 1);

	// Martial Ranged Weapons
	Weapons blowgun("Blowgun",1, 1, 10,"piercing", 1, 1, true, false, false, false, true, 25, 100, true, false, false, false, false, 0, 0, false, "", 2, 1);
	Weapons hand_crossbow("Crossbow, hand",1, 3, 75,"piercing", 1, 6, true, false, false, true, true, 30, 120, true, false, false, false, false, 0, 0, false, "", 3, 1);
	Weapons heavy_crossbow("Crossbow, heavy",1, 18, 50,"piercing", 1, 10, true, false, true, false, true, 30, 120, true, false, false, true, false, 0, 0, false, "", 4, 1);*/

	// Display test
	//longsword.display();
	//halberd.display();
	//lance.display();
	//blowgun.display();

	// Main Sequence 
	int game = 0;
	int input;
	while (game == 0)
	{
		cout << "As you are walking through the Starwater Gorge, the western side is" << endl;
		cout << "a weathered rockface with many cracks, washouts, and overgrown rockfalls." << endl;
		cout << "As you get closer you can see a fissure that leads to a rough-walled square passage." << endl;
		cout << "The passage is clearly worked and not natural, but lichen-encrusted and obviously used." << endl;
		cout << endl << "The passage leads to two closed doors made of stout oak. What do you do?" << endl << endl;

		cout << "1: Open the door and go through" << endl << "2: Inspect the door" << endl << "3: Look around" << endl << "4: Check stats" << endl << "5: quit" << endl;
		cout << "-> ";
		cin >> input;

		if (input == 1)
		{
			cout << "The Door is locked" << endl << endl;
		}
		if (input == 2)
		{
			int diceroll;
			diceroll  = dice_roll(1,20) + player->Investigation;
			if (diceroll>10)
			{
				cout << "The doors have two large iron pull-rings. They are dark with age, but look solid" << endl;
				cout << "Upon close examination, intricate twisting runes can be found carved on their panels." << endl << endl;
			}
			else
			{
				cout << "The doors have two large iron pull-rings. They are dark with age, but look solid" << endl << endl;
			}

		}
		if (input == 3)
		{
			int diceroll;
			diceroll  = dice_roll(1,20) + player->Perception;
			if (diceroll>10)
			{
				cout << "You see a dragon in the distance" << endl << endl;
			}
			else
			{
				cout << "You see the leaves fall from the trees" << endl << endl;
			}
		}
		if (input == 4)
		{
			player->ShowStats();
		}
		else if (input == 5)
		{
			game = 1;
		}
		cout << endl << endl;
	}



	return 0;
}