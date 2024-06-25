#include<iostream>
using namespace std;

bool binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = (start + end)/2;

    while(start<=end){
        if(arr[mid] ==  key){
        return true;
        }

        if(key > arr[mid]){
            //go to right part
            start = mid + 1;
        }
        else{
            //goto left part
            end = mid - 1;
        }
        mid = (start+end)/2;
    }
    return false;
}

int firstOccurance(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = (start+end)/2;
    int ans  = -1;
    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }

        else if(key > arr[mid]){
            start = mid + 1;
        }

        else if(key < arr[mid]){
            end = mid - 1;
        }   
        mid = (start+end)/2;
    }
    return ans;
}

//Lower bound
//-> Given a sorted array of N integers and an integer x, write a program to find the lower bound of x

// the lower bound algo finds the first or smallest index in a sorted array where the value at that index is greater than or equal to the given key i.e x

int lowerBound(int arr[], int size, int x){
    int start = 0;
    int end = size - 1;
    int mid = (start+end)/2;
    int ans = size;
    while(start<=end){
        if(arr[mid] >= x)
        {
            ans = mid;
            end = mid - 1;
        }

        else{
            start = mid + 1;
        }
        mid = (start+end)/2;
    }
    return ans;
}

int main(){
int arr[6] = {2,3,5,6,7,8};
}