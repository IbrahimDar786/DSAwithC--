#include <iostream>
#include <map>
using namespace std;

struct Student {
  int id;
  string name;
  string d_o_b;
  int age;
};

int main() {
  std::map<int, Student> freq;
  // freq[1] = 33;
  // freq[2] = 34;
  // freq[3] = 35;
  // cout << freq.erase(1);
  // std::cout << freq[1];
  Student s1 = {101, "ibrahim", "12-04-2005", 22};
  Student s2 = {102, "sahil", "12-04-2006", 23};
  freq[s1.id] = s1;
  freq[s2.id] = s2;

  // if(freq.find("sahil") != freq.end()){
  //      freq.erase("sahil");
  //      cout << "freq size is "<< freq.size()<<endl;
  //      cout << "data deleted";
  // }

  // cout <<freq["sahil"].age;
  // cout <<freq["sahil"].id;
  // cout <<freq["sahil"].d_o_b;

  map<char, int> marks;
  marks['D'] = 77;
  marks['C'] = 88;
  marks['B'] = 97;
  marks['A'] = 55;

  for (auto i : marks) {
    // i.second += 2;
    if (i.second == 88) {
      i.second = 60;
    }
    i.second == 77 ? i.second = 50 : i.second;
    cout << i.first << " " << i.second << endl;
  }

  return 0;
}