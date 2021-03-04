#include <iostream>
#include <stdlib.h>
#include <string>
#include "Music_box.h"

#include "Shelf.h"

using namespace std;

/// Implement Behavoiurs here for example

//constructor
Shelf::Shelf()
{
	widthh = 0;
	used_width = 0;
	count = 0;
	musicboxes = new Music_box[1];
	musicboxes_old = new Music_box[1];

}

Shelf::Shelf(int width)
{
	widthh = width;
	used_width = 0;
	count = 0;
}

//Behaviour
int Shelf::get_number_of_music_boxes()
{
	return count;
}

int Shelf::get_width()
{
	return widthh;
}

Music_box* Shelf::get_contents()
{
	/*Music_box* current_content;
	current_content = new Music_box[count];
	for (int i = 0; i < count; ++i)
	{
		current_content[i] = musicboxes[i];
	}
	return current_content;*/
}

bool Shelf::add_music_box(Music_box a_music_box)
{
	int num = count;

	if (used_width == widthh)
	{
		return false;
	}
	else
	{
		

		delete[] musicboxes_old;
		musicboxes_old = new Music_box[count];

		for (int i = 0; i < count; ++i)
		{
			musicboxes_old[i] = musicboxes[i];
		}
		delete[] musicboxes;

		
		
		if ((a_music_box.widthh)+used_width >= widthh)
		{

			return false;
		}
		
		else
		{

			count = count +1;
			musicboxes = new Music_box[count];
			for (int j = 0; j < (count-1); ++j)
			{
				musicboxes[j] = musicboxes_old[j];
			}

			used_width = used_width + a_music_box.widthh;
			musicboxes[count-1].widthh = a_music_box.widthh;
			musicboxes[count-1].sngname = a_music_box.sngname;
			return true;
		}
	}	
}




Shelf::~Shelf()
{
	delete[] musicboxes;
	delete[] musicboxes_old;
}
