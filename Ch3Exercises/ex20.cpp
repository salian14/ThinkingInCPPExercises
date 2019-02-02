/*

Apply the technique in ArrayAddresses.cpp to print out
the size of the struct and the addresses of the array
elements in StructArray.cpp .

*/

#include <iostream>

using namespace std;

struct x {
	int x , y, z;
};

int main(){
	x y[4];
	cout << "sizeof(x) is: " << sizeof(x) << endl;
	cout << "(long) &y[1] - (long) &y[0] is: " << (long) &y[1] - (long)&y[0] << endl;
}
