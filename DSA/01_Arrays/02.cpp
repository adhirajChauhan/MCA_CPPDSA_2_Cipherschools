#include<iostream>
using namespace std;

void updateArr(int arr[], int size){

    cout << "Entering update func" << endl;
    // arr[1] = 20;
    for(int i = 0; i < 3; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Exiting update func" << endl;

}

int main(){
    int arr[3] = {1,2,3};

    updateArr(arr, 3);
    for(int i = 0; i < 3; i++){
        cout << arr[i] << " ";
    }

}