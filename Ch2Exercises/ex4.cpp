//Create a program that counts the occurrence of a particular word in a file (use the string class’ operator ‘==’ to find the word).

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

const char* INFILE = "ex4.cpp";
const string TOSEARCH = "fstream";
int wordCount = 0;
int main(){
    fstream inFile(INFILE);
    vector<string> words;
    while(inFile.peek() != EOF){
        char next;
        inFile.get(next);
        string newString = "";
        while(!isspace(next)){
            newString.append(1,next);
            inFile.get(next);
        }
        if(newString != "")
          words.push_back(newString);
    }
    for(string s : words){
        if(s == TOSEARCH){
           wordCount++;
        }
    }
    cout << "matches to " << TOSEARCH << " are: " << wordCount << endl;
}
