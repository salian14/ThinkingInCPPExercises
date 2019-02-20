/*
Modify StringizingExpressions.cpp so that P(A) is conditionally #ifdefed to
allow the debugging code to be automatically stripped out by setting a
command-line flag. You will need to consult your compiler’s documentation to
see how to define and undefine
*/

// note skipped exercise 29 on the anatomy of a double and 30 which was
// creating a makefile


//: C03:StringizingExpressions.cpp

//note that the code in the ifdef only makes it past the preprocessor if there is
// a statement (before the ifdef is reached) "#define DEBUG"
#include <iostream>

using namespace std;
#ifdef DEBUG
	#define P(A) cout << #A << ": " << (A) << endl;
#endif
int main() {
	int a = 1, b = 2, c = 3;
	#ifdef DEBUG
		P(a);
		P(b);
		P(c);
		P(a + b);
		P((c - a)/b);
	#endif
} ///:~
