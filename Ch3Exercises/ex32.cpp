/*
	Define a function that takes a double argument and returns an int.
	Create and initialize a pointer to this function, and call the
	function through your pointer.
*/


#include <iostream>
using namespace std;

int func1(double d){
	int x = d;
	return x;
}


int main(){
	//include parenthesis to make it clear to the compiler this is a pointer not a
	//declaration
	int (*functionpointer)(double) = func1;

	double d = 200.1;
	int y = (*functionpointer)(d);
	cout << "Y is: " << y << endl;
}
