/*
	Create a struct with a single int data member, and two global functions,
	each of which takes a pointer to that struct. The first function has a
	second int argument and sets the struct’s int to the argument value,
	the second displays the int from the struct. Test the functions
*/

#include "ex4.h"
#include <iostream>

using namespace std;

void setInt(ex * e, int toSet){
	e->stuff = toSet;
}

void showInt(ex * e){
	cout << "the structs int is: " << e->stuff << endl;
}

int main(){
	ex structure;
	setInt(&structure, 5);
	showInt(&structure);
}
