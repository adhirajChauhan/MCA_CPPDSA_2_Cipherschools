#include<iostream>
using namespace std;

class Base{
    public:
    virtual void print(){
        cout << "From base" << endl;
    }
};

class Derived : public Base{
    public:
    void print() override{
        cout << "From Derived" << endl;
    }

};

int main(){
    Derived d1;
    Base *ptr = &d1;

    ptr->print();
}