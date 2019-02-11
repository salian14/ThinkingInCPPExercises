/*
Create a function that takes a pointer to an array of double and
a value indicating the size of that array. The function should print each
element in the array. Now create an array of double and initialize each
element to zero, then use your function to print the array. Next use
reinterpret_cast to cast the starting address of your array to an unsigned
char*, and set each byte of the array to 1
(hint: you’ll need to use sizeof to calculate the number of bytes in a double).
Now use your array-printing function to print the results. Why do you think
each element was not set to the value 1.0?
... because it set the last bit of every byte to 1 possibly. 
*/

#include <iostream>

using namespace std;

void func(double* ptr, int size){
    for(int i = 0; i < size; i++)
        cout << ptr[i] << endl;
}

    const int SIZE = 10;
int main(){
    double x[10];
    for(int i = 0; i < SIZE; i++)
        x[i] = 0;
    func(x,SIZE);
    unsigned char* y = reinterpret_cast<unsigned char *>(x);
    int sizechar = SIZE *sizeof(double);
    for(int i = 0; i < sizechar; i++){
        y[i] = 1;
    }
    func(x,SIZE);
}
