#include <iostream>
#include <stdlib.h>
#include <string>
#include "Animal.h"
#include "Hunter.h"

using namespace std;

/// Implement Behavoiurs here for example


Hunter::Hunter()
{
	
	species = "unkown";
	name = "unknown";
	myID = currentID;

}

Hunter::Hunter(string aSpecies)
{
	species = aSpecies;
	name = "unknown";
	myID = currentID;

}


Hunter::~Hunter()
{
	
}
