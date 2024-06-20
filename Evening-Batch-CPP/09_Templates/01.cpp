#include<iostream>
using namespace std;

template <class T>
class Number{
    private:
    T num;

    public:
    Number(T number){
        num = number;
    }
    T getNum(){
        return num;
    }
};

template <typename T>
T add(T a, T b){
    return a + b;
}

int main(){
    Number<int> n1(5);
    Number<float> n2(5.5);
}