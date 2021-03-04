#include <iostream>
#include <stdlib.h>
#include <string>
#include "Book.h"

using namespace std;

// Implementation of the default Book constructor
Book::Book()
{
	name = "unnamed book";
	ammount = 10;
	max_books = ammount;
}

// Implementation of the Book constructor taking the name of the book and the ammount of said books
Book::Book(string name_b, int ammount_b)
{
	name = name_b;
	ammount = ammount_b;
	max_books = ammount;

}

// Behaviour for borrowing a book
bool Book::borrow_a_book()
{
	if (ammount - 1 >= 0)
	{
		ammount = ammount -1;
		return true;
	}
	else
	{
		return false;
	}
}

// Implementation of deconstructor
Book::~Book()
{
}