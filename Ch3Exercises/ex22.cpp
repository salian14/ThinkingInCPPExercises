/*
	Create two new programs starting from ArgsToInts.cpp
	so they use atol( ) and atof( ), respectively.
*/


//: C03:ArgsToInts.cpp
// Converting command-line arguments to ints
#include <iostream>
#include <cstdlib>

using namespace std;
/*
int main(int argc, char* argv[]) {
	for(int i = 1; i < argc; i++)
		cout << atoi(argv[i]) << endl;
} ///:~
*/
/*
int main(int argc, char* argv[]){
	for(int i = 1; i < argc; i++)
		cout << atol(argv[i]) << endl;
}
*/

int main(int argc, char* argv[]){
	for(int i = 1; i < argc; i++)
		cout << atof(argv[i]) << endl;
}
