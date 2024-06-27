#include<iostream>
using namespace std;

bool isKeyPresent(int arr[][4], int target, int row, int col){
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 4; col++){
            if(arr[row][col] == target) return true;
        }
    }
    return false;
}

void printSum(int arr[][4], int row, int col){
    for(int row = 0; row < 3; row++){
        int sum = 0;
        for(int col = 0; col < 4; col++){
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int rowSum(int arr[][4], int row, int col){
    int max = INT_MIN;
    int rowIndex = -1;

    for(int row = 0; row < 3; row++){
        int sum = 0;
        for(int col = 0; col < 4; col++){
            sum += arr[row][col];
        }
        if(sum > max){
            max = sum;
            rowIndex = row;
        }
    }
    cout << "Maximum sum is : " << max << endl;
    return rowIndex;
}

void wavePrint(int arr[][4], int row, int col){
    for(int i = 0; i < 4; i++){
        if(i%2 ==1){
            for(int j = row - 1; j >= 0; j--){
                cout <<arr[j][i] << " ";
            } 
        }
        else{
            for(int j = 0; j < 3; j++){
                cout <<arr[j][i] << " ";
            } 
        }

    }
}

int main(){
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    // int target;
    // cin >> target;

    // if(isKeyPresent(arr,target,3,4)) cout << "Key is present";
    // else cout << "Key is not present";


    // cout << rowSum(arr,3,4);

    wavePrint(arr,3,4);
}