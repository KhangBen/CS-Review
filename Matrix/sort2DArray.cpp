#include <iostream>
#include <vector>
using namespace std; 

void sortRows(vector<vector<int>> &mat) {
  // going into each row
  for (auto &row : mat)
    sort(row.begin(), row.end()); // sorting each row from lowest to high
}


int main() {

  vector<vector<int>> v = {
      {77, 11, 22, 3}, 
      {11, 89, 1, 12},
      {32, 11, 56, 7},
      {11, 22, 44, 33}}; 

  sortRows(v);

  cout << "[\n";
  // for each loop that goes through each row 
  for (auto &row : v) {
    cout << " [";
    for(int i = 0; i < row.size(); i++) { // going through each element in that row
      if (i > 0) cout << ", ";
      cout << row[i];
    }
    cout << "]\n";
  }
  cout << "]\n";

  return 0;
}

// notes
// Time Complexity: O(r * c * log(c))
//  Looping through each row r 
//  For each row, sorting c elements O(c*log(c))
// Auxiliary Space: O(1) 
//  Sorting in place, and not creating new space