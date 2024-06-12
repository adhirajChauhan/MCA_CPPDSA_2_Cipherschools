#include <iostream>
using namespace std;

void test(int n){
    n++;
    cout << "From Test : " << n << endl;
}

int main(){
    int n;
    cin >> n;

    test(n);
    cout << "From main : " << n << endl;
}
