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


Misc_Item::Misc_Item(std::string Name, float Weight, int Price, int Ammount, std::string Description, int ClassType)
{
	name = Name;
	weight = Weight;
	price = Price;
	ammount = Ammount;
	description = Description;
	class_type = ClassType;
}

Misc_Item::~Misc_Item()
{
	
}

void Misc_Item::Is_Abstract()
{
	cout << "" << endl;
}