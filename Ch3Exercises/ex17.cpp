/*
Experiment with Union.cpp by removing various union
elements to see the effects on the size of the resulting
union. Try assigning to one element (thus one type) of
the union and printing out a via a different element (thus
a different type) to see what happens.
*/
#include <iostream>

using namespace std;

#define PR(x) cout << #x << " is " << x << endl;

typedef union {
	//sizeof w/ float = 4
	//float f;
	//w/o float is 4
	//int i;
	// w/o int is 2!
	short y;
} tryme;

int main(){

	tryme z;
	//z.f = 3.14;
	PR(sizeof(tryme));
	//PR(z.i);
}
