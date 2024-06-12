#include<iostream>
using namespace std;

class Calculation{
    public:
    int length;
    int breadth;
    int height;

    int calculateArea(){
        return length*breadth;
    }

    int calculateVolume(){
        return length * breadth * height;
    }
};

int main(){

    Calculation shape1;
    shape1.length = 5;
    shape1.breadth = 6;
    shape1.height = 7;

    cout << shape1.calculateArea() << endl;
    cout << shape1.calculateVolume();


}