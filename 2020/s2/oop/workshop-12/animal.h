#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;


class animal
{

	public:
		animal(string n, int v); // creates an animal with name n and body volume v.
		animal();

		int get_volume();
		void set_volume(int v);
		virtual string get_name() = 0;
		void set_name(string n);
		int get_animalID();

		~animal();

	protected:
		string name ;              // the animal's name
		int animalID ;             // the animal's unique ID
		int volume ;               // the volume of the animal's body
};

#endif // ending