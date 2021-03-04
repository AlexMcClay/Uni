#ifndef DYMOCKS_H
#define DYMOCKS_H
#include <iostream>
#include <string>
#include "BookStore.h"


using namespace std;

class Dymocks : public BookStore
{
public:
	Dymocks(bool o);      // sets isOnline attribute with o
	Dymocks(); 
	~Dymocks(); 			// calls the parent class constructor with name=="Dymocks" and numBook==1000 // and address equal to the empty string

	void set_nextNumStores(int n);
	void set_storeID(int i);
	void set_isOnline(bool o);

	int get_nextNumStores();
	int get_storeID();
	bool get_isOnline();

	virtual float get_onlineTax();

private:
	static int nextNumStores;
	int storeID;          // unique store ID 
	bool isOnline;       // class attribute   
	
};







#endif