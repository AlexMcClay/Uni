#ifndef HUNTER_H
#define HUNTER_H
#include <stdio.h>
#include <string>
#include "Animal.h"



class Hunter : public Animal
{
public:

	// Constructor
	Hunter();
	Hunter(std::string aSpecies);   

	// State Variables
	int numberOfKills();   

	// Methods	
	void record_kill(std::string kill);
	std::string * get_kills();   

	// Deconstructor
	~Hunter();
	
};

#endif // ending