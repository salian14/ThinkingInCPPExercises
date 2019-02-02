//Change Fillvector.cpp so that it concatenates all the elements in the vector into a single string before printing it out, but don’t try to add line numbering. 7

//: C02:Fillvector.cpp
// Copy an entire file into a vector of string
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

//116 Thinking in C++ www.BruceEckel.com

int main() {
    vector<string> v;
    ifstream in("ex6.cpp");
    string line;
    while(getline(in, line))
        v.push_back(line);

    // Add the line to the end
    // Add line numbers:
    string out = "";
    for(string s : v){
        out.append(s);
        out.append(1,'\n');
    }

    cout << out << endl;

}
