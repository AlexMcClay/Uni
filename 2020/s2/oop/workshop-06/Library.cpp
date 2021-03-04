#include <iostream>
#include <stdlib.h>
#include <string>
#include "Book.h"
#include "Library.h"

using namespace std;

// Implementation of the default Library constructor
Library::Library()
{
	libname = "Unnamed Library";
	books[0] = new Book("The Hobbit", 3);
	books[1] = new Book("Harry Potter", 5);
	ammount_of_unique_books = 2;

	
}

// Implementation of the Library constructor taking the name of the Library, the name of book and the ammount of said books
Library::Library(string name)
{
	libname = name;
	ammount_of_unique_books = 2;
	//books[0] = new Book("The Hobbit", 3);
	//books[1] = new Book("Harry Potter", 5);

}

// Lists all of the books with their current available stock
void Library::GetAllBooks()
{
	for (int i = 0; i < ammount_of_unique_books; ++i)
	{
		cout << "Book number: " << i << endl;
		cout << "Book name: " << books[i]->name << endl;
		cout << "Current stock: " << books[i]->ammount << endl << endl;
	}

}

void Library::newbooks(int num)
{
	
	for (int i = ammount_of_unique_books; i < (num+ammount_of_unique_books); ++i)
	{
		// initiative dynamic variables
		string name_b = "";
		int ammount_b = 0;

		// inputs
		cout << "New Book" << endl << "Title of the book: ";
		getline(cin, name_b);
		cout << "Ammount of books: ";
		cin >> ammount_b;
		cout << endl;

		// assigning inputs to new books
		books[i] = new Book(name_b, ammount_b);

		// deleting dynamic variables for names and ammount
		

		// This is here because if not getline will not work after the first loop
		cin.ignore();
	}
	ammount_of_unique_books = ammount_of_unique_books+num;
}


bool Library::Borrow(int num)
{
	if (num > ammount_of_unique_books)
	{
		cout << "The book that you are trying to borrow does not exist in our system." << endl;
		return false;
	}
	else if (books[num]->borrow_a_book() == true)
	{
		cout << "You borrowed a copy of: " << books[num]->name << endl;
		return true;
	}
	else
	{
		cout << "There are no more copies of " << books[num]->name << " in stock." << endl;
		return false;
	}

}


bool Library::Return(int num)
{
	if (num > ammount_of_unique_books)
	{
		cout << "The book that you are trying to return does not exist in our system." << endl;
		return false;
	}
	else if ((books[num] -> ammount) == (books[num]->max_books))
	{
		cout << "All copies of the book are still in our system." << endl;
		return false;
	}
	else 
	{
		(books[num] -> ammount) = (books[num] -> ammount) + 1;
		cout << "You have returned a copy of " << books[num] -> name << "." <<endl;
		return true;
	}
}
	


// Implementation of Library deconstructor
Library::~Library()
{
	delete *books;
}