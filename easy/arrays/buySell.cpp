#include <iostream>
#include <vector>
using namespace std;
// calculating maxProfit by having buy min and sell max
int buySell(vector<int> arr) {
  int buy = arr[0];
  int maxProfit = INT_MIN;
  for (int i = 1; i < arr.size(); i++) {
    if (buy > arr[i]) {
      buy = arr[i];
    } else {
      int profit = arr[i] - buy;
      if (profit > maxProfit) {
        maxProfit = profit;
      }
    }
  }

  if (maxProfit < 0) {
    maxProfit = 0;
  }

  return maxProfit;
}

int main() {
  vector<int> arr = {1, 4, 2, 8};
  cout << buySell(arr);
  return 0;
}