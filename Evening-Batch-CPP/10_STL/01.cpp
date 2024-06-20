// Vectors ->
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> vector1 = {1, 2, 3, 4};
  vector<int>::iterator itr;
  itr = vector1.end() - 1;

  // add
  // vector1.push_back(10);

  // vector1.at(2) = 20;
  // access
  // cout << vector1[10] << endl;
  // cout << vector1.at(10) << endl;

  // delete
  // vector1.pop_back();

  // cout << *itr << endl;

  // for (int item : vector1) {
  //   cout << item << " ";
  // }

  for (itr = vector1.begin(); itr != vector1.end(); itr++) {
    cout << *itr << " ";
  }
}