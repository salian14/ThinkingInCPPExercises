//Modify YourPets2.cpp so that it uses various different data types (char, int, float, double, and their variants). Run the program and create a map of the resulting memory layout. If you have access to more than one kind of machine, operating system, or compiler, try this experiment with as many variations as you can manage.

#include <iostream>

using namespace std;

int dog;
short cat, bird, fish;

void f(int pet){
    cout << "pet id number " << pet << endl;
}

int main(){
    int i;
    float j;
    double k;
    cout << "f(): " << (long)&f << endl;
    cout << "dog: " << (long)&dog << endl;
    cout << "cat: " << (long)&cat << endl;
    cout << "bird: " << (long)&bird << endl;
    cout << "fish: " << (long)&fish << endl;
    cout << "i: " << (long)&i << endl;
    cout << "j: " << (long)&j << endl;
    cout << "k: " << (long)&k << endl;
}
