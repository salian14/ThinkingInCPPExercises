/*
	Declare a pointer to a function taking an int argument and returning a pointer
	to a function that takes a char argument and returns a float
*/

#include <iostream>
using namespace std;

//the code to do this seems really dodgy and not at all obvious. let's try typedef.. below
/*
float function2(char c){
	cout << "c is : " << c << endl;
	return 0.0;
}

float (*function1(int x))(char){
	cout << "x is: " << x << endl;
	return function2;
}

int main(){
	// func1 is the name of the variable
	float (*(*func1)(int))(char) = function1;
	float (*frick2)(char) = func1(5);

	float result = frick2('d');
	cout << "result is: " << result << endl;

}
*/

//this looks much more like it should and with another typedef would look
//pretty much like normal c++ code without the weird function pointer syntax
typedef float (*FuncPtr)(char);

float function2(char c){
	cout << "c is : " << c << endl;
	return 0.0;
}


FuncPtr function1(int x){
	cout << "x is: " << x << endl;
	return function2;
}

int main(){
	// func1 is the name of the variable
	FuncPtr (*func1)(int) = function1;
	FuncPtr frick2 = func1(5);

	float result = frick2('d');
	cout << "result is: " << result << endl;

}
