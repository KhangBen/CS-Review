#include <iostream>
#include <cstring>
using namespace std;

int main() {
  string s1 = "Hello";
  string s2 = " World";

  // Concatendation s1 and s2
  // s1 = s1 + s2; 

  // Append method
  // s1.append(s2);

  // strcat() method
  // adds a null terminator at the end but need cstring header and needs to be char
  // strcat(s1, s2);

  // using loop method
  for (auto i : s2) 
    s1 += i;

  cout << s1; 



  return 0;
}

