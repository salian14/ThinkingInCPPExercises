/*
Modify PointerArithmetic.cpp to work with long and long double
*/

//: C03:PointerArithmetic.cpp
#include <iostream>
using namespace std;

#define P(EX) cout << #EX << ": " << EX << endl;

int main() {
    long a[10];
    for(int i = 0; i < 10; i++)
        a[i] = i;
    // Give it index values
    long* ip = a;
    P(*ip);
    P(*++ip);
    P(*(ip + 5));
    long* ip2 = ip + 5;
    P(*ip2);
    P(*(ip2 - 4));
    P(*--ip2);
    P(ip2 - ip);
    // Yields number of elements
}

/*
shows that the pointer moves along with the size of the datatype it represents
sooo  (ip+1) moves the full size of the data type up in this case int
output with int a[]
*ip: 0
*++ip: 1
*(ip + 5): 6
*ip2: 6
*(ip2 - 4): 2
*--ip2: 5
ip2 - ip: 4
*/

/*
output is not affected by data being a long... or a double or else
*ip: 0
*++ip: 1
*(ip + 5): 6
*ip2: 6
*(ip2 - 4): 2
*--ip2: 5
ip2 - ip: 4
*/
