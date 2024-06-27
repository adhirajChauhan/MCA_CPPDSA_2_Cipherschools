#include<iostream>
using namespace std;

int main(){

    //creating 2d array
    int arr[3][4];

    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    //taking user input row wise
    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 4; j++){
    //         cin >> arr[i][j];
    //     }
    // }

    //taking user input column wise

    for(int j = 0; j < 3; j++){
        for(int i = 0; i < 4; i++){
            cin >> arr[i][j];
        }
    }

    //print
    for(int i =0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        } cout << endl;
    }
}