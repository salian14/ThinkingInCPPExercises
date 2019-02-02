/*
Modify ArrayAddresses.cpp to work with the data types
char, long int , float, and double.
*/

//: C03:ArrayAddresses.cpp
#include <iostream>
using namespace std;
int main() {
	int a[10];
	cout << "sizeof(int) = "<< sizeof(int) << endl;
	for(int i = 0; i < 10; i++)
		cout << "&a[" << i << "] = "
			<< (long)&a[i] << endl;
	//char
	int ch[10];
	cout << "sizeof(char) = "<< sizeof(char) << endl;
	for(char i = 'a'; i < 'k'; i++)
		cout << "&b[" << i << "] = "
			<< (long)&ch[i] << endl;

	//long int

	long int longInt[10];
	cout << "sizeof(long int) = "<< sizeof(long int) << endl;
	for(int i = 0; i < 10; i++)
		cout << "&longInt[" << i << "] = "
			<< (long)&longInt[i] << endl;

	//float

	int floa[10];
	cout << "sizeof(float) = "<< sizeof(float) << endl;
	for(int i = 0; i < 10; i++)
		cout << "&floa[" << i << "] = "
			<< (long)&floa[i] << endl;

	//double
	int doub[10];
	cout << "sizeof(double) = "<< sizeof(double) << endl;
	for(int i = 0; i < 10; i++)
		cout << "&doub[" << i << "] = "
			<< (long)&doub[i] << endl;
} ///:~
