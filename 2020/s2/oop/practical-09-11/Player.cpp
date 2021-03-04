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