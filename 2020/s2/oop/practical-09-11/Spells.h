#ifndef SPELLS_H
#define SPELLS_H
#include <stdio.h>
#include <string>


class Spells
{
public:
	Spells();

	//static variables
	std::string name;
	std::string school;
	int spell_level;
	std::string casting_time;
	std::string range;
	bool verbal;
	bool somatic;
	bool material;
	std::string material_component;
	std::string *classes;
	std::string description;

	//behabiours
	void disp_spell();

	~Spells();
	
};

#endif // ending