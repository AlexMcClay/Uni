#include <iostream>
#include <stdlib.h>
#include <string>
#include "animal.h"
#include "hunter.h"

using namespace std;

int hunter::nextID = 1000;

hunter::hunter(string n, int v)
{
	name = n;
	volume = v;
	animalID = nextID;     
	nextID++;
	kills = 0;
}

string hunter::get_name()
{
	return ("Hunter: " + name);
}



int hunter::get_kills()
{

	return kills;
}


void hunter::set_kills(int k)
{
	kills = k;

}


hunter::~hunter()
{

}