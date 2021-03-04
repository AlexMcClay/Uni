#include <iostream>
#include <stdlib.h>
#include <string>
#include "Music_box.h"

using namespace std;

/// Implement Behavoiurs here for example

//constructor
Music_box::Music_box()
{
	sngname = "null";
	widthh = 0;
}

Music_box::Music_box(string songname, int width)
{
	sngname = songname;
	widthh = width;
}

//Behaviour
string Music_box::get_song()
{
	return sngname;
}

int Music_box::get_width()
{
	return widthh;
}

Music_box::~Music_box()
{
}
