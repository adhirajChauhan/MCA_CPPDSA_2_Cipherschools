#include<iostream>
using namespace std;

class Base{
    public:
    int x;
    protected:
    int y;
    private:
    int z;
};

class C1 : public Base{
    //x is public
    //y is protected
    //z is not acessable
};
class C2 : protected Base{
    //x is protected
    //y is protected
    //z is not accessable
};
class C3 : private Base{
    //x is private
    //y is private
    // z in not accessable
};

int main(){

}