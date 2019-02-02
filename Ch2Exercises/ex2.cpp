//Using Stream2.cpp and Numconv.cpp as guidelines, create a program that asks //for the radius of a circle and prints the area of that circle. You can just //use the ‘*’ operator to square the radius. Do not try to print out the // value as octal or hex (these only work with integral types)
#include <iostream>
#include <stdlib.h>
using namespace std;
const char* ASKRADIUS = "Give Me the radius of a circle I'll calculate area";
const char* RESULTAREA = "The radius of the given circle is: ";

string Query(string s){
    cout << s << endl;
    string ret;
    cin >> ret;
    return ret;
}

int main(){
    string x = Query(ASKRADIUS);
    int rad = atoi(x.c_str());
    double area = rad * rad * 3.14;
    cout << RESULTAREA << to_string(area) << endl;
}
