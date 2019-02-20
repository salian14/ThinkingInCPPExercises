/*
	create a struct declaration with a single member function, then create a
	definition for that member function. Create an object of your new data type,
	and call the member function.
*/

/*
	a very simple program which illustrates syntax for struct in c++ as well as
	the use of member functions
*/

#include <iostream>
using namespace std;

//this should technically be in a header file
struct s{
	int coolfunction();
};

int s::coolfunction
	cout << "we're inside that cool function!" << endl;
}

int main(){
	s blah;
	blah.coolfunction();
}
