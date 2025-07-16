#include <iostream>
#include <vector>
using namespace std;

void example1() {

  int x = 10;

  // ref is a reference to x
  int& ref = x; 

  // printing value using red
  cout << ref << endl;

  // changing the value of ref and printing it again
  ref = 22; 
  cout << ref; 

  // ref is another name for x 
}

int& getMax(int &a, int &b) {

  // Return the larger of the two numbers
  return (a > b) ? a : b; 
  // ternary operator or conditional operator
  // syntax: (condition) ? value_if_true : value_if_false
}

void example2() {
  int x = 10, y = 20;
  int &maxVal = getMax(x, y); // returns the alias of y

  // modify the value of the larger number 
  maxVal = 30; 
  cout << "x = " << x << ", y = " << y;
}

void example3() {

  vector<int> vect{10, 20, 30, 40};

  for (int& x : vect) 
    x+=5; 

  for (int x: vect)
    cout << x << " ";
}

int main() {

  // example1();
  // example2();
  example3();

  cout << endl;
  return 0;
}