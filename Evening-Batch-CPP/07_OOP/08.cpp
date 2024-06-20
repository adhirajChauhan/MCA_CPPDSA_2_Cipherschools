#include <iostream>
using namespace std;

class Base{
    public:
    void print1(){
        cout << "From Base " << endl;
    }
};

class Derieved : public Base{
    public:
    void print1(){
        cout << "From Derived" << endl;
    }
};

int main(){
    // Derieved d1;
    // d1.Base::print();

    // Derieved d1;

    // Base *ptr = &d1;

    // ptr->print();

    Base b1;
    b1.print1();
}   