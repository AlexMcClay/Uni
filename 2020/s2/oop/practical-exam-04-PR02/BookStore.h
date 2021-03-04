#ifndef BOOKSTORE_H
#define BOOKSTORE_H
#include <iostream>
#include <string>

// REMEMBER TO USE INCLUDE In hte .cpp files #include "example.h"
using namespace std;

class BookStore
{
public:
	BookStore();
	BookStore(string n, string a, int b);   // creates a BookStore name n, address a, and number of books in the store b
	~BookStore();

	void set_numBook(int b); 
	int get_numBook();
	void set_name(string n);
	string get_name();
	void set_address(string a);
	string get_address();

	virtual float get_onlineTax() = 0; // returns true if more staff is necessary


protected:
	string name;                // the book store name
	string address;             // the book store address
	int numBook;                // the inventory in the store; takes only non-negative values
};


#endif