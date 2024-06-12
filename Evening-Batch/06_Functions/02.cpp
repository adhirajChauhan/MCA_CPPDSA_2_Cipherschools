#include<iostream>
using namespace std;

int fact(int num){
    int fact = 1;
    for(int i = 1; i <= num; i++){
        fact = fact * i;
    }
    return fact;
}

int nCr (int n, int r){
    int num = fact(n);
    int dem = fact(r) * fact(n-r);
    return num/dem;
}

int main(){
    nCr(5,3);
}