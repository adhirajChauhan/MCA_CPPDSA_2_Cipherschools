#include<iostream>
using namespace std;

bool isSorter(int arr[], int size){
    //base 
    if(size == 0 || size == 1) return true;

    if(arr[0] > arr[1]){
        return false;
    }
    else{
       return isSorter(arr + 1, size -1);
    }
}

int getSUm(int arr[], int size){
    if(size == 0) return 0;
    if(size == 1) return arr[0];

    // return arr[0] + getSUm(arr + 1, size -1);
    int remainingPart = getSUm(arr+1, size-1);
    int sum = arr[0] + remainingPart;
    return sum;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    isSorter(arr,5);
}