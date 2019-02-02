/*
Create a program that defines two int arrays, one right
after the other. Index off the end of the first array into the
second, and make an assignment. Print out the second
array to see the changes cause by this. Now try defining a
char variable between the first array definition and the
second, and repeat the experiment. You may want to
create an array printing function to simplify your coding.
*/

#include <iostream>

using namespace std;

#define PR(x) cout << #x << " is " << x << endl;

const int SIZEA = 3;
const int SIZEB = 4;


void PrintArray(int* x, int s){
	for(int i = 0; i < s; i++){
		PR(x[i]);
	}
}

int main(){
	int a[] = {1,2,3};
	char blah = 'a';
	int b[] = {4,5,6,7};


	cout << "printing a..." << endl;
	PrintArray(a,SIZEA);
	cout << "printing b..." << endl;
	PrintArray(b,SIZEB);
	cout << "now changing values " << endl;

	a[6] = 1234;

	cout << "printing a..." << endl;
	PrintArray(a,SIZEA);
	cout << "printing b..." << endl;
	PrintArray(b,SIZEB);
}
