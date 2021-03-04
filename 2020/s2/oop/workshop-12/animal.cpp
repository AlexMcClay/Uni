#include <iostream>
#include <stdlib.h>
#include <string>
#include "animal.h"

using namespace std;

animal::animal(string n, int v)
{
	name = n;              // the animal's name
	animalID = 0;             // the animal's unique ID
	volume = v; 
}

animal::animal()
{

}

void animal::set_volume(int v)
{
	volume = v;
}

int animal::get_volume()
{
	return volume;
}


int animal::get_animalID()
{
	return animalID;
}

void animal::set_name(string n)
{
	name = n;
}




animal::~animal()
{

}