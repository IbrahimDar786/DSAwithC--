
/*
#include <iostream>
#include <map>
#include <vector>
using namespace std;

// SOLUTION
vector<pair<int, int>> twoSum(vector<int> arr, int target) {
  vector<pair<int, int>> ans;
  map<int, int> freq;

  for (int i = 0; i < arr.size(); i++) {
    freq[arr[i]]++;
  }

  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] == target - arr[i]) {
      if (freq[arr[i]] > 1) {
        ans.push_back({arr[i], arr[i]});
        freq[arr[i]] -= 2;
      }

    } else {
      if (freq[arr[i]] >= 1 && freq[target - arr[i]] >= 1) {
        ans.push_back({arr[i], target - arr[i]});
        freq[arr[i]] -= 1;
        freq[target - arr[i]] -= 1;
      }
    }
  }

  if (ans.size() == 0) {
    ans.push_back({-1, -1});
  }
  return ans;
}

// -- MAIN METHOD
int main() {
  vector<int> arr = {1, 11, 11, 11};
  int target = 22;

  for (auto pair : twoSum(arr, target)) {
    cout << pair.first << " " << pair.second << endl;
  }
  return 0;
}

*/

//   ------------ ALTERNATIVE  -------
/*
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
vector<pair<int, int>> twoSum(vector<int> arr, int target) {
  vector<pair<int, int>> ans;

  sort(arr.begin(), arr.end());

  cout << endl;
  int left = 0;
  int right = arr.size() - 1;
  int sum = 0;
  while (left < right) {
    sum = arr[left] + arr[right];
    if (sum == target) {
      ans.push_back({arr[left], arr[right]});
      left++;
      right--;
    } else if (sum > target) {
      right--;
    } else {
      left++;
    }
  }

  if (ans.empty()) {
    ans.push_back({-1, -1});
  }

  return ans;
}
int main() {
  vector<int> arr = {1, 11, 11, 11};
  int target = 22;

  for (auto pair : twoSum(arr, target)) {
    cout << pair.first << " " << pair.second << endl;
  }

  return 0;
}
//
*/
