#include <iostream>
using namespace std;

/*
  Time Complexity: O(n) to traverse the entire string to find its length
  Space Complexity: O(1) no extra space needed

*/

void userInput(string &i) {

  cout << "Input String: "; 
  // cin >> i; // reads up until the space
  getline(cin, i); // reads up intil /0 or whole line
}

void sizeFunction(const string i) {

  cout << "Size Function Output: " << i.size() << endl;
}

void lengthFunction(const string i) {

  cout << "Length Function Output: " << i.length() << endl;
}

void strlenFunction(string i) {

  const char* str = i.c_str(); // c style string
  cout << "strlenFunction Output: " << strlen(str) << endl;
}

int main() {
  string input; 
  userInput(input);

  sizeFunction(input);
  lengthFunction(input);
  strlenFunction(input);


  return 0;
}