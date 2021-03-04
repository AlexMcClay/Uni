#include <iostream>
#include <stdlib.h>
#include <string>
#include "Market.h"

using namespace std;

/// Implement Behavoiurs here for example

Market::Market()
{
	name = "unknown Market";
	age = 0;
}

void Market::setName(string marName)
{
	name = marName;
}

string Market::getName()
{
	return name;
}

void Market::setAge(int merAge)
{
	age = merAge;
}

int Market::getAge()
{
	return age;
}




Market::~Market()
{
	
}
