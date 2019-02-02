//Create a program that opens a file and counts the whitespace-separated words in that file.
//assumes that whitespaces will be one less than
//lazily acts weird it would be better to characterize all whitespace marks and look for the lack of one of those instead of checking the positive that something is alphanumeric
//thus no weird cases of a\a counting as two words. 
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(){
    fstream inputFile("ex3.cpp");
    int wordCount = 0;
    char next;
    while(inputFile.peek() != EOF){

        inputFile.get(next);
        if(isalpha(next)){
            wordCount++;
            while(isalpha(inputFile.peek()) ){
                inputFile.get(next);
            }
        }
    }
    cout << "word count is: " << to_string(wordCount) << endl;
}
