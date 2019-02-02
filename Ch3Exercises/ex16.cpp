/*
	Create a program that uses an enumeration of colors.
	Create a variable of this enum type and print out all the
	numbers that correspond with the color names, using a
	for loop.
*/
#include <iostream>

using namespace std;

#define PR(x) cout << #x << " is " << x << endl;

enum Color {
	red, blue, green, black, yellow
};

int main(){

	for(int i = red; i <= yellow; i++){
		PR(i);
		//doesn't actually print the color which kinda sucks but ehh
	}
}
