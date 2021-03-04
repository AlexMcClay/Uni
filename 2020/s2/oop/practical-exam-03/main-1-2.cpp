#include <iostream>
#include <stdlib.h>
#include "Music_box.h"
#include "Shelf.h"
using namespace std;



int main()
{

	Shelf* shelf;
	shelf = new Shelf(10);
	Music_box music;
	music.sngname = "Five Minutes Alone";
	music.widthh = 5;

	Music_box music2;
	music.sngname = "Five Minutes Alone";
	music.widthh = 5;

	cout << shelf->get_width() << endl;
	shelf->add_music_box(music);
	shelf->add_music_box(music2);
	cout << "space used: " << shelf->used_width << endl;
	cout << shelf->get_number_of_music_boxes() << endl;
	shelf->get_contents();

	return 0;
}