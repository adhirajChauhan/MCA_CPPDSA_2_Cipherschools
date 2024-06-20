#include<iostream>
using namespace std;

void printArr(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int getMax(int arr[], int size){
    int max = INT_MIN;

    //for -> 0 - size - 1
    //if ith element of array is greater than max element
        //update max with arr[i]

    //return max
}

int main(){

    int arr[5] = {1,2,3,4,5};

    // int arr1[5] = {1,2,3,4,5};

    // arr[2] = 13;
    // cout << arr[10];
    //user input in array
    // cout << "Enter 5 numbers : " ;
    // for(int i = 0; i < 5; i++){
    //     cin >> arr[i];
    // }

    //printing elements
    printArr(arr, 5);

    // for(int item : arr){
    //     cout << item << " ";
    // }

}