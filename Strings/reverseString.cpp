#include <iostream>
using namespace std;

void reverseFunction(string& s) {

  /*
    Time Complexity: O(n), where n is the length of the string
    Space Complexity: O(1), no added space
  */

  // Using reverse() function 
  reverse(s.begin(), s.end());

}

void revStr(string& s, int l, int r) {

  /*
    Time Complexity: O(n), where n is the length of string
    Space Complexity: O(n), for recursive stack 
  */

  // Base case: when left and right pointer meet
  if (l >= r) 
    return; 

  // Swap characters at left and right
  swap(s[l], s[r]);

  // Recursive call to reverse remaning substring
  revStr(s, l + 1, r - 1);

}

int main() {
  string s = "Hello World";
  
  // reverseFunction(s);
  revStr(s, 0, s.length() - 1);

  cout << s; 

  return 0;
}