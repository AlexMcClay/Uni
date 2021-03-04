#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>
#include "Book.h"
#include "Library.h"

using namespace std;



int main(void)
{
	bool quit = false;
	char inputstring;
	int inputnum = 0;
	int status = 0;

	Library *lib;
	lib = new Library();

	cout << "Please input a value, g for getting the list of all current books in our system" << endl;
	cout << "b for borrowing a book" << endl;
	cout << "r for returning a book" << endl;
	cout << "a for adding a new book to the system" << endl;
	cout << "enter a '.' to quit the loop" << endl;
	while (inputstring != '.')
	{
		cin >> inputstring;
		if (inputstring == 'b')
		{
			cout << endl << "You chose to borrow a book." << endl << endl;
			lib -> GetAllBooks();
			cout << "Which book do you want to borrow. Choose one of the numbers" << endl;
			while (status == 0)
			{
				cin >> inputnum;
				if (inputnum >= (lib-> ammount_of_unique_books))
				{
					cout << "Please choose a valid number" << endl;
				}
				else if (inputnum < 0)
				{
					cout << "Please choose a valid number" << endl;
				}
				else
				{
					lib -> Borrow(inputnum);
					inputnum = 0;
					status = 1;
					cout << "Please input a value" << endl;
				}

			}
			status = 0;
		}
		else if (inputstring == 'g')
		{
			cout << endl << "You chose to see the current list of books" << endl << endl;
			lib -> GetAllBooks();
			cout << "Please input a value" << endl;
		}
		else if (inputstring == 'a')
		{
			cout << endl << "You chose to add new books to the Library" << endl << endl;
			if (10-(lib-> ammount_of_unique_books) == 0)
			{
				cout << "There is no more space in the library for new books" << endl << endl;
				cout << "Please input a value" << endl;

			}
			else
			{
				cout << "Please input a number from 1 to " << 10-(lib-> ammount_of_unique_books) << endl;
				while (status == 0)
				{
					cin >> inputnum;
					if (inputnum > 10-(lib-> ammount_of_unique_books))
					{
						cout << "please input a number below " << 11-(lib-> ammount_of_unique_books) << endl;
					}
					else if (inputnum <= 0)
					{
						cout << "please input a number above 0"	<< endl;			
					}
					else
					{
						cin.ignore();
						lib ->newbooks(inputnum);
						inputnum = 0;
						status = 1;
						cout << "Please input a value" << endl;
					}
				}
				status = 0;
			}
		}
		else if (inputstring == 'r')
		{
			cout << endl << "You chose to return a book." << endl << endl;
			lib -> GetAllBooks();
			cout << "Which book do you want to return. Choose one of the numbers" << endl;
			while (status == 0)
			{
				cin >> inputnum;
				if (inputnum >= (lib-> ammount_of_unique_books))
				{
					cout << "Please choose a valid number" << endl;
				}
				else if (inputnum < 0)
				{
					cout << "Please choose a valid number" << endl;
				}
				else
				{
					lib -> Return(inputnum);
					inputnum = 0;
					status = 1;
					cout << "Please input a value" << endl;
				}

			}
			status = 0;
		}
	};
	cout << "You quit the loop" << endl;


	return 0;
}