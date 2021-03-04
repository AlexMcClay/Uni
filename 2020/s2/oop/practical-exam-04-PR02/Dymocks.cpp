#include <string>
#include <stdlib.h>
#include "BookStore.h"
#include "Dymocks.h"

using namespace std;

int Dymocks::nextNumStores = 0;

Dymocks::Dymocks()
{
	
}

Dymocks::Dymocks(bool o)
{
	name = "Dymocks";
	numBook = 1000;
	address = "";
	isOnline = o;
	storeID = nextNumStores;
	nextNumStores++;
}

void Dymocks::set_nextNumStores(int n)
{
	nextNumStores = n;
}

void Dymocks::set_storeID(int i)
{
	storeID = i;
}

void Dymocks::set_isOnline(bool o)
{
	isOnline = o;
}

int Dymocks::get_nextNumStores()
{
	return nextNumStores;
}

int Dymocks::get_storeID()
{
	return storeID;
}

bool Dymocks::get_isOnline()
{
	return isOnline;
}

float Dymocks::get_onlineTax()
{
	if (isOnline == true)
	{
		return 500.00;
	}
	else
	{
		return 0;
	}

}

Dymocks::~Dymocks()
{

}