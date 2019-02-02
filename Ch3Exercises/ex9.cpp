// Compile and run Static.cpp. Remove the static keyword from the code, compile and run it again, and explain what happens.

//: C03:Static.cpp
// Using a static variable in a function
#include <iostream>

using namespace std;

void func() {
    //without static i is a local variable and 'resets ' with every call to the function
    static int i = 0;
    cout << "i = " << ++i << endl;
}

int main() {
    for(int x = 0; x < 10; x++)
        func();
    } ///:~
