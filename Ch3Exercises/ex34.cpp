/*
	Modify FunctionTable.cpp so that each function returns a string
	(instead of printing out a message) and so that this value is printed
	inside of main( ).
*/

//: C03:FunctionTable.cpp
// Using an array of pointers to functions
#include <iostream>
#include <string>
using namespace std;

// A macro to define dummy functions:

//changed the contents of the function and the return

#define DF(N) string N() { return #N; }

//declarations for dummy functions
DF(a);
DF(b);
DF(c);
DF(d);
DF(e);
DF(f);
DF(g);

//changed so functable returned string instead of void
string (*func_table[])() = { a, b, c, d, e, f, g };

int main() {
	while(1){
		cout << "press a key from 'a' to 'g' "
		"or q to quit" << endl;
		char c, cr;
		cin.get(c); cin.get(cr);
		// second one for CR
		if ( c == 'q' )
			break;
		// ... out of while(1)
		if ( c < 'a' || c > 'g' )
			continue;

		//created variable to catch return and printed
		string s = (*func_table[c - 'a'])();
		cout << "return is: " << s << endl;

	}
} ///:~
