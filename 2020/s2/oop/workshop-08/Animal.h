#ifndef ANIMAL_H
#define ANIMAL_H
#include <stdio.h>
#include <string>

// Baic Ckass
class Animal
{
public:
	// Constructors
	Animal();
	Animal(std::string aSpecies); 

	// State variables
	std::string name;
	std::string species;
	static int currentID;
	int myID;

	// Behaviours
	void set_name(std::string aName);
	std::string get_species();      
	std::string get_name();
	int get_ID();  

	// Deconstructor
	~Animal();
	
};

#endif // ending