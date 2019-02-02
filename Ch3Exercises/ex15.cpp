/*
Create a struct that holds two string objects and one int.
Use a typedef for the struct name. Create an instance of
the struct, initialize all three values in your instance, and
print them out. Take the address of your instance and
assign it to a pointer to your struct type. Change the
three values in your instance and print them out, all
using the pointer.
*/
#include <iostream>
#define PR(x) cout << #x << " is " << x << endl;
using namespace std;

typedef struct{
	string s;
	string t;
	int x;
} strooct;

int main(){
	strooct bleh;
	bleh.s = "cool";
	bleh.t = "io";
	bleh.x = 7;
	PR(bleh.s);
	PR(bleh.t);
	PR(bleh.x);

	strooct * blah = &bleh;
	blah->s = "nope";
	blah->t = "brah";
	blah->x = 20;

	PR(blah->s);
	PR(blah->t);
	PR(blah->x);
}
