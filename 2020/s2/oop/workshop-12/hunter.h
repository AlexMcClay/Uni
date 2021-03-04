#ifndef HUNTER_H
#define HUNTER_H

#include <iostream>
#include <stdlib.h>
#include <string>
#include "animal.h"

using namespace std;


class hunter : public animal
{
public:
	hunter(string n, int v);
	~hunter();

	int get_kills();
	void set_kills(int k);
	virtual string get_name();

private:
	int kills ; 
	static int nextID ;
	
};

#endif // ending