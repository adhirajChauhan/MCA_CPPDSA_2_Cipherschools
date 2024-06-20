#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){
    //for -> 0 - size
    //if arr[i] == key -> return
    //loop finish - return false
    for(int i = 0; i < size ; i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[5] = {1,2,3,4,5};

    bool ans = linearSearch(arr,5,4);

    if(ans){
        cout << "Key found " << endl;
    }
    // else
}

//swap alternate elements of array
//pair sum
//triplet sum
//sort 0's and 1's
//find duplicate elements
//find unique elements
//find intersection elements