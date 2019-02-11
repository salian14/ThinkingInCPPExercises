/*
Create a const array of double and a volatile array of double.
Index through each array and use const_cast to cast each element to non-const
and non-volatile, respectively, and assign a value to each element.
*/

#include <iostream>

using namespace std;
const int SIZE = 5;

int main(){
    //not sure if they mean the pointer is const or the elements themselves are const
    const double x[SIZE] = {1.0,1.0,1.0,1.0,1.0};
    volatile double y[SIZE];
    double * z = const_cast<double*>(x);
    for(int i = 0; i < SIZE;i++){
        cout << *(z) << endl;
        z+=1;
    }

}
