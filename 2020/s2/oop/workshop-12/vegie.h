#ifndef VEGIE_H
#define VEGIE_H

#include <iostream>
#include <stdlib.h>
#include <string>
#include "animal.h"

using namespace std;


class vegie : public animal
{
public:
	vegie(string n, int v); // create a vegie with name n and body volume v
	~vegie();

	virtual string get_name();
	string get_favourite_food();
	void set_favourite_food(string f);

private:
	string favourite_food ;     // the vegie's favourite food, initialise to "grass"
	static int nextID ;
	
};

#endif // ending