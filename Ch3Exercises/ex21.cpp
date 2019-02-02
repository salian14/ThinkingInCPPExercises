/*
	Create an array of string objects and assign a string to
	each element. Print out the array using a for loop.
*/

#include <iostream>

using namespace std;

int main(){
	string strings[] = {"position", "velocity", "acceleration", "snap", "crackle", "pop"};

	//holy moley that's cool. c++ can tell the length of this array!

	for(string s : strings){
		cout << "next string is: " << s << endl;
	}
	//i wonder how it's argument passing game is tho
	//nope. arrays are passed as references. D: QQ
	void printArray(string*);
	printArray(strings);
}

/*
void printArray(string * s){
	for(string x : s){
		cout << "next string is: " << x << endl;
	}
}
*/
