#include<iostream>
using namespace std;

int main(){

    int var = 5;
    int *ptr = &var;

    int *ptr3 = NULL;

    int **ptr2 = &ptr;

    cout << var << endl; //value of var
    cout << &var << endl; //adress of vr
    cout << ptr << endl; //Address of var
    cout << *ptr << endl; //value of var where ptr is pointing at
    cout << &ptr << endl;
    cout << ptr2 << endl;

    cout << ptr3 << endl;
}