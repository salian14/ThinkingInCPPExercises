/*
	Create a struct with a single int data member, and two global functions,
	each of which takes a pointer to that struct. The first function has a
	second int argument and sets the struct’s int to the argument value,
	the second displays the int from the struct. Test the functions
*/

/*
	using members removes the need to pass a pointer to the structure
	(this apparently happens more or less invisibly at a lower level during
	compilation)
*/

#include "ex5.h"
#include <iostream>

using namespace std;

void ex::setInt(int toSet){
	stuff = toSet;
}

void ex::showInt(){
	cout << "the structs int is: " << stuff << endl;
}

int main(){
	ex structure;
	structure.setInt(5);
	structure.showInt();
}
