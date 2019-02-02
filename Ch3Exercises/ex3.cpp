//Write a program that uses a while loop to read words from standard input (cin) into a string. This is an “infinite” while loop, which you break out of (and exit the program) using a break statement. For each word that is read, evaluate it by first using a sequence of if statements to “map” an integral value to the word, and then use a switch statement that uses that integral value as its selector (this sequence of events is not meant to be good programming style; it’s just supposed to give you exercise with control flow). Inside each case, print something meaningful. You must decide what the “interesting” words are and what the meaning is. You must also decide what word will signal the end of the program. Test the program by redirecting a file into the program’s standard input (if you want to save typing, this file can be your program’s source file).

#include <iostream>

using namespace std;
const string DUDE = "DUDE!";
const string EPIC = "EPICMAN";
const string OOF  = "OOF!";


string getInput(){
    string inp;
    cin >> inp;
    return inp;
}


int main(){
    while(true){
        string inp = getInput();
        int x = 0;
        if(inp == DUDE){
            x = 1;
        } else if(inp == EPIC){
            x = 2;
        } else if(inp == OOF){
            x = 3;
        }

        switch(x){
            case 0:
                //scrubbin it up since '92
                goto IMDONEHERE;
            case 1:
                cout << "BUT DUDE" << endl;
                break;
            case 2:
                cout << "THATS SO EPIC" << endl;
                break;
            case 3:
                cout << "OOF IM IN PAIN" << endl;
                break;
        }
    }
    IMDONEHERE:;

}
