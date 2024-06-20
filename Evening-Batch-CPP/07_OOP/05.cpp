//Inheritance
//It allows us to create a new class(derieved/child) from an existing class(base/parent)
//the child class inherits the features from the parent class and can have additional features of its own.
#include<iostream>
using namespace std;

class Animal{
    public:
    void eat(){
        cout << "Eating " << endl;
    }

    protected:
    void protectedMethod(){
        cout <<"Hey";
    }
};

class Dog : public Animal{
    public:
    void bark(){
        cout << "Barking " << endl;
        // protectedMethod();
    }
    void hello(){
        protectedMethod();
    }
};

int main(){
    // Animal a1;
    // a1.eat();

    Dog d1;
    d1.eat();

    d1.hello();
    
}