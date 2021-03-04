#include <string>
#include <stdlib.h>
#include "BookStore.h"
#include "Dymocks.h"
#include "BarnesNoble.h"

using namespace std;

BarnesNoble::BarnesNoble()
{
	name = "Dymocks";
	numBook = 1000;
	address = "";
	//storeID = nextNumStores;
	//nextNumStores++;
	numSoldBooks = 0;
}

BarnesNoble::BarnesNoble(string n)
{
	name = n;
	numBook = 1000;
	address = "";
	//storeID = nextNumStores;
	//nextNumStores++;
	numSoldBooks = 0;

}


void BarnesNoble::soldBook()
{
	numSoldBooks++;
}

int BarnesNoble::get_soldBooks()
{
	return numSoldBooks;
}

int BarnesNoble::get_numSoldBooks()
{
	return numSoldBooks;
}

BarnesNoble::~BarnesNoble()
{

}