/*
	Change your solution to Exercise 2 so the struct is declared in a properly
	“guarded” header file, with the definition in one cpp file and your main( )
	in another.
*/

/*
	same idea as ex2 but the struct definition is inside a properly guarded
	header file!
*/

#include <iostream>
#include "ex3.h"

using namespace std;

int s::coolfunction(){
	cout << "we're inside that cool function!" << endl;
}

int main(){
	s blah;
	blah.coolfunction();
}
