//Create a vector<float> and put 25 numbers into it as in the previous exercises. Now square each number and put the result back into the same location in the vector. Display the vector before and after the multiplication.
#include <iostream>
#include <vector>

using namespace std;

float getFloat(){
    // decided to create a float generator that will generate between  0 and 1 in increments of .01
    // because seriously? xD
    int x = rand() % 100;
    float f = x / 100.0;
    return f;
}

int main(){
    vector<float> vec;
    for(int i = 0; i < 25; i++){
        vec.push_back(getFloat());
        cout << vec[i] << endl;
    }

    for(int i = 0; i < vec.size(); i++){
        vec[i] = vec[i] * vec[i];
    }
    cout << "after" << endl;
    for(float f : vec){
        cout << f << endl;
    }
}
