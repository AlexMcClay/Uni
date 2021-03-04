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



Armor::Armor(std::string Name, float Weight, int Price, int base_ac, std::string armor_type, int Ammount, std::string Description, int ClassType)
{
	name = Name;
	weight = Weight;
	price = Price;
	BaseAC = base_ac;
	Armor_Type = armor_type;
	ammount = Ammount;
	description = Description;
	class_type = ClassType;
}

void Armor::Is_Abstract()
{
	cout << "" << endl;
}

Armor::~Armor()
{

}