//Create three vector<float> objects and fill the first two as in the previous exercise. Write a for loop that adds each corresponding element in the first two vectors and puts the result in the corresponding element of the third vector. Display all three vectors. 10

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
    vector<float> one;
    vector<float> two;
    vector<float> result;

    for(int i = 0; i < 25; i++){
        one.push_back(getFloat());
        two.push_back(getFloat());
        result.push_back(one[i] + two[i]);
    }

    for(int i = 0; i < one.size(); i++){
        cout << one[i] << " + " << two[i] << " = " << result[i] << endl;
    }
}
