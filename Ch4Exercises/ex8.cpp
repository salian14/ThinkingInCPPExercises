/*
	Repeat Exercise 7 with Stack.
	ex 7:
	Make a Stash that holds doubles. Fill it with 25 double
	values, then print them out to the console.
*/
#include <iostream>
#include "stack.h"

using namespace std;

int main(){
	const int MAX = 25;
	//sets the random number generator seed to the time which is sufficiently random;
	srand(time(0));
	Stack s;
	s.initialize();
	for(int i = 0; i < MAX; i++){
		double d = *new double(rand() % 1000);
		cout << "d is " << d << endl;
		s.push(reinterpret_cast<void*>(&d));
	}

	for(int i = 0; i < MAX; i++){
		double d = *reinterpret_cast<double*>(s.peek());
		cout << "element i is: " << i << " and value is: " << d << endl;
		//delete &d;
	}
	s.cleanup();
}
