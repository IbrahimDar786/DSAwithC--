

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
// problem 12 - count palindrome string length
/*
bool isPalindrome(string str) {
  bool checkPalindrome = true;
  for (int i = 0; i < str.length() / 2; i++) {
    if (str[i] != str[str.length() - 1 - i]) {
      return checkPalindrome = false;
    }
  }

  return checkPalindrome;
}
int countPalChar(string str) {
  if (isPalindrome(str)) return str.length();

  return -1;
}
*/

/*
bool isPalindrome(string str) {
  bool checkPalindrome = true;
  for (int i = 0; i < str.length() / 2; i++) {
    if (str[i] != str[str.length() - 1 - i]) {
      return checkPalindrome = false;
    }
  }
  return checkPalindrome;
}
// problem 12: find largetest palindrome word
string largestPalindrome(string str) {
  stringstream ss(str);
  string word;
  int maxPal = INT_MIN;
  vector<string> arr;
  while (ss >> word) {
    arr.push_back(word);
  }
 int index = -1;
  for (int i = 0; i < arr.size(); i++) {
    if (isPalindrome(arr[i])) {
      int max = arr[i].length();
      if (max > maxPal) {
        maxPal = max;
       index = i;
      }
    }
  }
  return arr[index];
}

*/

// problem 15: print all palindrome substrings
/*
bool isPalindrome(string str) {
  bool checkPalindrome = true;
  for (int i = 0; i < str.length() / 2; i++) {
    if (str[i] != str[str.length() - 1 - i]) {
      return checkPalindrome = false;
    }
  }

  return checkPalindrome;
}
void palindromeStrings(string str) {

  if (isPalindrome(str)) {
    for (int start = 0; start < str.length(); start++) {
      for (int end = 0; end < str.length(); end++) {
        for (int i = start; i <= end; i++) {
          cout << str[i] << " ";
        }
        cout << endl;
      }
    }
  }
}
  */

// problem 16: count all palindrome substrings
bool isPalindrome(string str) {
  bool checkPalindrome = true;
  for (int i = 0; i < str.length() / 2; i++) {
    if (str[i] != str[str.length() - 1 - i]) {
      return checkPalindrome = false;
    }
  }

  return checkPalindrome;
}

int countPalSubstrings(string str) {
  int count = 0;

  for (int start = 0; start < str.length(); start++) {
    for (int end = 0; end < str.length(); end++) {
      for (int i = start; i <= end; i++) {
        string temp(1,str[i]);  // creates a string with one occurence of str[i]
        cout << temp<<endl;
        if (isPalindrome(temp)) {
          count++;
        }
      }
    }
  }

  return count;
}
int main() {
  /*
  string str = "madam";
  cout << countPalChar(str);
  */

  /*
    string str = "madam racecar hello i aasomosaa a student";
  cout << largestPalindrome(str);
  */

  /*
  string str = "aba";
  // 3(3 + 1) /2  = 6  substrings i.e n(n+1)/2
  i think formaulla is wrong, it should be 6
  palindromeStrings(str);
  */

  string str = "aba";
  cout << countPalSubstrings(str);
  return 0;
}