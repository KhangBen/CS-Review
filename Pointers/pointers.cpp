#include <iostream>
using namespace std;

void example1() {
  int val = 22; 

  // store the address of var variable
  int* ptr = &val; 

  // dereferencing 
  cout << *ptr;

}

void example2() {

  int a = 10; 
  int b = 99;

  // ptr points to address of a 
  int* ptr = &a; 

  cout << *ptr << endl; 

  // changing the pointer to b
  ptr = &b; 

  cout << *ptr << endl;
}

void example3() {

  int *ptr1; 
  int *ptr2;

  // finding size using sizeof()
  cout << sizeof(ptr1) << endl;
  cout << sizeof(ptr2);

  // result is 8 which is 64-bit system 
}

void example4() {
  
  int arr[5] = {10, 20, 30, 40, 50};

  // Creating a pointer to the first element
  int *ptr1 = &arr[0];

  // Creating another pointer to array
  int *ptr2 = arr; // also mean &arr[0]

  cout << *ptr1 << endl;
  cout << *ptr2; 

}

int main() {

  example4();


  cout << endl;
  return 0;
}