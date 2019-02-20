/*
	Create a class that (redundantly) performs data member selection and a
	member function call using the this keyword (which refers to the address of
	the current object).
*/
//i think they mean using this->xyz
//going to lazily mix declarations and implementation because now

//it says class so i'm going to use it but the book hasn't covered classes yet
//also: classes default to private so i have to use that keyword before it's
#include <iostream>
using namespace std;

class xyz{
public:
	int x;
	int getX();
};


int xyz::getX(){
	return this->x;
}

int main(){
	xyz m;
	m.x = 5;
	cout << m.getX() << endl;
}
