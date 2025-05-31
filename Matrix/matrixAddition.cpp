#include <iostream>
using namespace std;
const int N = 4; 

/*
  Time Complexity: O(N^2)
  Space Complexity: O(N^2)
*/

// This function adds A[][] and B[][]
// and stores the result in C[][]
void addMatrix(int A[][N], int B[][N], int C[][N]) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
        C[i][j] = A[i][j] + B[i][j]; 
    }
  }
}

void printMatrix(int A[][N]) {
  for (int i = 0; i < N; i++) {
    cout << "{"; 
    for (int j = 0; j < N; j++) {
      cout << A[i][j]; 
      if (j < 3) cout << ", "; 
    }
    cout << "}" << endl;
  }
  cout << endl;
}


int main() {
  int A[N][N] = {{1, 1, 1, 1},
                 {2, 2, 2, 2},
                 {3, 3, 3, 3},
                 {4, 4, 4, 4}};
  
  int B[N][N] = {{1, 1, 1, 1},
                 {2, 2, 2, 2},
                 {3, 3, 3, 3},
                 {4, 4, 4, 4}};

  int C[N][N]; // to store the result 

  addMatrix(A, B, C);

  cout << "Result Matrix is " << endl;
  printMatrix(C);

  return 0;
}