#include<iostream>
using namespace std;

int uniqueElements(int arr[], int size){
    int i = 0;
    for(int j = i+ 1; j < size; j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    return i;
}

string pairSum(int arr[], int size, int target){
    sort(arr[0], arr[size-1]);
    int i = 0;
    int j = size -1;
    while(i<= j){
        int sum = arr[i] + arr[j];
        if(sum == target) return "Y";
        else if(sum < target) i++;
        else j--;
    }
    return "N";
}

int main(){
    int arr[] = {1,1,2,2,2,3,3};

    int k = uniqueElements(arr,7);
    for(int i = 0; i <= k; i++){
        cout << arr[i] << " ";
    }
}