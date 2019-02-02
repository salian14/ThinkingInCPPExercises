//Display a file a line at a time, waiting for the user to press the “Enter” key after each line

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

const string INFILE = "ex7.cpp";
void Wait(){
    string s;
    cin.get();
}

int main(){
    ifstream inpFile(INFILE);
    string nextString = "";
    while(getline(inpFile, nextString)){
        Wait();
        cout << nextString << endl;
    }
}
