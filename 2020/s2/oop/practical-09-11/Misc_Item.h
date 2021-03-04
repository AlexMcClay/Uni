#ifndef MISC_ITEM_H
#define MISC_ITEM_H
#include <stdio.h>
#include <string>
#include "Item.h"

// Baic Ckass
class Misc_Item : public Item
{
public:
	Misc_Item(std::string Name, float Weight, int Price, int Ammount, std::string Description, int ClassType);

	//static variables



	//behabiours
	virtual void Is_Abstract();

	~Misc_Item();
	
};

#endif // ending