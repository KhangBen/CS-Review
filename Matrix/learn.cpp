#include <iostream>
#include <vector>
using namespace std;

bool searchInMatrix(vector<vector<int>>& arr, int x) {
  for (int i = 0; i < arr.size(); i++) {
    for(int j = 0; j < arr[0].size(); j++) {
      if (arr[i][j] == x )
        return true; 
    }
  }

  return false; 
}

bool comp(int a, int b) {
  return a > b; 
}

int main() {

  // Initializing a 2-D vector with values
  vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8} , {9, 10, 11, 12}};

  // Accessing elements in a 2-D vector
  cout << "Third element in Second Row " << matrix[1][2] << endl;
  cout << "First element in First Row " << matrix[0][0] << endl << endl;

  // traversal of matrix
  for (int i = 0; i < matrix.size(); i++) {
    for (int j = 0; j < matrix[0].size(); j++) {
      cout << matrix[i][j] << " "; 

    }
    cout << endl;
  }

  // searching in Matrix 
  cout << endl << boolalpha;
  cout << "Finding 7 in Matrix: " << searchInMatrix(matrix, 7) << endl;
  cout << "Finding 0 in Matrix: " << searchInMatrix(matrix, 0) << endl << endl;


  // row wise sorting vector
  vector<int> v = {5, 3, 2, 1, 4};

  // Sort vector (by default in ascending order)
  sort(v.begin(), v.end());

  for(int i : v) 
    cout << i << " ";

  cout << endl;


  // row wise sorting array descending order
  int arr[5] = {5, 3, 2, 1, 4};
  int n = sizeof(arr)/sizeof(arr[0]);
  sort(arr, arr + n, comp); 

  for (int i : v)   
    cout << i << " ";

  cout << endl; 


  return 0;
}