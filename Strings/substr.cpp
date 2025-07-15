#include <iostream>
using namespace std;

void example1() {

  string s = "Geeks";

  // Extract Two Characters of s1 (starting from index 3)
  // syntax of substr(pos, len)
  string sub = s.substr(3, 2);

  cout << sub << endl; 

}

void example2() {

  string s = "dog:cat";

  // gind position of ":" using find()
  int pos = s.find(":");

  // Extract substring after pos
  string afterSub = s.substr(pos + 1);
  cout << "After : " << afterSub << endl;

  string beforeSub = s.substr(0, pos);
  cout << "Before : " << beforeSub << endl;
  
}

int main() {

  // example1();
  example2();

  return 0;
}