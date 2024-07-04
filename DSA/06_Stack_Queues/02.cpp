#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;

    st.push(10);
    // cout << st.size() << endl;
    st.pop();
    cout << st.top();
    // cout << st.size();


}