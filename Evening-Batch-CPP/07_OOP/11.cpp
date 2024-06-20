//pure virtual functions
//if a function doesn't have any use use in the base class but the function must be implemented bby all its derived classes
#include<iostream>
using namespace std;

class A{
    public:
    virtual void display() = 0;

};

class B : public A{
    void display(){

    }
};

class C : public A{
    void display(){

    }
};

int main(){
    B b1;
    C c1;

}