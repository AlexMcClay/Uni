#include <iostream>
#include <stdlib.h>
#include <string>
#include "animal.h"
#include "vegie.h"

using namespace std;

int vegie::nextID = 100;

vegie::vegie(string n, int v)
{
	name = n;
	volume = v;
	animalID = nextID;     
	nextID++;
}

string vegie::get_name()
{
	return ("Safe: " + name);
}



string vegie::get_favourite_food()
{

	return favourite_food;
}


void vegie::set_favourite_food(string f)
{
	favourite_food = f;

}


vegie::~vegie()
{

}