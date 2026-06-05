

#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
// problem 1: check palindrome
bool palindrome(string str) {
  int left = 0;
  int right = str.length() - 1;
  bool isPalindrome;
  while (left < right) {
    isPalindrome = true;
    if (str[left] != str[right]) {
      isPalindrome = false;
      break;
    }

    left++;
    right--;
  }

  return isPalindrome;
}

// problem 2: sorting 2nd array
vector<int> sortingSecArr(vector<int> arr1, vector<int> arr2) {
  int ptr = 0;
  for (int i = 0; i < arr2.size(); i++) {
    for (int j = 0; j < arr1.size(); j++) {
      if (arr1[j] == arr2[i]) {
        int temp = arr1[j];
        arr1[j] = arr1[ptr];
        arr1[ptr] = temp;
        ptr++;
      }
    }
  }

  return arr1;
}

// problem 2: move negative to left and positive to right
vector<int> moveNegativeToLeft(vector<int> arr) {
  int left = 0;
  int right = arr.size() - 1;

  while (left < right) {
    if (arr[left] < 0) {
      left++;
    }

    if (arr[right] > 0) {
      right--;
    }
    if (arr[left] > 0 && arr[right] < 0) {
      int temp = arr[left];
      arr[left] = arr[right];
      arr[right] = temp;
      left++;
      right--;
    }
  }

  return arr;
}

// problem 3: find missing numbers in array
void missingNum(vector<int> arr) {
  int max = INT_MIN;
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  cout << "max : " << max << endl;
  bool isMissing = true;
  for (int i = 1; i < max; i++) {
    isMissing = true;
    for (int j = 0; j < arr.size(); j++) {
      if (arr[j] == i) {
        isMissing = false;
      }
    }
    if (isMissing) {
      cout << i << " ";
    }
  }
}

// problem 4: find the sub arrays
void findSubArr(vector<int> arr) {
  for (int start = 0; start < arr.size(); start++) {
    for (int end = 0; end < arr.size(); end++) {
      for (int i = start; i <= end; i++) {
        cout << arr[i] << " ";
      }
      cout << endl;
    }
  }
}

// problem 5: swap numbers Without addition and subtraction
void swap(int &num1, int &num2) {
  int temp = num1;
  num1 = num2;
  num2 = temp;
}

int main() {
  /*
    string str = "madam";
  cout << "man starts" << endl;
  if (palindrome(str)) {
    cout << str << " is palindrome";
  } else {
    cout << str << " is not a palindrome";
  }
  */

  /*
  vector<int> arr1 = {22, 1, 3, 4, 5, 11, 2};
  vector<int> arr2 = {1, 2, 3, 5};
  sort(arr1.begin(), arr1.end());
  for (auto i : sortingSecArr(arr1, arr2)) {
    cout << i << " ";
  }
  */

  /*
  vector<int> arr = {2,3,-1,0,-2,-22,33,5};
  arr = moveNegativeToLeft(arr);
  for(auto i: arr){
       cout << i << " ";
  }
  */

  /*
   vector<int> arr = {11, 2, 5, 6};
 missingNum(arr);
  */

  /*
  vector<int> arr = {1,2,3};
  findSubArr(arr);
  */

  int num1 = 22, num2 = 44;
   swap(num1, num2);
   cout << num1 << " "<< num2;
num1 = 55, num2 = 33;
swap(num1, num2);
cout << "\n"<< num1 << " "<< num2<< "\n";
  return 0;
}