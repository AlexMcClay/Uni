#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

// defining class book
class Book
{
public:
	// Constructors
	Book();
	Book(string name, int ammount);

	// State variables
	string name;
	int ammount;
	int max_books;

	// Behaviours
	bool borrow_a_book();

	// Deconstructor
	~Book();
	
};



#endif // ending