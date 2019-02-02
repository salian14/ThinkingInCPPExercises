//Create two functions, one that takes a string* and one that takes a string&. Each of these functions should modify the outside string object in its own unique way. In main( ), create and initialize a string object, print it, then pass it to each of the two functions, printing the results

#include <iostream>

using namespace std;
void func1(string* x){
    *x = "IM A CHANGED MAN";
}

void func2(string& x){
    x = "IM A CHANGED WOMAN";
}


int main(){
    string outside = "Im a person";
    //passing a pointer to the string so obv it works
    func1(&outside);
    cout << outside << endl;
    //passing by reference
    func2(outside);
    cout << outside << endl;
}
