#include <iostream>
#include <stdlib.h>
#include "Music_box.h"
using namespace std;



int main()
{
	Music_box music;

	music.sngname = "The Brain Dance";
	music.widthh = 3;

	cout << music.get_song() << endl;
	cout << music.get_width() << endl;


	return 0;
}