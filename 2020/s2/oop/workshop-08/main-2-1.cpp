#include <iostream>
#include <stdlib.h>
#include <string>
#include "Animal.h"
#include "Hunter.h"

using namespace std;


int main()
{

	Animal *Elephant;
	Hunter *Cheetah;

	Elephant = new Animal("Elephant");
	Cheetah = new Hunter("Cheetah");

	cout << endl;
	cout << Elephant ->get_name() << endl;
	cout << Elephant ->get_species() << endl;
	cout << Elephant ->get_ID() << endl;


	cout << endl;
	cout << Cheetah ->get_name() << endl;
	cout << Cheetah ->get_species() << endl;
	cout << Cheetah ->get_ID() << endl;

	Cheetah -> set_name("Bob");

	cout << endl;
	cout << Cheetah ->get_name() << endl;
	cout << Cheetah ->get_species() << endl;
	cout << Cheetah ->get_ID() << endl;



	cout << endl;
	return 0;
}