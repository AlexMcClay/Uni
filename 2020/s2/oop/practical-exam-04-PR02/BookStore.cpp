#include <string>
#include <stdlib.h>
#include "BookStore.h"

using namespace std;

BookStore::BookStore()
{

}

BookStore::BookStore(string n, string a, int b)
{
	name = n;
	address = a;
	if (b < 0)
	{
		numBook = 0;
	}
	else
	{
		numBook = b;
	}
	
}

void BookStore::set_numBook(int b)
{
	numBook = b;
}

int BookStore::get_numBook()
{
	return numBook;
}

void BookStore::set_name(string n)
{
	name = n;
}

string BookStore::get_name()
{
	return name;
}

void BookStore::set_address(string a)
{
	address = a;
}

string BookStore::get_address()
{
	return address;
}

BookStore::~BookStore()
{

}