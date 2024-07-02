/*
    Recursion happens when a function calls iteself directly or indirectly

    eg func(int n){
        func(n);
    }
    if the solution of a problem depends on a smaller problem of same type, then we will use recursion

*/

#include<iostream>
using namespace std;

void goHome(int src, int dest){
    
    if(src == dest) return;

    goHome(src++, dest);
}
//tail recursion
void print(int n){
    //base case
    if(n == 0) return;

    //Processing
    cout << n << endl;

    //recursive relation
    print(n-1);


}

int factorial(int n){
    //base case
    if(n ==0 || n ==1) return 1;

    return  n * factorial(n-1);

}

int power(int n){
    if(n ==0) return 1;

    return 2 * power(n-1);
}

int fib(int n){
    //base
    if(n == 0) return 0;
    if(n == 1) return 1;

    return fib(n-1) + fib(n-2);
}

int main(){
    fib(7);
}