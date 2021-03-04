#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>
#include "Book.h"
using namespace std;

// Defining Library class
class Library
{
public:
	// Constructors
	Library();
	Library(string name);

	// State variables
	string libname;
	//Book **bookpointer;
	int ammount_of_unique_books;
	Book *books[10];

	// Methods
	bool Borrow(int num);
	bool Return(int num);
	void newbooks(int num);
	virtual void GetAllBooks();
	


	// Deconstructor
	~Library();
	
};

#endif