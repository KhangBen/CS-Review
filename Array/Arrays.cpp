#include <iostream>
using namespace std;

void printArray(const int arr[], int size)
{
  cout << "["; 
  for(int i = 0; i < size; i++)
  {
    cout << arr[i];
    if(i != (size - 1))
    cout << ", ";
  }
  cout << "]" << endl;;
}

void array_traversal_reverse()
{
  int arrOne[] = {54, 43, 2, 1, 5};
  int sizeOne = sizeof(arrOne)/sizeof(arrOne[0]);

  cout << "Input: arr[] = "; 
  printArray(arrOne, sizeOne);

  cout << endl << "Output: "; 
  for(int i = sizeOne - 1; i >= 0; i--)
  {
    cout << arrOne[i] << " "; 
  }

  cout << endl;
  int arrTwo[] = {324, 5, 2, 2};
  int sizeTwo = sizeof(arrTwo)/sizeof(arrTwo[0]);

  cout << "Input: arr[] = "; 
  printArray(arrTwo, sizeTwo);

  cout << endl << "Output: "; 
  for(int i = sizeTwo - 1; i >= 0; i--)
  {
    cout << arrTwo[i] << " "; 
  }

  cout << endl; 
}

void zeroCount()
{
  // int arr[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0}; 
  int arr[] = {0, 0, 0, 0, 0}; 
  int counter = 0; 
  int size = sizeof(arr)/sizeof(arr[0]);
  for(int i = 0; i < size; i++)
  {
    if(arr[i] == 0)
      counter++; 
  }

  cout << "There are " << counter << " 0's in the array." << endl;
}

void arraySearching() 
{
  int arr[] = {1, 2, 3, 4};
  int size = sizeof(arr)/sizeof(arr[0]);
  int x = 3; 
  int location = -1; 

  for(int i = 0; i < size; i++)
  {
    if(arr[i] == x)
    {
      location = i;
      break;
    }
  }

  cout << "Input: ";
  printArray(arr, size);
  cout << "Output: " << location; 



}

int main()
{
  // array_traversal_reverse(); 
  // zeroCount();
  arraySearching();

  cout << endl;
  return 0;
}

