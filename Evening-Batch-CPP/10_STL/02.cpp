// Set Properties
// 1. -> unique elements -> no two elements can be equal
// 2. -> immutable ->  we can add or remove elements from a set, but we can not
// change the values of existing element
// 3. -> sorted order -> by default the order will be ascending

#include <iostream>
#include <set>
using namespace std;

int main() {

  // for ascending
  set<int> set1 = {5, 3, 8, 1, 9};
  // for descending
  // set<int, greater<int>> set1 = {5,3,8,1,9};

  // set1.insert(20);
	// set1.erase(8);
  for (int i : set1) {
    cout << i << " ";
  }
}
