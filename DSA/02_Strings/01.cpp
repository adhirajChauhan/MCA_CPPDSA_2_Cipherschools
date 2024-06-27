//Strings -> string is a collection of characters
// 2 type -> Strings that are objects of string class(STL)
            //c-strings (c-style strings)

#include<iostream>
#include<string>
using namespace std;

int getLength(char arr[]){
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++){
        count++;
    }
    return count;
}

bool isValidString(char ch){
    if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' ||ch >= '0' && ch <= '9'){
        return true;
    }
    return false;
}

char toLowerCase(char ch){
    if(ch >= 'a' && ch <= 'z') return ch;
    else{
        char temp = ch -'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char arr[], int size){
    int start = 0;
    int end = size -1;

    while(start<=end){
        if(arr[start] != arr[end]) return false;
        else {
            start++;
            end--;
        }
    }
    return true;

}

int main(){

    // char arr[] = "Hello";
    // char arr[] = {'H', 'e', 'l', 'l', 'o'};

    // char arr[100];

    // cout << "Enter your name : ";
    // // cin >> arr;
    // cin.getline(arr,100);

    // cout << arr;

    string str = "Hello World";

    cout << str.length();

}



//You are given a string of words, you need to replace all the spaces with "@9"

//return a maximum occuring character in an input string
//"Hello" -> h - 1, e - 1, l - 2, o -1 => return l