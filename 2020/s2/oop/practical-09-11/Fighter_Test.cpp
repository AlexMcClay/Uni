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
	int finalstats1[2][6] = {{18, 18, 18, 18, 18, 18} , {4, 4, 4, 4, 4, 4}};
	int finalstats2[2][6] = {{10, 15, 10, 10, 10, 10} , {0, 2, 0, 0, 0, 0}};



	name =  "alex";
	race = "Dwarf";

	Fighter *player, *player2;
	player = new Fighter(name, race, finalstats1);
	player2 = new Fighter(name, race, finalstats2);

	//cout << player->Strsave << endl;

	//player->Class_Creation();

	// TESTING Character Creation
	cout << "test 1" << endl << endl;
	player->Class_Creation_Test(1, 1, 1, 1, 1, 1);
	

	// Updates some values with the options chosen in Class_Creation
	player->Update_Stats();

	// Shows the Stats
	player->ShowStats();
	cout << endl << endl << endl;

	cout << "test 2" << endl << endl;
	player2->Class_Creation_Test(3, 2, 2, 2, 2, 1);
	

	// Updates some values with the options chosen in Class_Creation
	player2->Update_Stats();

	// Shows the Stats
	player2->ShowStats();
	cout << endl << endl << endl;

	return 0;
}