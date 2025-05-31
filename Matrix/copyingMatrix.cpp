#include <iostream>
using namespace std;
const int N = 4; 
// #define N 4 // Preprocessor Directive "Everywhere you see N, replace it with 4 before compiling" old
/*
Time Complexity: O(N*N) because of nested loops
Space Complexity: O(N*N) because 2d array is created to store transpose 
*/


// transpose of a matrix means flipping it over its diagonal:
// row becomes column and column becomes row
void transpose(int A[][N], int B[][N]) {
  for (int i = 0; i < N; i++) { // itterating each row 
    for(int j = 0; j < N; j++) { // itterating each column
      B[i][j] = A[j][i]; // taking A's column and putting it in B's row
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
  
  int B[N][N]; 

  transpose(A, B); 

  cout << "Matrix A: " << endl;
  printMatrix(A);

  cout << "Transpose Matrix A to Matrix B: " << endl;
  printMatrix(B);
  
  return 0;
}