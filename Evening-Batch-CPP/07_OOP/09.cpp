//Poly - many morph - forms ->polymorphism
#include <iostream>
using namespace std;

class Count{
    private:
    int value;

    public:
    Count(){
        value = 5;
    }
    void operator ++(){
        value += 10;
    }

    void display(){
        cout << "Count : " << value << endl;
    }

};

int main(){
    Count c1;

    c1.display();
    ++c1;
    c1.display();
}