
#include "ex1.h"

//Create a header file (with an extension of ‘.h’). In this file, declare a group of functions by varying the argument lists and return values from among the following: void, char, int, and float. Now create a .cpp file that includes your header file and creates definitions for all of these functions. Each definition should simply print out the function name, argument list, and return type so you know it’s been called. Create a second .cpp file that includes your header file and defines int main( ) , containing calls to all of your functions. Compile and run your program. 2
#include <iostream>

using namespace std;

float cool(int x){
    return x + 1.0;
}
int looc(float f ){
    return f/1;
}
void blah(void){
    cout << "sup?" << endl;;
}
