#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
vector<int> mergeArray(vector<int> arr1, vector<int> arr2, int m, int n) {
  for (int i = 0; i < n; i++) {
    arr1.push_back(arr2[i]);
  }

  sort(arr1.begin(), arr1.end());

  return arr1;
}
int main() {
  vector<int> arr1(6, 0);
  arr1 = {3, 5, 6};
  vector<int> arr2 = {7, 8, 9};
  int m = arr1.size(), n = arr2.size();

  // output
  for (auto x : mergeArray(arr1, arr2, m, n)) {
    cout << x << " ";
  }
  return 0;
}