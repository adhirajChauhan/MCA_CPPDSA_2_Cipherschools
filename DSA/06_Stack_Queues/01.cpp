//create a stack
#include<iostream>
using namespace std;

class MyStack{
    public:
    int *arr;
    int top;
    int size;

    MyStack(){
        arr = new int[size];
        top = -1;
    }

    void push(int val){

        if(top == size - 1){
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        arr[top] = val;
    }

    void pop(){
        if(top==-1){
            cout << "Stack underflow" << endl;
            return;
        }
        top--;
    }
    int peek(){
        if(top >= 0){
            return arr[top];
        } 
        else{
            cout << "Stack is empty"<< endl;
            return -1;
        }
    }
};

int main(){
    MyStack st;
    st.size = 100;
    st.push(10);
    st.push(20);

    cout << st.peek() <<endl;

    st.pop();
    cout << st.peek()<< endl;
}