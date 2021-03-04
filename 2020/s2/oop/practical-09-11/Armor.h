#ifndef ARMOR_H
#define ARMOR_H
#include <stdio.h>
#include <string>
#include "Item.h"

// Baic Ckass
class Armor : public Item
{
public:
	Armor(std::string Name, float Weight, int Price, int base_ac, std::string armor_type, int Ammount, std::string Description, int ClassType);

	//static variables
	int BaseAC;
	std::string Armor_Type;

	//behabiours
	virtual void Is_Abstract();

	~Armor();
	
};

#endif // ending