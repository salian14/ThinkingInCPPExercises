//Change Fillvector.cpp so that it prints the lines (backwards) from last to first.
//: C02:Fillvector.cpp // Copy an entire file into a vector of string
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
//116 Thinking in C++ www.BruceEckel.com
int main(){
    vector<string> v;
    ifstream in("ex5.cpp");
    string line;
    while(getline(in, line))
        v.push_back(line);

    // Add the line to the end
    // Add line numbers:
    
    //had to change the for loop and the indexing down here.
    for(int i = v.size() - 1; i >= 0; i--)
        cout << (i+1) << ": " << v[i] << endl;
} ///:~
