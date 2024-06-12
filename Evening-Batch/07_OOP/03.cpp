//constructor
//A constructor is a special member function that is called automatically when an object is created.
//It will have same name as class name
//It will have no retrun type
#include<iostream>
using namespace std;

class Employee{
    public:
    //Default constructor
    Employee(){
        cout << "Constructor called" << endl;
    }

};

int main(){
    Employee e1;
    Employee e2;

}