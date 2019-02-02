//Create a vector<float> and put 25 floating-point numbers into it using a for loop. Display the vector.

#include <iostream>
#include <vector>

using namespace std;

float getFloat(){
    //lazy float parsing here because seriously? 25? jesus we couldn't have done this with less?
    float f;
    cin >> f;
    return f;

}

int main(){
    vector<float> floats;

    for(int i = 0; i < 25; i++){
        floats.push_back(getFloat());
    }

    for(float f : floats){
        cout << f << endl;
    }

}
