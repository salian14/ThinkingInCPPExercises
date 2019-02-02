#include <iostream>


using namespace std;


int main(){
    int X = 1;
    int Y = 2;
    int Z = 3;

    int A = X + Y - 2/2 + Z;
    int A2 = X + (Y - 2)/(2 + Z);
    cout << "A is: " << A << endl;
    cout << "A2 is: " << A2 << endl;
}
