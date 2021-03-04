#ifndef BARNESNOBLE_H
#define BARNESNOBLE_H
#include <iostream>
#include <string>
#include "BookStore.h"
#include "Dymocks.h"


using namespace std;

class BarnesNoble : public Dymocks
{
public:
	BarnesNoble();
	BarnesNoble(string n);  // set name n  
	~BarnesNoble();

	void soldBook();   // increments numSoldBooks
	int get_soldBooks(); // returns the books sold
	int get_numSoldBooks();
private:
	int numSoldBooks;
};







#endif