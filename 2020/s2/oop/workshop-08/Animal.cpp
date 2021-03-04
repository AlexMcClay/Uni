#include <iostream>
#include <stdlib.h>
#include <string>
#include "Animal.h"

using namespace std;

/// Implement Behavoiurs here for example


int Animal::currentID = 0;

Animal::Animal()
{
	
	species = "unkown";
	name = "unknown";
	currentID++;
	myID = currentID;

}

Animal::Animal(string aSpecies)
{
	species = aSpecies;
	name = "unknown";
	currentID++;
	myID = currentID;

}


void Animal::set_name(string aName)
{
	name = aName;
}

string Animal::get_species()
{
	return species;
}
string Animal::get_name()
{
	return name;
}

int Animal::get_ID() 
{
	return myID;
}

Animal::~Animal()
{
	
}
