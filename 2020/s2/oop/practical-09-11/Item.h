#ifndef ITEM_H
#define ITEM_H
#include <stdio.h>
#include <string>

// Baic Ckass
class Item
{
public:
	Item();

	//static variables
	std::string name;
	float weight;
	int price; // In Gold peices
	int ammount;
	std::string description;
	int class_type; // 1 Armor, 2 Weapon, 3 Misc

	//behabiours
	virtual void Is_Abstract() = 0;

	~Item();
	
};

#endif // ending