#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> pascalTri(int n) {
  vector<int> temp;
  vector<vector<int>> ans;
  temp.push_back(1);
  if (n == 1) {
    ans.push_back(temp);
    return ans;
  };

  temp.push_back(1);

  if (n == 2) {
    ans.push_back(temp);
  }

  for (int i = 3; i <= n; i++) {
    vector<int> temp;
    temp.push_back(1);
    // 1
    // 1 1
    // 1 2 1
    for (int j = 0; j < i - 2; j++) {
      temp.push_back(ans[i - 2][j] + ans[i - 2][j + 1]);
    }

    temp.push_back(1);
  }
}
int main() {
  int n = 3;

  return 0;
}