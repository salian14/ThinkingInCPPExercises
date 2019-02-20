/*
	Make a Stash that holds doubles. Fill it with 25 double
	values, then print them out to the console.
*/
/*
	just going to use the stash.h class declaration from the next chapter
	and redo the implementation to fit as a class
*/

#include "stash.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	//sets the random number generator seed to the time which is sufficiently random;
	srand(time(0));
	Stash s;
	s.initialize(sizeof(double));
	for(int i = 0; i < 25; i++){
		//doubles need to be allocated dynamically
		//dereference pointer immediately for ease of use
		double  d = *new double(rand() % 1000);
		cout << "element at " << i << " is " << d << endl;
		s.add(reinterpret_cast<void*>(&d));
	}

	for(int i = 0; i < 25; i++){
		double x = *reinterpret_cast<double*>(s.fetch(i));
		cout << "element at " << i << " is " << x << endl;
	}
}
