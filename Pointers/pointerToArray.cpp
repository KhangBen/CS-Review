#include <iostream>
using namespace std;

void example1() {

  int arr[5] = { 1, 2, 3, 4, 5 };
  int *ptr = arr;

  // printing first element of an array using array name
  // and dereferencing operator
  cout << "*arr = " << *arr << endl;
  cout << "arr = " << arr << endl;
  cout << "*ptr = " << *ptr << endl;
  cout << "ptr = " << ptr << endl;  

}

void example2() {

  const int size = 5; 
  int arr[size] = { 1, 2, 3, 4, 5 };

  // pointer pointing to the entire array
  int *ptr = arr;

  // loop through the array using pointer
  for (int i = 0; i < size; i++) {
    // accessing elements using pointer arithmetic
    cout << "Value at index " << i << ": " << *(ptr + i) << endl;
  
  }
}

int main() {

  // example1();
  example2();

  cout << endl;
  return 0;
}