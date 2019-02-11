/*
Define an array of int.
Take the starting address of that array and use static_cast
to convert it into an void*.
Write a function that takes a void*,
a number (indicating a number of bytes),
and a value (indicating the value to which each byte should be set)
as arguments.
 The function should set each byte in the specified range to the
 specified value.
 Try out the function on your array of int.
 */

#include <iostream>
using namespace std;
const int SIZE = 10;

void func(void* ptr, int size, int val){
    for(int i = 0; i < size; i++)
        static_cast<char*>(ptr)[i] = val;

}

int main(){
    int x[SIZE];
    for(int i = 0; i < SIZE; i++)
        x[i] = i;
    void * ptr = static_cast<void*>(x);
    func(ptr,SIZE * sizeof(int),10);
    for(int i = 0; i < SIZE; i++){
        cout << x[i] << endl;
    }
 }
