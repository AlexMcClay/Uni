#ifndef SHELF_H
#define SHELF_H

#include "Music_box.h"
#include <string>
using namespace std;

// Baic Ckass
class Shelf
{
public:
	// Constructors
	Shelf();
	Shelf(int width);

	// State variables
	int widthh;
	int used_width;
	int count;
	Music_box* musicboxes;
	Music_box* musicboxes_old;

	// Behaviours
	int get_width();
	int get_number_of_music_boxes();
	Music_box *get_contents();
	bool add_music_box(Music_box a_music_box);

	// Deconstructor
	~Shelf();
	
};

#endif // ending