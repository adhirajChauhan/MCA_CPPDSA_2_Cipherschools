#include<iostream>
using namespace std;

void selectionSort(int arr[], int size){
    for(int i = 0; i < size -1; i++){
        int minIdx = i;
        for(int j = i + i; j < size; j++){
            if(arr[j] < arr[minIdx]){
                minIdx = j;
            }
        }
        swap(arr[minIdx], arr[i]);
    }
}

void bubbleSort(int arr[], int size){
    for(int i = size -1 ; i > 0; i--){
        int hasSwapped = 0;
        for(int j = 0; j < i -1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
                hasSwapped = 1;
            }
        }
            if(hasSwapped == 0) break;

    }
}

void insertionSort(int arr[], int size){
    for(int i = 0; i < size; i++){
        int j = i;
        while(j > 0 && arr[j-1] > arr[j]){
            swap(arr[j-1], arr[j]);
            j--;
        }
    }
}

int main(){

}