#ifndef MARKET_H
#define MARKET_H
#include <stdio.h>
#include <string>
using namespace std;

// Baic Ckass
class Market
{
public:
	// Constructors
	Market();

	// State variables
	int age;
	string name;

	// Behaviours
	void setName(string marName); 
	string getName();
	void setAge(int merAge);
	int getAge();

	// Deconstructor
	~Market();
	
};

#endif // ending