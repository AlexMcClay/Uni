#ifndef MUSIC_BOX_H
#define MUSIC_BOX_H

#include <string>
using namespace std;

// Baic Ckass
class Music_box
{
public:
	// Constructors
	Music_box();
	Music_box(string songname, int width);

	// State variables
	int widthh;
	string sngname;

	// Behaviours
	string get_song();
	int get_width();

	// Deconstructor
	~Music_box();
	
};

#endif // ending