#include<iostream>
using namespace std;

/*Heap
    Heap is complete Binary Tree that comes with a heap order property

    CBT -> every level is completely filled  except the last level, in which the nodes are added from left 
*/

class heap{
    public:
    int arr[100];
    int size;

    heap(){
        arr[0] = -1;
        size = 0;
    }

    void insert(int val){
        size = size + 1;
        int index = size;
        arr[index] = val;

        while(index > 1){
            int parent = index/2;

            if(arr[parent] < arr[index]){
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else return;
        }
    }

    void print(){
        for(int i = 1; i <= size;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void deleteFromHeap(){
    if(size == 0) return;

    //replace first node with last
    arr[1] = arr[size];
    //remove last element
    size--;

    //take root to its correct position
    int i = 1;
    while(i < size){
        int leftIndex = 2 * i;
        int rightIndex = 2 * i + 1;
        int largest = i;

        if(leftIndex < size && arr[i] < arr[leftIndex]){
            // swap(arr[i], arr[leftIndex]);
            // i = leftIndex;
            largest = leftIndex;
        }

        if(rightIndex < size && arr[i] < arr[rightIndex]){
            // swap(arr[i], arr[rightIndex]);
            // i = rightIndex;
            largest = rightIndex;
        }

        if(largest != i){
            swap(arr[i], arr[largest]);
            i = largest;
        }
        else return;
    }

}
};


void heapify(int arr[], int n, int i){
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if(left <= n && arr[largest] < arr[left]){
        largest = left;
    }
    if(right <= n && arr[largest] < arr[right]){
        largest = right;
    }

    if(largest != i){
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n){
    int size = n;

    while(size > 1){
        swap(arr[size], arr[1]);
        size--;
        heapify(arr,size, 1);
    }
}


int main(){
    heap h;
    // h.insert(10);
    // h.insert(8);
    // h.insert(7);
    // h.insert(4);
    // h.insert(5);
    // h.insert(9);
    // h.print();

    // h.deleteFromHeap();
    // h.print();

    int arr[8] = {-1,1,5,6,8,9,7,3};
    int n = 7;

    for(int i = n/2; i> 0; i--){
        heapify(arr, n ,i);
    }

    // for(int i = 1; i <= n; i++){
    //     cout << arr[i] << " "; 
    // } cout << endl;

    heapSort(arr, n);

    for(int i = 1; i <= n; i++){
        cout << arr[i] << " "; 
    } cout << endl;
}