#include <string>
#include <stdlib.h>
#include "BookStore.h"
#include "Dymocks.h"

using namespace std;

int main(int argc, char const *argv[])
{
	

	Dymocks a(true);

	cout << a.get_nextNumStores() << endl;
	cout << a.get_storeID() << endl;
	cout << a.get_isOnline() << endl;
	cout << endl;

	return 0;
}